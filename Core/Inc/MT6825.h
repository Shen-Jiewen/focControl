#ifndef _MT6825_H_
#define _MT6825_H_

#include "spi.h"
#include "gpio.h"

//CMD
#define MT6825_SPI_READ_CMD   0x80
#define MT6825_SPI_WRITE_CMD  0x00
#define MT6825_SPI_ANGLE1_REG 0x03
#define MT6825_SPI_ANGLE2_REG 0x04
#define MT6825_SPI_ANGLE3_REG 0x05

#define MT6825_SPI_ANGLE_BIT_MASK      0xF8
#define MT6825_SPI_NO_MAG_BIT_MASK     0x02
#define MT6825_SPI_PC_BIT_MASK         0x01
#define MT6825_SPI_OVER_SPEED_BIT_MASK 0x18

extern uint32_t 	Angle;
extern uint8_t 	TxData;
extern uint8_t 	RxData[3];

uint32_t MT6825SPI_get_angle(void);

#endif
