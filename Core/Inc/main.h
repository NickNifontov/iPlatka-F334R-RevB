/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

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
#define IGLA_CMD_Pin GPIO_PIN_13
#define IGLA_CMD_GPIO_Port GPIOC
#define DEV_MODE_Pin GPIO_PIN_14
#define DEV_MODE_GPIO_Port GPIOC
#define NC_TOPAB_Pin GPIO_PIN_15
#define NC_TOPAB_GPIO_Port GPIOC
#define OSC_IN_Pin GPIO_PIN_0
#define OSC_IN_GPIO_Port GPIOF
#define OSC_OUT_Pin GPIO_PIN_1
#define OSC_OUT_GPIO_Port GPIOF
#define ADC_I_OP_Pin GPIO_PIN_0
#define ADC_I_OP_GPIO_Port GPIOC
#define ADC_16V_Pin GPIO_PIN_1
#define ADC_16V_GPIO_Port GPIOC
#define NC_ADC_COIL_OP_Pin GPIO_PIN_2
#define NC_ADC_COIL_OP_GPIO_Port GPIOC
#define NC_ADC_COIL_Pin GPIO_PIN_3
#define NC_ADC_COIL_GPIO_Port GPIOC
#define ADC_V_OP_Pin GPIO_PIN_0
#define ADC_V_OP_GPIO_Port GPIOA
#define ADC_V_Pin GPIO_PIN_1
#define ADC_V_GPIO_Port GPIOA
#define ADC_TEMP_Pin GPIO_PIN_2
#define ADC_TEMP_GPIO_Port GPIOA
#define ADC_RAW_Pin GPIO_PIN_3
#define ADC_RAW_GPIO_Port GPIOA
#define DAC_V_Pin GPIO_PIN_4
#define DAC_V_GPIO_Port GPIOA
#define DAC_I_Pin GPIO_PIN_5
#define DAC_I_GPIO_Port GPIOA
#define DAC_CURRENT_Pin GPIO_PIN_6
#define DAC_CURRENT_GPIO_Port GPIOA
#define POLKA_Pin GPIO_PIN_7
#define POLKA_GPIO_Port GPIOA
#define ADC_I_Pin GPIO_PIN_4
#define ADC_I_GPIO_Port GPIOC
#define NC_ADC_PEREK_Pin GPIO_PIN_5
#define NC_ADC_PEREK_GPIO_Port GPIOC
#define CURR_AC_SECATOR_Pin GPIO_PIN_0
#define CURR_AC_SECATOR_GPIO_Port GPIOB
#define NC_SYNC_Pin GPIO_PIN_1
#define NC_SYNC_GPIO_Port GPIOB
#define SCIN_Pin GPIO_PIN_2
#define SCIN_GPIO_Port GPIOB
#define SCIN_EXTI_IRQn EXTI2_TSC_IRQn
#define PEREK_SIGNAL_Pin GPIO_PIN_10
#define PEREK_SIGNAL_GPIO_Port GPIOB
#define PEREK_SIGNAL_EXTI_IRQn EXTI15_10_IRQn
#define KLAPAN_Pin GPIO_PIN_11
#define KLAPAN_GPIO_Port GPIOB
#define NC_ADC_CITY_Pin GPIO_PIN_12
#define NC_ADC_CITY_GPIO_Port GPIOB
#define NC_ADC_CITY_OP_Pin GPIO_PIN_13
#define NC_ADC_CITY_OP_GPIO_Port GPIOB
#define NC_LOW_Pin GPIO_PIN_6
#define NC_LOW_GPIO_Port GPIOC
#define LED3_Pin GPIO_PIN_7
#define LED3_GPIO_Port GPIOC
#define LED_Pin GPIO_PIN_8
#define LED_GPIO_Port GPIOC
#define IGLA_Pin GPIO_PIN_9
#define IGLA_GPIO_Port GPIOC
#define B50HZ_Pin GPIO_PIN_8
#define B50HZ_GPIO_Port GPIOA
#define A50HZ_Pin GPIO_PIN_9
#define A50HZ_GPIO_Port GPIOA
#define INA_Pin GPIO_PIN_10
#define INA_GPIO_Port GPIOA
#define INB_Pin GPIO_PIN_11
#define INB_GPIO_Port GPIOA
#define FLT_ONOFF_IT_Pin GPIO_PIN_12
#define FLT_ONOFF_IT_GPIO_Port GPIOA
#define FLT_ONOFF_IT_EXTI_IRQn EXTI15_10_IRQn
#define DIO_Pin GPIO_PIN_13
#define DIO_GPIO_Port GPIOA
#define CLK_Pin GPIO_PIN_14
#define CLK_GPIO_Port GPIOA
#define FLT_ONOFF_Pin GPIO_PIN_15
#define FLT_ONOFF_GPIO_Port GPIOA
#define TX_Pin GPIO_PIN_10
#define TX_GPIO_Port GPIOC
#define RX_Pin GPIO_PIN_11
#define RX_GPIO_Port GPIOC
#define NC_TOPAB_IN_Pin GPIO_PIN_12
#define NC_TOPAB_IN_GPIO_Port GPIOC
#define EN_UCC_Pin GPIO_PIN_2
#define EN_UCC_GPIO_Port GPIOD
#define SCOUT_Pin GPIO_PIN_3
#define SCOUT_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_4
#define LED2_GPIO_Port GPIOB
#define COOLER_Pin GPIO_PIN_5
#define COOLER_GPIO_Port GPIOB
#define SCL_Pin GPIO_PIN_6
#define SCL_GPIO_Port GPIOB
#define IGLA_EE_Pin GPIO_PIN_7
#define IGLA_EE_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_8
#define BUZZER_GPIO_Port GPIOB
#define SDA_Pin GPIO_PIN_9
#define SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
