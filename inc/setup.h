//
//  setup.h
//  test
//
//  Created by Rene on 09/12/13.
//  Copyright (c) 2013 Rene Hopf. All rights reserved.
//

#pragma once

#include "stm32f4xx_conf.h"
//#include "misc.h"
#include "version.h"
#include "common.h"
#include "hw/hw.h"
#define U_ID ((__IO uint32_t *)0x1FFF7A10)

//sample times for F4: 3,15,28,56,84,112,144,480
#define RES_SampleTime ADC_SampleTime_3Cycles

#define ADC_ANZ 60
#define PID_WAVES 4

void setup(void);
void setup_res(void);

volatile uint32_t ADC_DMA_Buffer0[ADC_ANZ * PID_WAVES];
volatile uint32_t ADC_DMA_Buffer1[ADC_ANZ * PID_WAVES];

RCC_ClocksTypeDef RCC_Clocks;
