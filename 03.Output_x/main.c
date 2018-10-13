#include <main.h>
#use delay (clock=8000000)
void main()
{

   while(TRUE)
   {
   output_b(0x01);  // PORTB Pin 0 to High
   delay_ms(1000);  // Delay of 1s.
   output_b(0x00);  // PORTB Pin 0 to High
   delay_ms(1000);  // Delay of 1s
   }

}
