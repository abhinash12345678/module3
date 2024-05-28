#include<stdio.h>
int main(){

    int a, height, lenght, width;

    printf("enter your height :\n");
    scanf("%d", &height);

    printf("enter your lenght : \n");
    scanf("%d", &lenght);

    printf("enter your width : \n");
    scanf("%d", &width);

    a=2*(width*lenght+height*lenght+height*width);

    printf("your rectangular is : %d \n", a);

}