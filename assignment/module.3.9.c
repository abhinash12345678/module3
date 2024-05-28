#include<stdio.h>
int main(){
    int tringle, side_1, side_2, side_3;

    printf("enter your side_1 size :\n");
    scanf("%d", &side_1);

    printf("enter your side_2 size : \n");
    scanf("%d", &side_2);

    printf("enter your side_3 size : \n");
    scanf("%d", &side_3);

    tringle= side_1 + side_2 + side_3;
    printf("your  circumference of Triangle is : %d \n", tringle);

}