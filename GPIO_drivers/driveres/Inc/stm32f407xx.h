/*
 * stm32f407xx.h
 *
 *  Created on: Mar 24, 2024
 *      Author: pratik
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

#define __vo volatile


#define FLASH_BASE				0x00000000U		/*This is a base address of flash memory */
#define SRAM1_BASE				0x20000000U		/*this is a base address of SRAM1*/
#define SRAM2_BASE				0x20001C00U
#define ROM_BASE				0x1FFF0000U
#define SRAM					SRAM1_BASE


//ABHx and APBx Bus Peripheral base addresses


#define PERIPH_BASE					0x40000000U
#define APB1PERIPH_BASE				PERIPH_BASE
#define APB2PERIPH_BASE				0x40010000U
#define ABHPHERIPH_BASE				0x40020000U
#define AHB2PERIPH_BASE				0x50000000U


#define	GPIOA_BASEADDR				(AHB1PERIPH_BASE+0x0000)
#define GPIOB_BASEADDR				(AHB1PERIPH_BASE+0x0400)
#define GPIOC_BASEADDR				(AHB1PERIPH_BASE+0x0800)
#define GPIOD_BASEADDR				(AHB1PERIPH_BASE+0x0C00)
#define GPIOE_BASEADDR				(AHB1PERIPH_BASE+0x1000)
#define GPIOF_BASEADDR				(AHB1PERIPH_BASE+0x1400)
#define GPIOG_BASEADDR				(AHB1PERIPH_BASE+0x1800)
#define GPIOH_BASEADDR				(AHB1PERIPH_BASE+0x1C00)
#define GPIOI_BASEADDR				(AHB1PERIPH_BASE+0x2000)



#define I2C1_BASE				(APB1PERIPH_BASE+0x5400)
#define I2C2_BASE				(APB1PERIPH_BASE+0x5800)
#define I2C3_BASE				(APB1PERIPH_BASE+0x5C00)

#define SPI2_BASE				(APB1PERIPH_BASE+0x3800)
#define SPI2_BASE				(APB1PERIPH_BASE+0x3C00)

#define USART2_BASE				(APB1PERIPH_BASE+0x4400)
#define USART3_BASE				(APB1PERIPH_BASE+0x4800)
#define UART4_BASE				(APB1PERIPH_BASE+0x4C00)
#define UART5_BASE				(APB1PERIPH_BASE+0x5000)


#define EXIT_BASE				(APB2PERIPH_BASE+0x3C00)
#define SPI1_BASE				(APB2PERIPH_BASE+0x3000)
#define SYSCFG_BASE				(APB2PERIPH_BASE+0x3800)
#define USART1_BASE				(APB2PERIPH_BASE+0x1000)
#define USART6_BASE				(APB2PERIPH_BASE+0x1400)



typedef struct
{
	__vo uint32_t MODER;
	__vo uint32_t OTYPER;
	__vo uint32_t OSPEEDR;
	__vo uint32_t PUPDR;
	__vo uint32_t IDR;
	__vo uint32_t ODR;
	__vo uint32_t BSRR;
	__vo uint32_t LCKR;
	__vo uint32_t AFR[2];

}GPIO_RegDef_t;


#define GPIOA		((GPIO_RegDef_t)GPIOA_BASE)
#define GPIOB		((GPIO_RegDef_t)GPIOB_BASE)
#define GPIOC		((GPIO_RegDef_t)GPIOC_BASE)
#define GPIOD		((GPIO_RegDef_t)GPIOD_BASE)
#define GPIOE		((GPIO_RegDef_t)GPIOE_BASE)
#define GPIOF		((GPIO_RegDef_t)GPIOF_BASE)
#define GPIOG		((GPIO_RegDef_t)GPIOG_BASE)
#define GPIOH		((GPIO_RegDef_t)GPIOH_BASE)
#define GPIOI		((GPIO_RegDef_t)GPIOI_BASE)


#endif /* INC_STM32F407XX_H_ */
