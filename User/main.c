/*
 * main.c
 *
 *	裸机程序
 *
 *  Created on: 2022-6-15
 *      Author: tly
 */


#include "stm32f10x.h"
#include "user_led.h"


/*****************************************************************************
Function Name        :: void Delay(u32 count)
Function Description :: 延时函数
Input Parameters     :: No
Return Value         :: No
Condition            :: No
Tips                 :: 
Function called	-

Last Chang Date      : 2022/06/15		
*****************************************************************************/
 void Delay(u32 count)
 {
   u32 i=0;
   for(;i<count;i++);
 }
 
 
 /*****************************************************************************
Function Name        :: int main(void)
Function Description :: 主函数
Input Parameters     :: No
Return Value         :: No
Condition            :: No
Tips                 :: 
Function called	-

Last Chang Date      : 2022/06/15		
*****************************************************************************/
 int main(void)
 {	
		LED_Init(); 
	 
		while(1)
		{
			#if 0
				GPIO_ResetBits(GPIOB,GPIO_Pin_5);
				GPIO_SetBits(GPIOE,GPIO_Pin_5);
				Delay(3000000);
				GPIO_SetBits(GPIOB,GPIO_Pin_5);
				GPIO_ResetBits(GPIOE,GPIO_Pin_5);
				Delay(3000000);
			#else
				LED1_OFF;
				LED2_OFF;
				Delay(3000000);
				LED1_ON;
				LED2_ON;
				Delay(3000000);
			#endif
		}
 }

