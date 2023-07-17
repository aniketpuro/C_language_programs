//Ques : Write a c program to find odd or even using if-else statements. 

#include <stdio.h>

int main() {
    int a;
    printf("Enter number to check odd or even:");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is even number",a);
    }
    else{
        printf("%d is odd number",a);
    }

    return 0;
}
