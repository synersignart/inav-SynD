/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "SYND_F411"
#define USBD_PRODUCT_STRING  "SYNERDUINOSTM_F411"

#define LED0                    PC13
#define LED1                    PC14

#define BEEPER                  PB2
#define BEEPER_INVERTED

// *************** SPI1 Gyro & ACC **********************
#define USE_SPI
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

// **** MPU IMU ****// 

#define USE_IMU_MPU6000
#define IMU_MPU6000_ALIGN       CW90_DEG
#define MPU6000_CS_PIN          PA4
#define MPU6000_SPI_BUS         BUS_SPI1

#define USE_IMU_MPU9250
#define IMU_MPU9250_ALIGN       CW90_DEG
#define MPU9250_CS_PIN          PA4
#define MPU9250_SPI_BUS         BUS_SPI1

#define USE_IMU_MPU6500
#define IMU_MPU6500_ALIGN       CW90_DEG
#define MPU6500_CS_PIN          PA4
#define MPU6500_SPI_BUS         BUS_SPI1

// **** BMI IMU ****// 
#define USE_IMU_BMI088
#define IMU_BMI088_ALIGN       CW270_DEG
#define BMI160_CS_PIN          PA4
#define BMI160_SPI_BUS         BUS_SPI1

#define USE_IMU_BMI160
#define IMU_BMI160_ALIGN       CW270_DEG
#define BMI160_CS_PIN          PA4
#define BMI160_SPI_BUS         BUS_SPI1


#define USE_IMU_BMI270
#define IMU_BMI270_ALIGN       CW270_DEG
#define BMI270_CS_PIN          PA4
#define BMI270_SPI_BUS         BUS_SPI1

// **** ICM IMU ****// 
#define USE_IMU_ICM20689
#define IMU_ICM20689_ALIGN       CW90_DEG
#define ICM20689_CS_PIN          PA4
#define ICM20689_SPI_BUS         BUS_SPI1

#define USE_IMU_ICM42605
#define IMU_ICM42605_ALIGN       CW90_DEG
#define ICM42605_CS_PIN          PA4
#define ICM42605_SPI_BUS         BUS_SPI1

// **** BNO IMU ****// 
#define USE_IMU_BNO055
#define IMU_BNO055_ALIGN       CW90_DEG
#define BNO055_CS_PIN          PA4
#define BNO055_SPI_BUS         BUS_SPI1

#define USE_EXTI
#define GYRO_INT_EXTI            PA1
#define USE_MPU_DATA_READY_SIGNAL

// *************** SPI2 OSD, SD OR FLASH*****************************
#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#ifdef BLACKPILL_F411_BLACKBOX
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_CS_PIN           PB12
#define M25P16_SPI_BUS          BUS_SPI2
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
#else
//#define USE_MAX7456
//#define MAX7456_SPI_BUS         BUS_SPI2
//#define MAX7456_CS_PIN          PB12
#define USE_SDCARD
#define USE_SDCARD_SPI
#define SDCARD_SPI_BUS          BUS_SPI2
#define SDCARD_CS_PIN           PB12
#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT
#endif

// *************** SPI2 OSD *****************************

//#define USE_MAX7456
//#define MAX7456_SPI_BUS         BUS_SP2
//#define MAX7456_CS_PIN          PB12

// *************** SPI2 FLASH **************************

//#define USE_FLASHFS
//#define USE_FLASH_M25P16
//#define M25P16_SPI_BUS          BUS_SPI2
//#define M25P16_CS_PIN           PB12
//#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// *************** UART *****************************
#define USE_VCP
#define VBUS_SENSING_PIN        PC15
#define VBUS_SENSING_ENABLED

//UART1 is where Telemetry is connected//
#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

//UART2 is where RC is connected//
#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

//Soft UART is where GPS is connected//
#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN     PB6 // ST1 pad
#define SOFTSERIAL_1_RX_PIN     PB7


//#define USE_SOFTSERIAL2
//#define SOFTSERIAL_2_TX_PIN     PA2 // TX2 pad
//#define SOFTSERIAL_2_RX_PIN     PA2

#define SERIAL_PORT_COUNT       4

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS
#define SERIALRX_UART           SERIAL_PORT_USART2

// *************** I2C /Baro/Mag/Pitot ********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9

#define DEFAULT_I2C_BUS         BUS_I2C1

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C1
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_BMP085
#define USE_BARO_DPS310
#define USE_BARO_SPL06


//** MAG **//

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL
#define USE_MAG_MPU9250

//#define USE_MAG_ALL

#define PITOT_I2C_BUS           BUS_I2C1
#define TEMPERATURE_I2C_BUS     BUS_I2C1

#define USE_RANGEFINDER
#define USE_RANGEFINDER_MSP
#define RANGEFINDER_I2C_BUS     BUS_I2C1

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream0

//#define ADC_CHANNEL_1_PIN           PB0
//#define ADC_CHANNEL_2_PIN           PB1
//#define ADC_CHANNEL_3_PIN           PA0
//#define ADC_CHANNEL_4_PIN           PA1

//#define VBAT_ADC_CHANNEL            ADC_CHN_1
//#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2
//#define RSSI_ADC_CHANNEL            ADC_CHN_3
//#define AIRSPEED_ADC_CHANNEL        ADC_CHN_4


#define ADC_CHANNEL_1_PIN           PA1
#define ADC_CHANNEL_2_PIN           PB1
#define VBAT_ADC_CHANNEL            ADC_CHN_2
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_1

//#define VBAT_ADC_CHANNEL            ADC_CHN_1
//#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2


// *************** LED2812 ************************
#define USE_LED_STRIP
#define WS2811_PIN                  PB5

// *************** PINIO ***************************
//#define USE_PINIO
//#define USE_PINIOBOX
//#define PINIO1_PIN                  PA13 // Camera switcher

// ***************  OTHERS *************************
#define DEFAULT_FEATURES        (FEATURE_TX_PROF_SEL | FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TELEMETRY | FEATURE_SOFTSERIAL ) //FEATURE_OSD | 

#define CURRENT_METER_SCALE     423 

#define USE_SPEKTRUM_BIND
#define BIND_PIN                PA3 //  RX2

#define USE_DSHOT
#define USE_ESC_SENSOR
#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define MAX_PWM_OUTPUT_PORTS       8
