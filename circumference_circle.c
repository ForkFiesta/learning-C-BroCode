#include <stdio.h>

int main(){
    /*Program gets radius of circle from user and return the circumference as a float */

    float circumference;
    const float pi = 3.1415;
    float radius;

    printf("Hello, I'm going to help you calculate the circumference of a circle. \n \n What is the radius of the circle: ");
    scanf("%f", &radius);

    circumference = 2 * pi * radius;
    printf("The circumference of the circle is %6.3f\n", circumference);

    return 0;






}