/*
 * dlpstatus.h
 *
 * Created: 5/15/2014 3:40:58 PM
 *  Author: ms
 */ 

/*
status code:

0x08: start condition sent
0x10: repeated start sent
0x18: SLA+W sent, ACK received
0x20: SLA+W sent, NACK received
0x28: data sent, ACK received
0x30: data sent, NACK received
0x38: lost in SLA+W or data or SLA+R or NACK
0x40: SLA+R sent, ACK received
0x48: SLA+R sent, NACK received
0x50: data byte received, ACK returned
0x58: data byte received, NACK returned
*/


#ifndef DLPSTATUS_H_
#define DLPSTATUS_H_


#define slaveDeviceId 0x1A
#define writeOnLow 0x34
#define readOnLow 0x35

/* commands for DLPC 350 */
#define writeFlag 0x80

#define testCommand4reg 0x04
#define hardwareStatusReadOnly 0x20
#define systemStatusReadOnly 0x21
#define mainStatusReadOnly 0x22

#define firmVersion 0x11
#define powerControlRead 0x07
#define powerControlWrite 0x07|0x80
#define softwareResetRead 0x13
#define softwareResetWrite 0x13|0x80

#define displayModeRead 0x69
#define displayModeWrite 0x69 | 0x80

#define displayModeControlRead 0x65
#define displayModeControlWrite 0x65|0x80

#define displayDataInputSourceRead 0x6F
#define displayDataInputSourceWrite 0x6F|0x80

#define patternDisplayLUTControlRead 0x75
#define patternDisplayLUTControlWrite 0x75 | 0x80

#define patternTriggerModeRead 0x70
#define patternTriggerModeWrite 0x70 | 0x80

#define patternExposureTimeAndFrameRead 0x66
#define patternExposureTimeAndFrameWrite 0x66|0x80

#define patternDisplayLUTAccessWriteOnly 0x77|0x80
#define patternDisplayMailboxOffsetWriteOnly 0x76|0x80
#define patternDisplayImageIndexWriteOnly 0x78|0x80

#define patternDisplayValidationRead 0x7D
#define patternDisplayValidationWrite 0x7D|0x80

#endif /* DLPSTATUS_H_ */