#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n1, n2;
    float avg;

    printf("Enter two numbers separated by a space: ");
    scanf("%d %d",&n1,&n2);
    avg = (n1 + n2) / 2.0f;
    printf("The average of %d and %d is %f ", n1, n2, avg);


    return 0;

}