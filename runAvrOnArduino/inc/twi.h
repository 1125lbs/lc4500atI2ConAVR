/*
 * IncFile1.h
 *
 * Created: 5/14/2014 5:52:04 PM
 *  Author: ms
 */ 


#ifndef TWI_H_
#define TWI_H_

#include <avr/io.h>

void TWIInit(void);
void TWIStart(void);
void TWIStop(void);
void TWIWrite(uint8_t u8data);
uint8_t TWIReadACK(void);
uint8_t TWIReadNACK(void);
uint8_t TWIGetStatus(void);



#endif /* INCFILE1_H_ */