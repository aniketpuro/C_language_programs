#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    
    printf("Enter anything: ");
    scanf("%c",&c);

    if (isdigit(c) == 0){
         printf("%c is a character.",c);
    }
    else{
         printf("%c is a digit.",c);
    }

    return 0;
}
