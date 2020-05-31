/*
    GNU linker script for STM32F405
*/

/* Specify the memory areas */
MEMORY
{
    FLASH (rx)      : ORIGIN = 0x08000000, LENGTH = 1024K /* entire flash */
    FLASH_ISR (rx)  : ORIGIN = 0x08000000, LENGTH = 16K /* sector 0 */
    FLASH_FS (rx)   : ORIGIN = 0x08004000, LENGTH = 96K /* sectors 1,2,3 are 16K, 4 is 64K (48k used) for filesystem */
    FLASH_FS2 (rx)  : ORIGIN = 0x08020000, LENGTH = 48K /* sector 5 is 128K (48K used) for filesystem, Total filesystem 144K */
    FLASH_TEXT (rx) : ORIGIN = 0x08040000, LENGTH = 768K /* sectors 6,7,8,9,10,11 */
    CCMRAM (xrw)    : ORIGIN = 0x10000000, LENGTH = 64K
    RAM (xrw)       : ORIGIN = 0x20000000, LENGTH = 128K
}

/* produce a link error if there is not this amount of RAM for these sections */
_minimum_stack_size = 2K;
_minimum_heap_size = 16K;

/* Define the stack.  The stack is full descending so begins just above last byte
   of RAM.  Note that EABI requires the stack to be 8-byte aligned for a call. */
   
_ram_fs_cache_end = ORIGIN(CCMRAM) + LENGTH(CCMRAM); /* fs_cache in CCMRAM */
_ram_fs_cache_start = _ram_fs_cache_end - 48K; /* fs cache = 48K */

   
_estack = _ram_fs_cache_start - _estack_reserve; /* stack in CCMRAM */
_sstack = ORIGIN(CCMRAM); /* stack = 16K */

/* RAM extents for the garbage collector */
_ram_start = ORIGIN(RAM);
_ram_end = ORIGIN(RAM) + LENGTH(RAM);

_heap_start = _ebss; /* heap starts just after statically allocated memory */
_heap_end = _ram_end;
