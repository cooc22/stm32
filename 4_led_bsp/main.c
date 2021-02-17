#include "clk.h"
#include "delay.h"
#include "led.h"

/*
 * @description	: mian函数
 * @param 		: 无
 * @return 		: 无
 */
int main(void)
{
	clk_enable();		/* 使能所有的时钟 			*/
	led_init();			/* 初始化led 			*/

	while(1)			
	{	
		/* 打开LED0 */
		led_switch(LED0,ON);		
		delay(300);

		/* 关闭LED0 */
		led_switch(LED0,OFF);	
		delay(300);
	}

	return 0;
}
