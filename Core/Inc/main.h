/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED1_Pin GPIO_PIN_13
#define LED1_GPIO_Port GPIOC
#define LED2_Pin GPIO_PIN_14
#define LED2_GPIO_Port GPIOC
#define LED3_Pin GPIO_PIN_15
#define LED3_GPIO_Port GPIOC
#define RGB_Pin GPIO_PIN_5
#define RGB_GPIO_Port GPIOA
#define LCD_RES_Pin GPIO_PIN_15
#define LCD_RES_GPIO_Port GPIOA
#define LCD_SCK_Pin GPIO_PIN_10
#define LCD_SCK_GPIO_Port GPIOC
#define LCD_DC_Pin GPIO_PIN_11
#define LCD_DC_GPIO_Port GPIOC
#define LCD_SDA_Pin GPIO_PIN_12
#define LCD_SDA_GPIO_Port GPIOC
#define LCD_CS_Pin GPIO_PIN_2
#define LCD_CS_GPIO_Port GPIOD
#define SCK_Pin GPIO_PIN_3
#define SCK_GPIO_Port GPIOB
#define MISO_Pin GPIO_PIN_4
#define MISO_GPIO_Port GPIOB
#define MOSI_Pin GPIO_PIN_5
#define MOSI_GPIO_Port GPIOB
#define CSN_Pin GPIO_PIN_6
#define CSN_GPIO_Port GPIOB
#define LCD_BLK_Pin GPIO_PIN_7
#define LCD_BLK_GPIO_Port GPIOB
#define CAN_RX_Pin GPIO_PIN_8
#define CAN_RX_GPIO_Port GPIOB
#define CAN_TX_Pin GPIO_PIN_9
#define CAN_TX_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
