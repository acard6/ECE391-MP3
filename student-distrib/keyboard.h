/* keyboard.h - Defines used in interactions with the keyboard interrupt
 * controller
 */


#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "types.h"

/* initialize keyboard by enabling irq 1 in pic */
void keyboard_init(void);



int check_for_modifier(uint8_t scan_code);

/* reads input from keyboard dataport when an interrupt occurs and put it to video memory */
extern void keyboard_handler(void);


int32_t terminal_read(int32_t fd, void* buf, int32_t nbytes);/* write to the terminal with the contant in the buf of length */
int32_t terminal_write (int32_t fd, const void* input_buf, int32_t nbytes);
int32_t terminal_open (const uint8_t* fname);
int32_t terminal_close (int32_t fd);



void get_char(char new_char);

#endif /* KEYBOARD_H */

