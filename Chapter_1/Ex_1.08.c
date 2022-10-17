#include <stdio.h>

int main(void)

{
    int c, b, t, nl;

    b = 0;
    t = 0;
    nl = 0;
    
   while ((c = getchar()) !=EOF)
   {
    if (c == ' ')
        ++b;
    if (c == '\t')
        ++t;    
    if (c == '\n')
        ++nl;     
   }
    printf("The number of blanks,tab,and newlines are %d,%d,%d,respectively\n", b, t, nl ); 
   

}