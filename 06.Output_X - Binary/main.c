#include <main.h>

void main()
{
   while(TRUE)
   {
   output_b(0b0000001);  // PORTB Pin 0 to High
   delay_ms(100);  // Delay of 0.1s.
   output_b(0b0000000);  // PORTB Pin 0 to High
   delay_ms(100);  // Delay of 0.1s
   }

}
