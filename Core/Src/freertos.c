/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */     
#include "tim.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
/* Definitions for BootOcIgla */
osThreadId_t BootOcIglaHandle;
const osThreadAttr_t BootOcIgla_attributes = {
  .name = "BootOcIgla",
  .priority = (osPriority_t) osPriorityNormal,
  .stack_size = 128 * 4
};
/* Definitions for BuzzerCoolerLed */
osThreadId_t BuzzerCoolerLedHandle;
const osThreadAttr_t BuzzerCoolerLed_attributes = {
  .name = "BuzzerCoolerLed",
  .priority = (osPriority_t) osPriorityBelowNormal,
  .stack_size = 128 * 4
};
/* Definitions for ADC_TEMP_V16_RA */
osThreadId_t ADC_TEMP_V16_RAHandle;
const osThreadAttr_t ADC_TEMP_V16_RA_attributes = {
  .name = "ADC_TEMP_V16_RA",
  .priority = (osPriority_t) osPriorityBelowNormal,
  .stack_size = 128 * 4
};
/* Definitions for UART_I2C */
osThreadId_t UART_I2CHandle;
const osThreadAttr_t UART_I2C_attributes = {
  .name = "UART_I2C",
  .priority = (osPriority_t) osPriorityLow,
  .stack_size = 128 * 4
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */
   
/* USER CODE END FunctionPrototypes */

void StartBootOcIgla(void *argument);
void StartBuzzerCoolerLed_5Sec(void *argument);
void StartADC_TEMP_V16_RAW(void *argument);
void StartUART_I2C(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */
       
  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of BootOcIgla */
  BootOcIglaHandle = osThreadNew(StartBootOcIgla, NULL, &BootOcIgla_attributes);

  /* creation of BuzzerCoolerLed */
  BuzzerCoolerLedHandle = osThreadNew(StartBuzzerCoolerLed_5Sec, NULL, &BuzzerCoolerLed_attributes);

  /* creation of ADC_TEMP_V16_RA */
  ADC_TEMP_V16_RAHandle = osThreadNew(StartADC_TEMP_V16_RAW, NULL, &ADC_TEMP_V16_RA_attributes);

  /* creation of UART_I2C */
  UART_I2CHandle = osThreadNew(StartUART_I2C, NULL, &UART_I2C_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

}

/* USER CODE BEGIN Header_StartBootOcIgla */
/**
  * @brief  Function implementing the BootOcIgla thread.
  * @param  argument: Not used 
  * @retval None
  */
/* USER CODE END Header_StartBootOcIgla */
void StartBootOcIgla(void *argument)
{
  /* USER CODE BEGIN StartBootOcIgla */
  /* Infinite loop */

	  osDelay(3000);

	  htim1.Init.CounterMode = TIM_COUNTERMODE_CENTERALIGNED1;
	  HAL_TIM_Base_Init(&htim1);

	  HAL_TIM_Base_Start_IT(&htim1);
	  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
	  HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_2);

  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartBootOcIgla */
}

/* USER CODE BEGIN Header_StartBuzzerCoolerLed_5Sec */
/**
* @brief Function implementing the BuzzerCoolerLed thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartBuzzerCoolerLed_5Sec */
void StartBuzzerCoolerLed_5Sec(void *argument)
{
  /* USER CODE BEGIN StartBuzzerCoolerLed_5Sec */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartBuzzerCoolerLed_5Sec */
}

/* USER CODE BEGIN Header_StartADC_TEMP_V16_RAW */
/**
* @brief Function implementing the ADC_TEMP_V16_RA thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartADC_TEMP_V16_RAW */
void StartADC_TEMP_V16_RAW(void *argument)
{
  /* USER CODE BEGIN StartADC_TEMP_V16_RAW */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartADC_TEMP_V16_RAW */
}

/* USER CODE BEGIN Header_StartUART_I2C */
/**
* @brief Function implementing the UART_I2C thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartUART_I2C */
void StartUART_I2C(void *argument)
{
  /* USER CODE BEGIN StartUART_I2C */
  /* Infinite loop */
  for(;;)
  {
    osDelay(1);
  }
  /* USER CODE END StartUART_I2C */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */
     
/* USER CODE END Application */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
