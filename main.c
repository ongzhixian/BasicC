#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <string.h>

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

void demo()
{
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long)LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long)LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int)UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long)ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short)USHRT_MAX);

    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float)FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float)FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float)-FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float)-FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double)DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double)DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double)-DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG);
}

void demo2()
{
    /* variable definition: */
    int a, b;
    int c;
    float f;

    /* actual initialization */
    a = 10;
    b = 20;

    c = a + b;
    printf("value of c : %d \n", c);

    f = 70.0 / 3.0;
    printf("value of f : %f \n", f);
}

int main(int argc, char **argv)
{

    // demo();
    // demo2();
    //char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greeting[] = "Hello";
    printf("Greeting message: [%s]\n", greeting);
    printf("Greeting length:  [%d]\n", strlen(greeting));
    

    return 0;
}