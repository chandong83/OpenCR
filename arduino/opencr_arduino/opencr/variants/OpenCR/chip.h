#ifndef _CHIP_OPENCR_F7xx_
#define _CHIP_OPENCR_F7xx_

#include <stdbool.h>
#include "hal.h"
#include "drv.h"



#define millis(a1) 	HAL_GetTick(a1)
#define delay(a2) 	HAL_Delay(a2)



#define USE_SPI1
#define USE_SPI2


#define BOARD_NR_I2C  2
#define HAL_I2C1      I2C1
#define HAL_I2C2      I2C2
#define HAL_I2C3      I2C3


#define BOARD_NR_ADC_PINS       5
#define BOARD_NR_PWM_PINS       12

#define LED_BUILTIN             13

#define BDPIN_LED_USER_1        22
#define BDPIN_LED_USER_2        23
#define BDPIN_LED_USER_3        24
#define BDPIN_LED_USER_4        25
#define BDPIN_DIP_SW_1          26
#define BDPIN_DIP_SW_2          27
#define BDPIN_SPI_CS_IMU        28
#define BDPIN_BAT_PWR_ADC       29
#define BDPIN_CHG_PWR_ADC       30
#define BDPIN_BUZZER            31
#define BDPIN_DXL_PWR_EN        32
#define BDPIN_LED_BATT_CHARGE   33
#define BDPIN_PUSH_SW_1         34
#define BDPIN_PUSH_SW_2         35
#define BDPIN_LED_STATUS        36

#define BDPIN_GPIO_1            50
#define BDPIN_GPIO_2            51
#define BDPIN_GPIO_3            52
#define BDPIN_GPIO_4            53
#define BDPIN_GPIO_5            54
#define BDPIN_GPIO_6            55
#define BDPIN_GPIO_7            56
#define BDPIN_GPIO_8            57
#define BDPIN_GPIO_9            58
#define BDPIN_GPIO_10           59
#define BDPIN_GPIO_11           60
#define BDPIN_GPIO_12           61
#define BDPIN_GPIO_13           62
#define BDPIN_GPIO_14           63
#define BDPIN_GPIO_15           64
#define BDPIN_GPIO_16           65
#define BDPIN_GPIO_17           66
#define BDPIN_GPIO_18           67


#endif
