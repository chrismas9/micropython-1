#define MICROPY_HW_BOARD_NAME       "CNX40-F405CA"
#define MICROPY_HW_MCU_NAME         "STM32F405RG"

#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)
#define MICROPY_HW_HAS_SDCARD       (0)
#define MICROPY_HW_HAS_MMA7660      (0)
#define MICROPY_HW_HAS_LIS3DSH      (0)
#define MICROPY_HW_HAS_LCD          (0)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_TIMER     (1)
#define MICROPY_HW_ENABLE_SERVO     (0)
#define MICROPY_HW_ENABLE_DAC       (1)
//#define MICROPY_HW_ENABLE_CAN       (1)

// HSE is 12MHz
#define MICROPY_HW_CLK_PLLM (12)
#define MICROPY_HW_CLK_PLLN (336)
#define MICROPY_HW_CLK_PLLP (RCC_PLLP_DIV2)
#define MICROPY_HW_CLK_PLLQ (7)
#define MICROPY_HW_CLK_LAST_FREQ (1)

// The board has a 32kHz crystal for the RTC
#define MICROPY_HW_RTC_USE_LSE      (1)
#define MICROPY_HW_RTC_USE_US       (0)
#define MICROPY_HW_RTC_USE_CALOUT   (1)

// UART config
#define MICROPY_HW_UART1_NAME   "U-H3"
#define MICROPY_HW_UART1_TX     (pin_A9)  // H3
#define MICROPY_HW_UART1_RX     (pin_A10) ///H4

#define MICROPY_HW_UART2_NAME   "U-B4"
#define MICROPY_HW_UART2_TX     (pin_A2)  // B4
#define MICROPY_HW_UART2_RX     (pin_A3)  // B5
//#define MICROPY_HW_UART2_RTS    (pin_A1)  // B15
//#define MICROPY_HW_UART2_CTS    (pin_A0)  // B14

#define MICROPY_HW_UART3_NAME   "U-H11"
#define MICROPY_HW_UART3_TX     (pin_B10) // H11
#define MICROPY_HW_UART3_RX     (pin_B11) // H12
//#define MICROPY_HW_UART3_RTS    (pin_B14) // H19
//#define MICROPY_HW_UART3_CTS    (pin_B13) // H14

#define MICROPY_HW_UART4_NAME   "U-B14"
#define MICROPY_HW_UART4_TX     (pin_A0)  // B14
#define MICROPY_HW_UART4_RX     (pin_A1)  // B15

#define MICROPY_HW_UART6_NAME   "U-H17"
#define MICROPY_HW_UART6_TX     (pin_C6)  // H17
#define MICROPY_HW_UART6_RX     (pin_C7)  // H18

// I2C busses
#define MICROPY_HW_I2C1_NAME "I-H5"
#define MICROPY_HW_I2C1_SCL (pin_B6) // H5
#define MICROPY_HW_I2C1_SDA (pin_B7) // H6

#define MICROPY_HW_I2C2_NAME "I-H11"
#define MICROPY_HW_I2C2_SCL (pin_B10) // H11
#define MICROPY_HW_I2C2_SDA (pin_B11) // H12

// SPI busses
#define MICROPY_HW_SPI1_NAME "S-H8"
#define MICROPY_HW_SPI1_NSS  (pin_A15) // H7
#define MICROPY_HW_SPI1_SCK  (pin_B3) // H8
#define MICROPY_HW_SPI1_MOSI (pin_B5) // H9
#define MICROPY_HW_SPI1_MISO (pin_B4) // H10

#define MICROPY_HW_SPI2_NAME "S-H14"
//#define MICROPY_HW_SPI2_NSS  (pin_C8) // H13 MASTER ONLY
#define MICROPY_HW_SPI2_SCK  (pin_B13) // H14
#define MICROPY_HW_SPI2_MOSI (pin_C3) // H15
#define MICROPY_HW_SPI2_MISO (pin_C2) // H16

// CAN busses
//#define MICROPY_HW_CAN1_NAME "YA" // CAN1 on RX,TX = Y3,Y4 = PB8,PB9
//#define MICROPY_HW_CAN2_NAME "YB" // CAN2 on RX,TX = Y5,Y6 = PB12,PB13

// USRSW has no pullup or pulldown; it is active low and broken out on a header
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_PULLUP)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_FALLING)
#define MICROPY_HW_USRSW_PRESSED    (0)

// Connexi has 3 LEDs
#define MICROPY_HW_LED1             (pin_A8) // red
#define MICROPY_HW_LED2             (pin_C9) // green
#define MICROPY_HW_LED3             (pin_B2)  // blue
#define MICROPY_HW_LED4             (pin_B2)  // blue
#define MICROPY_HW_LED_OTYPE        (GPIO_MODE_OUTPUT_PP)
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// SD card detect switch
//#define MICROPY_HW_SDCARD_DETECT_PIN        (pin_A8)
//#define MICROPY_HW_SDCARD_DETECT_PULL       (GPIO_PULLUP)
//#define MICROPY_HW_SDCARD_DETECT_PRESENT    (GPIO_PIN_RESET)

// USB config
//#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
//#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)
