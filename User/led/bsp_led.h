#ifndef _BSP_LED_H
#define _BSP_LED_H

#include "stm32f10x.h"

#define LED_G_GPIO_PIN    GPIO_Pin_0
#define LED_G_GPIO_PROT   GPIOB
#define LED_G_GPIO_CLK    RCC_APB2Periph_GPIOB

#define 	ON   1
#define   OFF  0

#define  LED_G(a)   if(a) GPIO_ResetBits(LED_G_GPIO_PROT, LED_G_GPIO_PIN);\
                    else GPIO_SetBits(LED_G_GPIO_PROT, LED_G_GPIO_PIN);

void LED_GPIO_Config(void);

#endif /*_BSP_LED_H*/

