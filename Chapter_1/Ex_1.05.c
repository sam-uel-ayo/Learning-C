#include <stdio.h>

// A Fahrenheit to celsius conversion table using FOR LOOP

int main (void)

{
    printf("Fahr Celsius\n");

    int fahr;

for(fahr = 300; fahr >= 0; fahr = fahr - 20 )
 printf("%d %8.1f\n", fahr, (5.0/9.0) * (fahr - 32));


}
