#include<stdio.h>

main()

{
    float km,miles;
    printf("enter the value in miles\n");
    scanf( "%f",&miles);
    km =1.6*miles;
    printf("conversion of miles to km is %f=%f\n",miles,km);
}
