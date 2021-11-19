#include <stdio.h>
int main()
{
    int angle1, angle2, angle3, sum;
    printf("Enter measures of the three angles.\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if (sum == 180)
    printf("It is a triangle.");
    else
    printf("It is not a triangle.");
    return 0;
}