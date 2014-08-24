/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega 2560 or Mega ADK, Platform=avr, Package=arduino
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __AVR_ATmega2560__
#define ARDUINO 105
#define ARDUINO_MAIN
#define __AVR__
#define __avr__
#define F_CPU 16000000L
#define __cplusplus
#define __inline__
#define __asm__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __asm__ 
#define __volatile__

#define __builtin_va_list
#define __builtin_va_start
#define __builtin_va_end
#define __DOXYGEN__
#define __attribute__(x)
#define NOINLINE __attribute__((noinline))
#define prog_void
#define PGM_VOID_P int
            
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}


#include "C:\Program Files (x86)\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Program Files (x86)\Arduino\hardware\arduino\variants\mega\pins_arduino.h" 
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\Marlin.pde"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\BlinkM.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\BlinkM.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\Configuration.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\ConfigurationStore.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\ConfigurationStore.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\Configuration_adv.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\DOGMbitmaps.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\LiquidCrystalRus.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\LiquidCrystalRus.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\Marlin.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\Marlin.ino"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\MarlinSerial.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\MarlinSerial.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\Marlin_main.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\Sd2Card.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\Sd2Card.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\Sd2PinMap.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\SdBaseFile.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\SdBaseFile.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\SdFatConfig.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\SdFatStructs.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\SdFatUtil.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\SdFatUtil.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\SdFile.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\SdFile.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\SdInfo.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\SdVolume.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\SdVolume.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\Servo.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\Servo.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\cardreader.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\cardreader.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\digipot_mcp4451.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\dogm_font_data_marlin.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\dogm_lcd_implementation.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\fastio.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\language.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\motion_control.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\motion_control.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\pins.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\planner.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\planner.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\qr_solve.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\qr_solve.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\speed_lookuptable.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\stepper.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\stepper.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\temperature.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\temperature.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\thermistortables.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\ultralcd.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\ultralcd.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\ultralcd_implementation_hitachi_HD44780.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\ultralcd_st7920_u8glib_rrd.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\vector_3.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\vector_3.h"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\watchdog.cpp"
#include "F:\dev\proj\3DPrinter\prusai2\firmware\Marlin\Marlin\watchdog.h"
#endif
