#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float calculateAverage(int m1, int m2);

int main() {
    int n1, n2;
    float avg;

    printf("Enter two numbers separated by a space: ");
    scanf("%d %d",&n1,&n2);
    avg = calculateAverage(n1,n2);
    printf("The average of %d and %d is %f ", n1, n2, avg);


    return 0;

}

float calculateAverage(int m1, int m2) {
    return (m1 + m2) / 2.0f;
}