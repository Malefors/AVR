/*
  LED-blink experiment for development board
*/


#include <avr/io.h>
#include <util/delay.h>
int main (void){
  //output
  DDRB |= (1 << PB0);
  for(;;) {
    PORTB |= (1 << PB0);
    _delay_ms(1000);
    PORTB &= ~(1 << PB0);
    _delay_ms(1000);
  }
}