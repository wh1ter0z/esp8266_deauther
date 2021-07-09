/* This software is licensed under the MIT License: https://github.com/spacehuhntech/esp8266_deauther */

#pragma once

#define ENABLE_DEBUG
#define DEBUG_PORT Serial
#define DEBUG_BAUD 115200

#define DEFAULT_ESP8266




#define SH1106_I2C
//$define SSD1306_I2C
#define I2C_ADDR 0x3C
#define I2C_SDA 5
#define I2C_SCL 4

#define BUTTON_UP 14
#define BUTTON_DOWN 12
#define BUTTON_A 0

#elif defined(DEFAULT_ESP8266) || defined(NODEMCU) || defined(WEMOS_D1_MINI) || defined(DSTIKE_USB_DEAUTHER) || defined(DSTIKE_NODEMCU_07) || defined(DSTIKE_DEAUTHER_V1) || defined(DSTIKE_DEAUTHER_V2) || defined(DSTIKE_DEAUTHER_V3)
// ===== LED ===== //
   #define LED_DIGITAL
   #define LED_PIN_R 16 // NodeMCU on-board LED
   #define LED_PIN_B 2  // ESP-12 LED

#endif 
// ===== AUTOSAVE ===== //
#ifndef AUTOSAVE_ENABLED
  #define AUTOSAVE_ENABLED true
#endif /* ifndef ATTACK_ALL_CH */

#ifndef AUTOSAVE_TIME
  #define AUTOSAVE_TIME 60
#endif /* ifndef ATTACK_ALL_CH */

// ===== ATTACK ===== //
#ifndef ATTACK_ALL_CH
  #define ATTACK_ALL_CH false
#endif /* ifndef ATTACK_ALL_CH */

#ifndef RANDOM_TX
  #define RANDOM_TX false
#endif /* ifndef RANDOM_TX */

#ifndef ATTACK_TIMEOUT
  #define ATTACK_TIMEOUT 600
#endif /* ifndef ATTACK_TIMEOUT */

#ifndef DEAUTHS_PER_TARGET
  #define DEAUTHS_PER_TARGET 25
#endif /* ifndef DEAUTHS_PER_TARGET */

#ifndef DEAUTH_REASON
  #define DEAUTH_REASON 1
#endif /* ifndef DEAUTH_REASON */

#ifndef BEACON_INTERVAL_100MS
  #define BEACON_INTERVAL_100MS true
#endif /* ifndef BEACON_INTERVAL_100MS */

#ifndef PROBE_FRAMES_PER_SSID
  #define PROBE_FRAMES_PER_SSID 1
#endif /* ifndef PROBE_FRAMES_PER_SSID */

// ===== SNIFFER ===== //
#ifndef CH_TIME
  #define CH_TIME 200
#endif /* ifndef CH_TIME */

#ifndef MIN_DEAUTH_FRAMES
  #define MIN_DEAUTH_FRAMES 3
#endif /* ifndef MIN_DEAUTH_FRAMES */

// ===== ACCESS POINT ===== //
#ifndef AP_SSID
  #define AP_SSID "%p%s%s%s%s%n"
#endif /* ifndef AP_SSID */

#ifndef AP_PASSWD
  #define AP_PASSWD ""
#endif /* ifndef AP_PASSWD */

#ifndef AP_HIDDEN
  #define AP_HIDDEN false
#endif /* ifndef AP_HIDDEN */

#ifndef AP_IP_ADDR
  #define AP_IP_ADDR { 192, 168, 4, 1 }
#endif /* ifndef AP_IP_ADDR */

// ===== WEB INTERFACE ===== //
#ifndef WEB_ENABLED
  #define WEB_ENABLED true
#endif /* ifndef WEB_ENABLED */

#ifndef WEB_CAPTIVE_PORTAL
  #define WEB_CAPTIVE_PORTAL false
#endif /* ifndef WEB_CAPTIVE_PORTAL */

#ifndef WEB_USE_SPIFFS
  #define WEB_USE_SPIFFS false
#endif /* ifndef WEB_USE_SPIFFS */

#ifndef DEFAULT_LANG
  #define DEFAULT_LANG "en"
#endif /* ifndef DEFAULT_LANG */

// ===== CLI ===== //
#ifndef CLI_ENABLED
  #define CLI_ENABLED true
#endif /* ifndef CLI_ENABLED */

#ifndef CLI_ECHO
  #define CLI_ECHO true
#endif /* ifndef CLI_ECHO */

#ifndef LED_ANODE
  #define LED_ANODE false
#endif /* ifndef LED_ANODE */

#ifndef LED_MODE_OFF
  #define LED_MODE_OFF 0, 0, 0
#endif /* ifndef LED_MODE_OFF */

#ifndef LED_MODE_SCAN
  #define LED_MODE_SCAN 0, 0, 255
#endif /* ifndef LED_MODE_SCAN */

#ifndef LED_MODE_ATTACK
  #define LED_MODE_ATTACK 255, 0, 0
#endif /* ifndef LED_MODE_ATTACK */

#ifndef LED_MODE_IDLE
  #define LED_MODE_IDLE 0, 255, 0
#endif /* ifndef LED_MODE_IDLE */

#ifndef LED_MODE_BRIGHTNESS
  #define LED_MODE_BRIGHTNESS 10
#endif /* ifndef LED_MODE_BRIGHTNESS */

// =============== DISPLAY =============== //

#ifndef DISPLAY_TIMEOUT
  #define DISPLAY_TIMEOUT 5000
#endif /* ifndef DISPLAY_TIMEOUT */

#ifndef DISPLAY_TEXT
  #define DISPLAY_TEXT ""
#endif /* ifndef DISPLAY_TEXT */

#ifndef FLIP_DIPLAY
  #define FLIP_DIPLAY false
#endif /* ifndef FLIP_DIPLAY */

#if !defined(SSD1306_I2C) && !defined(SSD1306_SPI) && !defined(SH1106_I2C) && !defined(SH1106_SPI)
  #define SSD1306_I2C
  #define USE_DISPLAY false
#else /* if !defined(SSD1306_I2C) && !defined(SSD1306_SPI) && !defined(SH1106_I2C) && !defined(SH1106_SPI) */
  #define USE_DISPLAY true
#endif /* if !defined(SSD1306_I2C) && !defined(SSD1306_SPI) && !defined(SH1106_I2C) && !defined(SH1106_SPI) */

#ifndef I2C_ADDR
  #define I2C_ADDR 0x3C
#endif /* ifndef I2C_ADDR */

#ifndef I2C_SDA
  #define I2C_SDA 5
#endif /* ifndef I2C_SDA */

#ifndef I2C_SCL
  #define I2C_SCL 4
#endif /* ifndef I2C_SCL */

#ifndef SPI_RES
  #define SPI_RES 5
#endif /* ifndef SPI_RES */

#ifndef SPI_DC
  #define SPI_DC 4
#endif /* ifndef SPI_DC */

#ifndef SPI_CS
  #define SPI_CS 15
#endif /* ifndef SPI_CS */

// =============== BUTTONS =============== //
#ifndef BUTTON_UP
  #define BUTTON_UP 255
#endif // ifndef BUTTON_UP

#ifndef BUTTON_DOWN
  #define BUTTON_DOWN 255
#endif // ifndef BUTTON_DOWN

#ifndef BUTTON_A
  #define BUTTON_A 255
#endif // ifndef BUTTON_A

#ifndef BUTTON_B
  #define BUTTON_B 255
#endif // ifndef BUTTON_B

// ===== Reset ====== //
#ifndef RESET_BUTTON
  #if BUTTON_UP != 0 && BUTTON_DOWN != 0 && BUTTON_A != 0 && BUTTON_B != 0
    #define RESET_BUTTON 0
  #else // if BUTTON_UP != 0 && BUTTON_DOWN != 0 && BUTTON_A != 0 && BUTTON_B != 0
    #define RESET_BUTTON 255
  #endif // if BUTTON_UP != 0 && BUTTON_DOWN != 0 && BUTTON_A != 0 && BUTTON_B != 0
#endif // ifndef RESET_BUTTON

// ===== Web ===== //
#ifndef WEB_IP_ADDR
  #define WEB_IP_ADDR (192, 168, 4, 1)
#endif // ifndef WEB_IP_ADDR

#ifndef WEB_URL
  #define WEB_URL "deauth.me"
#endif // ifndef WEB_URL

// ======== CONSTANTS ========== //
// Do not change these values unless you know what you're doing!
#define DEAUTHER_VERSION "2.6.0"
#define DEAUTHER_VERSION_MAJOR 2
#define DEAUTHER_VERSION_MINOR 6
#define DEAUTHER_VERSION_REVISION 0

#define EEPROM_SIZE 4095
#define BOOT_COUNTER_ADDR 1
#define SETTINGS_ADDR 100


// ========== ERROR CHECKS ========== //
#if LED_MODE_BRIGHTNESS == 0
#error LED_MODE_BRIGHTNESS must not be zero!
#endif /* if LED_MODE_BRIGHTNESS == 0 */
