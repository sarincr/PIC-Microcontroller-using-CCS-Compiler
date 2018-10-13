#include <main.h>

void main()
{

   while(TRUE)
   {
   output_b(0xFF);  // All Pins of PORT B to HIGH
   delay_ms(100);
   output_b(0x00);  // All Pins of PORT B to LOW
   delay_ms(100);
   }

}
