#include <stdio.h>

int main(){
    float x;
    float y;
    printf("Enter a number: \n");
    scanf("%f", &x); // not change from %d to %f
    y = x + 2 / x - 1 ;
    printf("y: %f\n", y);
    return 0;
}
