#include <stdio.h>

int main()
{
    int num_1;
    long num_2;
    char letter;
    float num_3;
    double num_4;

    scanf("%d %ld %c %f %lf", &num_1, &num_2, &letter, &num_3, &num_4);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", num_1, num_2, letter, num_3, num_4);
    return 0;
}