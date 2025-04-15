#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>
#include "esp_io_expander.h"

/* General I2C */
#define BSP_GENERAL_I2C_NUM (I2C_NUM_0)
#define BSP_GENERAL_I2C_SDA (GPIO_NUM_47)
#define BSP_GENERAL_I2C_SCL (GPIO_NUM_48)

/* Audio */
#define AUDIO_INPUT_SAMPLE_RATE  24000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

#define AUDIO_INPUT_REFERENCE    false 

#define AUDIO_I2S_GPIO_MCLK GPIO_NUM_10
#define AUDIO_I2S_GPIO_WS   GPIO_NUM_12
#define AUDIO_I2S_GPIO_BCLK GPIO_NUM_11
#define AUDIO_I2S_GPIO_DIN  GPIO_NUM_15
#define AUDIO_I2S_GPIO_DOUT GPIO_NUM_16


#define AUDIO_CODEC_PA_PIN        GPIO_NUM_NC 
#define AUDIO_CODEC_ES8311_ADDR   ES8311_CODEC_DEFAULT_ADDR
#define AUDIO_CODEC_ES7243E_ADDR  (0x14)



#define BUILTIN_LED_GPIO        GPIO_NUM_40
#define BOOT_BUTTON_GPIO        GPIO_NUM_0
#define VOLUME_UP_BUTTON_GPIO   GPIO_NUM_NC
#define VOLUME_DOWN_BUTTON_GPIO GPIO_NUM_NC

/* Expander */
#define BSP_IO_EXPANDER_INT (GPIO_NUM_2)
#define DRV_IO_EXP_INPUT_MASK  (0x20ff) // P0.0 ~ P0.7 | P1.3
#define DRV_IO_EXP_OUTPUT_MASK (0xDf00) // P1.0 ~ P1.7 & ~P1.3

/* Expander IO PIN */
#define BSP_PWR_CHRG_DET    (IO_EXPANDER_PIN_NUM_0)
#define BSP_PWR_STDBY_DET   (IO_EXPANDER_PIN_NUM_1)
#define BSP_PWR_VBUS_IN_DET (IO_EXPANDER_PIN_NUM_2)
#define BSP_PWR_SDCARD      (IO_EXPANDER_PIN_NUM_8)
#define BSP_PWR_LCD         (IO_EXPANDER_PIN_NUM_9)
#define BSP_PWR_SYSTEM      (IO_EXPANDER_PIN_NUM_10)
#define BSP_PWR_AI_CHIP     (IO_EXPANDER_PIN_NUM_11)
#define BSP_PWR_CODEC_PA    (IO_EXPANDER_PIN_NUM_12)
#define BSP_PWR_BAT_DET     (IO_EXPANDER_PIN_NUM_13)
#define BSP_PWR_GROVE       (IO_EXPANDER_PIN_NUM_14)
#define BSP_PWR_BAT_ADC     (IO_EXPANDER_PIN_NUM_15)

#define BSP_PWR_START_UP (BSP_PWR_SDCARD | BSP_PWR_LCD | BSP_PWR_SYSTEM | BSP_PWR_AI_CHIP | BSP_PWR_CODEC_PA | BSP_PWR_GROVE | BSP_PWR_BAT_ADC)

#define BSP_KNOB_BTN (IO_EXPANDER_PIN_NUM_3)
#define BSP_KNOB_A_PIN GPIO_NUM_41
#define BSP_KNOB_B_PIN GPIO_NUM_42

/* QSPI */
#define BSP_SPI3_HOST_PCLK  (GPIO_NUM_7)
#define BSP_SPI3_HOST_DATA0 (GPIO_NUM_9)
#define BSP_SPI3_HOST_DATA1 (GPIO_NUM_1)
#define BSP_SPI3_HOST_DATA2 (GPIO_NUM_14)
#define BSP_SPI3_HOST_DATA3 (GPIO_NUM_13)

/* LCD */
#define BSP_LCD_SPI_NUM  (SPI3_HOST)
#define BSP_LCD_SPI_CS   (GPIO_NUM_45)
#define BSP_LCD_GPIO_RST (GPIO_NUM_NC)
#define BSP_LCD_GPIO_DC  (GPIO_NUM_1)

#define DISPLAY_WIDTH   412
#define DISPLAY_HEIGHT  412
#define DISPLAY_MIRROR_X false
#define DISPLAY_MIRROR_Y false
#define DISPLAY_SWAP_XY false

#define DISPLAY_OFFSET_X  0
#define DISPLAY_OFFSET_Y  0

#define DISPLAY_BACKLIGHT_PIN GPIO_NUM_8
#define DISPLAY_BACKLIGHT_OUTPUT_INVERT false

/* Touch */
#define BSP_TOUCH_I2C_NUM  (1)
#define BSP_TOUCH_GPIO_INT (IO_EXPANDER_PIN_NUM_5)
#define BSP_TOUCH_I2C_SDA  (GPIO_NUM_39)
#define BSP_TOUCH_I2C_SCL  (GPIO_NUM_38)
#define BSP_TOUCH_I2C_CLK  (400000)

/* Settings */
#define DRV_LCD_PIXEL_CLK_HZ      (40 * 1000 * 1000)
#define DRV_LCD_CMD_BITS          (32)
#define DRV_LCD_PARAM_BITS        (8)
#define DRV_LCD_RGB_ELEMENT_ORDER (LCD_RGB_ELEMENT_ORDER_RGB)
#define DRV_LCD_BITS_PER_PIXEL    (16)

#define CONFIG_BSP_LCD_SPI_DMA_SIZE_DIV 16

/* ADC */
#define BSP_BAT_ADC_CHAN  (ADC_CHANNEL_2)    // GPIO3
#define BSP_BAT_ADC_ATTEN (ADC_ATTEN_DB_2_5) // 0 ~ 1100 mV
#define BSP_BAT_VOL_RATIO ((62 + 20) / 20)

#endif // _BOARD_CONFIG_H_
