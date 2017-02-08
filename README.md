

# Bootloader for STM32F40x
Author: **[Dengxue Yan](https://sites.google.com/site/ydengxue/)**
****

This is a simple bootloader designed for STM32F40x series MCU and is simplified from my single-task OS. It has been tested on STM32F407VG. The bootloader occupies the lowest 16K internal flash. The purpose of this bootloader is to 

1. Support user application update online,
2. Support CRC verification,
3. Support the generating time of the binary,
4. Support version control.

The File2Bin.exe is used to generate the binary file that is supported by this bootloader. Its usage is:
    File2Bin.exe 0x01 Version Subversion Src Dest

The Appbin.bat is a demo of the usage of File2Bin.exe. The first parameter specifies the type of the application. It could be:
0x01: Application Code
0x41: FPGA Code
0x81: Develop config
0x82: Project config
This bootloader only supports file type 0x01. The others are supported by application code.
(You can try to download app.bin.bin using Xmoderm through this bootloader )

The default debug UART is UART 1 with baudrate 115200, 8 byte, no parity, 1 stop bits. The download protocol is Xmoderm .

The user application binary will be put at 0x8020000. So you need to change the on-chip start address to 0x8020000 and the value of NVIC_VectTab_FLASH in misc.h to 0x8020000. If you define NVIC_Flash somewhere else(like RTOS), you need to change its value from 0x8000000 to 0x8020000 too.
 
The code is compiled by Keil ARM-MDK V4.6.

If you are interested in the code of gcc version, please send me email at dengxue.yan@wustl.edu
