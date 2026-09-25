#include <stdio.h>
#include <math.h>

main(){
    double x;
    

    printf("Enter your digit: ");
    scanf("%lf", &x);
    if (x <-30 || x>20){
    double r = pow(x, 0.75);
    double result = 3*r-5;
    printf("%lf", result);
    }
    else{printf("your function is not definied. Try to type from -inifinity to -30 or from 20 to infinity");}
} 