/**
  ******************************************************************************
  * @file    	main.c 
  * @author  	Alfred Lohmann
  *        	  HAW-Hamburg
  *          	Labor für technische Informatik
  *          	Berliner Tor  7
  *          	D-20099 Hamburg
  * @version V1.0
  * @date    23.05.2013
  * @brief   Main program body
  ******************************************************************************
  */


/* Includes ------------------------------------------------------------------*/
#include <stdio.h>

#include "TI_Lib.h"
#include "tft.h"
#include "input.h"
#include "Stack.h"
#include "limits.h"

//--- For GPIOs -----------------------------
//Include instead of "stm32f4xx.h" for
//compatibility between Simulation and Board
//#include "TI_memory_map.h"

//--- For Touch Keypad ----------------------
#include "keypad.h"

//--- For Timer -----------------------------
//#include "timer.h"

/**
  * @brief  Main program
  * @param  None
  */
int main(void)
{
  Init_TI_Board();
//	TFT_Init();
//	
//	TFT_gotoxy(15, 7);
//	TFT_puts("Hallo Wolrd");
	Make_Touch_Pad();
	make_Lines();
	while(true){
	reactToInput(getInput());
		
	}
	
	
//  return 0;
}
// EOF
