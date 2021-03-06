//==========================================================================================
//
// Project:  lib_led_test.c
// Date:     24/02/19
// Author:   Filippo Bilardo
//
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//  Test della libreria led
//
// gcc -c lib_led.c  -l bcm2835 -o led.o
// gcc led.o lib_led_test.c -o led_test
// ./led_test
//
// Ver   Date       Comment
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 1.0   24/02/19   Versione iniziale
// 
//==========================================================================================
//------------------------------------------------------------------------------------------
//=== Includes =============================================================================
//------------------------------------------------------------------------------------------
#include "lib_led.h"

//------------------------------------------------------------------------------------------
//=== Main =================================================================================
//------------------------------------------------------------------------------------------
int main(int argc,char* argv[]) {

  LedTest();
  
  return 0;
}

