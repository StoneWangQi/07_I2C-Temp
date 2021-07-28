#ifndef  __LED_BOOK_H_
#define  __LED_BOOK_H_

#include "stm32f10x.h"


#define   LED_OUT_GPIO_Port     GPIOB                 //GPIO Point
#define   LED_OUT_GPIO_Clock    RCC_APB2Periph_GPIOB  //GPIO clock
#define   LED_OUT_GPIO_Pin      GPIO_Pin_5            //
#define   LED_OUT_GPIO_Pin_Bit  5
#define   LED_OUT_GPIO_Modle    GPIO_Mode_Out_PP


typedef enum {
		LED_Corporate_On = 1,
		LED_Corporate_OFF = 2,
		LED_Corporate_Toggle = 3, 
} LED_Corporate_state_t;

void fn_LED_GPIO_Config(GPIO_TypeDef* _GPIO_x , uint32_t _GPIO_Clock ,\
          uint16_t _GPIO_Pin_x , GPIOMode_TypeDef _GPIOMode_TypeDef);

void fn_LED_Corporate(GPIO_TypeDef* _GPIO_x , uint16_t _GPIO_Pin_x , \
          LED_Corporate_state_t _LED_Corporate_state_t );
  



#endif

