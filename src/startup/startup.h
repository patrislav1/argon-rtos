/*
 * File:    startup.h
 * Purpose: Initialize memory and zero out zero regions. Move necessary code
 *          to RAM.
 *
 * Notes:   
 */

#ifndef _STARTUP_H_
#define _STARTUP_H_

/********************************************************************/

void start(void);
void init_data_bss(void);

/********************************************************************/

#endif /* _STARTUP_H_ */
