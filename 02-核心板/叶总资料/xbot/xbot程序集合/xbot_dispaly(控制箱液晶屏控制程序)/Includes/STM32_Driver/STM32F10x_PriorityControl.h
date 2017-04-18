
#ifndef _PRIORITYPARAMETER_H
#define _PRIORITYPARAMETER_H
#include <stm32f10x.h>
#ifdef __cplusplus
 extern "C" {
#endif

#include <stdint.h>	

//中断分组2 4个响应级别 4个抢占级别
#define STM32_NVIC_PriorityGroup		NVIC_PriorityGroup_2

#define NVIC_PRIORITY_NULL			0X00

#define NVIC_PRIORITY_HIGHEST		0X00
#define NVIC_PRIORITY_HIGHER		0X01
#define NVIC_PRIORITY_MIDDLE		0X02
#define NVIC_PRIORITY_LOW				0X03

#define NVIC_PRIORITY_LOWER			0X04	
#define NVIC_PRIORITY_LOWEST		0X05	

#define STM32_NVIC_USART1_PrePriority 	NVIC_PRIORITY_HIGHEST
#define STM32_NVIC_USART2_PrePriority 	NVIC_PRIORITY_HIGHEST
#define STM32_NVIC_USART3_PrePriority 	NVIC_PRIORITY_HIGHEST
#define STM32_NVIC_USART4_PrePriority 	NVIC_PRIORITY_HIGHEST
#define STM32_NVIC_USART5_PrePriority 	NVIC_PRIORITY_HIGHEST
#define STM32_NVIC_USART6_PrePriority 	NVIC_PRIORITY_HIGHEST

#define STM32_NVIC_TIM2_PrePriority		NVIC_PRIORITY_HIGHER
#define STM32_NVIC_TIM3_PrePriority		NVIC_PRIORITY_LOW
#define STM32_NVIC_TIM4_PrePriority		NVIC_PRIORITY_MIDDLE

#define STM32_NVIC_USART1_SubPriority 	NVIC_PRIORITY_HIGHEST 	
#define STM32_NVIC_USART2_SubPriority 	NVIC_PRIORITY_HIGHEST 	
#define STM32_NVIC_USART3_SubPriority 	NVIC_PRIORITY_HIGHEST 	
#define STM32_NVIC_USART4_SubPriority 	NVIC_PRIORITY_HIGHEST 	
#define STM32_NVIC_USART5_SubPriority 	NVIC_PRIORITY_HIGHEST 
#define STM32_NVIC_USART6_SubPriority 	NVIC_PRIORITY_HIGHEST 

#define STM32_NVIC_TIM2_SubPriority		NVIC_PRIORITY_HIGHER
#define STM32_NVIC_TIM3_SubPriority		NVIC_PRIORITY_LOW
#define STM32_NVIC_TIM4_SubPriority		NVIC_PRIORITY_MIDDLE

void setSystemPriorityGroup(void);
void setIRQPriority(uint8_t NVIC_IRQChannel,uint8_t NVIC_IRQChannelPreemptionPriority,uint8_t NVIC_IRQChannelSubPriority);
// NVIC_PriorityGroupConfig(STM32_NVIC_PriorityGroup);
#ifdef __cplusplus
}
#endif
#endif

