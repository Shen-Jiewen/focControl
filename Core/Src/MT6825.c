#include "MT6825.h"

void Enable_MT6835(void)
{
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_RESET);
}

void Disable_MT6835(void)
{
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,GPIO_PIN_SET);
}

uint32_t 	Angle;
uint8_t 	TxData;
uint8_t 	RxData[3];

uint32_t MT6825SPI_get_angle(void) {
		Enable_MT6835();
		TxData = MT6825_SPI_ANGLE1_REG | MT6825_SPI_READ_CMD;
    // 使用HAL SPI传输/接收函数
    HAL_SPI_TransmitReceive(&hspi1,(unsigned char *)&TxData,(unsigned char *)&RxData, 3, 100);
		Disable_MT6835();
    return (RxData[0] << 10) | ((RxData[1] & 0xFFFC) << 2) | (RxData[2] >> 4);
}
