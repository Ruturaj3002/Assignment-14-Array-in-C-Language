#include <stdio.h>
int main()
{
    // code
    int i, arr[10];
    float sum = 0;

    printf("enter 10 numbers: ");

    for (i = 0; i <= 9; i++)
    {

        scanf("%d", &arr[i]);

        sum = sum + arr[i];
    }

    printf("the average of 10 number is %f", sum / 10.0);

    return 0;
}
