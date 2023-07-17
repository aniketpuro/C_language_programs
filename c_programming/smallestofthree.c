#include<stdio.h>
int main() {
    int a, b, c;
    printf ("Enter three numbers\n");
    scanf ("%d %d %d", &a, &b, &c);
    if((a < b) && (a < c)) 
    {
        printf ("%d is smallest\n",a);
    }
    else if((b < c)&&(b < a)) {
        printf ("%d is smallest\n",b) ;
        }
    else if((c < a)&&(c < b)){
        printf ("%d is smallest\n",c);
    }
    else{
        printf("all numbers are equle");
    }
    return 0;
}