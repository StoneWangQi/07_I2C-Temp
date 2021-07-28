#include "Led_book.h"


#define LED_GPIO_Speed GPIO_Speed_10MHz 
void fn_LED_GPIO_Config(GPIO_TypeDef* _GPIO_x , uint32_t _GPIO_Clock ,uint16_t _GPIO_Pin_x , GPIOMode_TypeDef _GPIOMode_TypeDef){
  GPIO_InitTypeDef  GPIO_InitStruct;
  GPIO_InitStruct.GPIO_Mode = _GPIOMode_TypeDef;
  GPIO_InitStruct.GPIO_Pin = _GPIO_Pin_x;
  GPIO_InitStruct.GPIO_Speed = LED_GPIO_Speed;
  RCC_APB2PeriphClockCmd(_GPIO_Clock ,ENABLE);
  GPIO_Init(_GPIO_x , &GPIO_InitStruct) ; 
}

void fn_LED_Corporate(GPIO_TypeDef*  _GPIO_x , uint16_t  _GPIO_Pin_x , LED_Corporate_state_t  _LED_Corporate_state_t ){
  
  switch(_LED_Corporate_state_t){
    case  LED_Corporate_On :
      GPIO_SetBits(_GPIO_x,_GPIO_Pin_x);
      break;
		case  LED_Corporate_OFF:
      GPIO_ResetBits(_GPIO_x,_GPIO_Pin_x);
      break;
		case  LED_Corporate_Toggle:
      GPIO_ReadOutputDataBit(_GPIO_x,_GPIO_Pin_x)?GPIO_ResetBits(_GPIO_x,_GPIO_Pin_x):GPIO_SetBits(_GPIO_x,_GPIO_Pin_x);
      break;    
  }

}


//practice
//fn_LED_GPIO_Config (LED_OUT_GPIO_Port,LED_OUT_GPIO_Clock,LED_OUT_GPIO_Pin,LED_OUT_GPIO_Modle);
// while(1){
//  delay(10000);
//  fn_LED_Corporate(LED_OUT_GPIO_Port,LED_OUT_GPIO_Pin,LED_Corporate_Toggle);		 
// }	 








