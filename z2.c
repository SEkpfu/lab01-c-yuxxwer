#include <stdio.h>
 int main()
 {
    int number;
printf ("number= ");
scanf ("%d",&number);
int a=number/100;
int b=(number/10)%10;
int c=number%10;
int S=a+b+C;
int reversed=c*100+b*10+a;
printf ("s=%d, reversed=%d",s, reversed);
return 0;
}
