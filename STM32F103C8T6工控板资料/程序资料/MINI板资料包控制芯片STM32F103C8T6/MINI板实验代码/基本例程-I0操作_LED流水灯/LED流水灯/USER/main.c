/******************** ��ʢ���ӹ����� ********************
 * �ļ���  ��main.c
 * ����    �������ϵ�LED1��LED2��LED3������˸��         
 * ʵ��ƽ̨��MINI STM32������ ����STM32F103C8T6
 * ��汾  ��ST3.0.0  																										  
 * �Ա��꣺http://shop66177872.taobao.com
*********************************************************/	

#include "stm32f10x.h"
#include "led.h"

void Delay(__IO u32 nCount); 

int main(void)
{
	    
 SystemInit();	// ����ϵͳʱ��Ϊ72M 	
 LED_GPIO_Config(); //LED �˿ڳ�ʼ�� 

  while (1)
  {
		LED1( ON );			  // ��
		Delay(0x200000);
		LED1( OFF );		  // ��

		LED2( ON );
		Delay(0x200000);
		LED2( OFF ); 	
  }
}

void Delay(__IO u32 nCount)
{
  for(; nCount != 0; nCount--);
} 



