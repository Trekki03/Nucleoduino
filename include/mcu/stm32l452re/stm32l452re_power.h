/**
 * @file stm32l452re_power.h
 * @author Trekki03 (trekki03_yt@yahoo.com)
 * @brief Contains all stm32l452re specific power values/registers etc.
 * @version 0.1
 * @date 2021-08-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef STM32L452RE_POWER_H
#define STM32L452RE_POWER_H

#include "stdint.h"

/*********************************************************************
 * 
 * RCC REGISTER
 * 
 ********************************************************************/

typedef struct
{
    volatile uint32_t CR1;                          ///< Power control register 1    
    volatile uint32_t CR2;                          ///< Power controk register 2
    volatile uint32_t CR3;                          ///< Power controk register 3   
    volatile uint32_t CR4;                          ///< Power controk register 4   
    volatile uint32_t SR1;                          ///< Power status register 1
    volatile uint32_t SR2;                          ///< Power status register 2   
    volatile uint32_t SCR;                          ///< Power status clear register   
             uint32_t PWR_OFFSET_DONT_USE_0; 
    volatile uint32_t PUCRA;                        ///< Power Port A pull-up control register
    volatile uint32_t PDCRA;                        ///< Power Port A pull-down control register
    volatile uint32_t PUCRB;                        ///< Power Port B pull-up control register
    volatile uint32_t PDCRB;                        ///< Power Port B pull-down control register
    volatile uint32_t PUCRC;                        ///< Power Port C pull-up control register
    volatile uint32_t PDCRC;                        ///< Power Port C pull-down control register
    volatile uint32_t PUCRD;                        ///< Power Port D pull-up control register
    volatile uint32_t PDCRD;                        ///< Power Port D pull-down control register
    volatile uint32_t PUCRE;                        ///< Power Port E pull-up control register
    volatile uint32_t PDCRE;                        ///< Power Port E pull-down control register
             uint32_t PWR_OFFSET_DONT_USE_1;
             uint32_t PWR_OFFSET_DONT_USE_2;
             uint32_t PWR_OFFSET_DONT_USE_3;
             uint32_t PWR_OFFSET_DONT_USE_4;
    volatile uint32_t PUCRH;                        ///< Power Port H pull-up control register
    volatile uint32_t PDCRH;                        ///< Power Port H pull-down control register
} pwr_struct_t;

extern pwr_struct_t*        const PWR;              ///< PWR base address struct


/*********************************************************************
 * 
 * TypeDefs
 * 
 ********************************************************************/

typedef enum
{
    VOLTAGE_SCALE_1 = 0b01,                         ///< voltageregulator scale 1
    VOLTAGE_SCALE_2 = 0b10                          ///< voltageregulator scale 2
} volate_regulator_scale_t;


/*********************************************************************
 * 
 * Values for functions
 * 
 ********************************************************************/

//Set Voltage Regulator Scale
#define SET_VOLTAGE_REGULATOR_SCALE_REGISTER_ADDR &(PWR->CR1)
#define SET_VOLTAGE_REGULATOR_SCALE_VALUE_LENGTH 2
#define SET_VOLTAGE_REGULATOR_SCALE_REGISTER_OFFSET 9


#endif /* STM32L452RE_POWER_H */
