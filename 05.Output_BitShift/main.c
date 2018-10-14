#include <main.h>
#use delay (clock=8000000)
void main()
{

   while(TRUE)
   {
   output_bit(PIN_B0, (1<<0));  // PORTB Pin 0 to High
   delay_ms(1000);  // Delay of 1s.
   output_bit(PIN_B0, (0<<0));  // PORTB Pin 0 to High
   delay_ms(1000);  // Delay of 1s
   }

}

