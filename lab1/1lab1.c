#include <stdio.h>

int main()
{
    float x;
    printf("Enter your digit: ");
    scanf("%f", &x);
    if (x<=3){
        if(x>-15){
        float result = 4*(x*x)+2;
        printf("dorivnue: %.2f \n", result);
        }
        else{printf("your digit is so small try to type (from -15 to 3). Function is not definied");}}
    else{
        printf("Error. Your digit is so big try to type (from -15 to 3). Function is not viznachena\n");
    }
    return 0;
}
