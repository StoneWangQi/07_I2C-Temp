/**
  ******************************************************************************
  * @file    GPIO/JTAG_Remap/main.c 
  * @author  MCD Application Team
  * @version V3.5.0
  * @date    08-April-2011
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * 
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "PROJ_book.h" 

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */
void delay(int x);

int main(void)
{
//   HRCC_fn_SetSystic(RCC_PLLMul_9 );
//   IRCC_fn_SetSystic(RCC_PLLMul_9 );
     
      
     fn_LED_GPIO_Config (LED_OUT_GPIO_Port,LED_OUT_GPIO_Clock,LED_OUT_GPIO_Pin,LED_OUT_GPIO_Modle);
     while(1){
      delay(10000);
		  fn_LED_Corporate(LED_OUT_GPIO_Port,LED_OUT_GPIO_Pin,LED_Corporate_Toggle);		 
     }	 
   
  
}


void delay(int x){
	int y = 0xFFFFF;
	while((x--)>0){
		while((y--)>0){
			__NOP();
			__NOP();
			__NOP();
			__NOP();
			__NOP();
		}
	}
}
/******************* (C) COPYRIGHT 2011 STMicroelectronics *****END OF FILE****/
