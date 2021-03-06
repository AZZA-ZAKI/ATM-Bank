#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "HLED_config.h"
#include "HLED_interface.h"

void HLED_voidLedInit(u8 led_num){
	switch(led_num){
	case LED0:DIO_u8SetPinDirection(HLED_LED0,HLED_LED0_PIN,DIO_u8_OUTPUT);break;
	case LED1:DIO_u8SetPinDirection(HLED_LED1,HLED_LED1_PIN,DIO_u8_OUTPUT);break;
	case LED2:DIO_u8SetPinDirection(HLED_LED2,HLED_LED2_PIN,DIO_u8_OUTPUT);break;
	}
}

void HLED_voidTurnON(u8 led_num){
	switch(led_num){
	case LED0:DIO_u8SetPinValue(HLED_LED0,HLED_LED0_PIN,DIO_u8_HIGH);break;
	case LED1:DIO_u8SetPinValue(HLED_LED1,HLED_LED1_PIN,DIO_u8_HIGH);break;
	case LED2:DIO_u8SetPinValue(HLED_LED2,HLED_LED2_PIN,DIO_u8_HIGH);break;
	}
}

void HLED_voidTurnOFF(u8 led_num){
	switch(led_num){
	case LED0:DIO_u8SetPinValue(HLED_LED0,HLED_LED0_PIN,DIO_u8_LOW);break;
	case LED1:DIO_u8SetPinValue(HLED_LED1,HLED_LED1_PIN,DIO_u8_LOW);break;
	case LED2:DIO_u8SetPinValue(HLED_LED2,HLED_LED2_PIN,DIO_u8_LOW);break;
	}
}

void HLED_voidTogLed(u8 led_num){
	switch(led_num){
	case LED0:DIO_u8TogPinValue(HLED_LED0,HLED_LED0_PIN);break;
	case LED1:DIO_u8TogPinValue(HLED_LED1,HLED_LED1_PIN);break;
	case LED2:DIO_u8TogPinValue(HLED_LED2,HLED_LED2_PIN);break;
	}
}
