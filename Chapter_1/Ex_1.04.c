#include <stdio.h>

//Celsius to fahrenheit conversion table using the formula (C x 1.8) + 32 = F

int main (void)

{
    float celsius, fahr;
    int UPPER, STEP, LOWER;

    UPPER = 300;
    LOWER = 0;
    STEP = 20;

    printf("Celsius   Fahrenheit\n");
     celsius = LOWER;
     while (celsius <= UPPER)
    {  
         fahr = (celsius * 1.8) + 32.0;
         printf("%.0f\t%8.1f\n", celsius, fahr);
         celsius = celsius + STEP; 
    }
}