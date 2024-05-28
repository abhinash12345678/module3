#include<stdio.h>
int main(){
    int  circumference, pi, r;

    printf("enter your circle r :\n ");
    scanf("%d", &r);

    pi=3.14;
    circumference=2*pi*r;
    printf("your area is %d\n", circumference);
}