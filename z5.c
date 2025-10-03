#include <stdio.h>
#include <math.h>
int main(){
    double x,y, result1, result2;
    printf("x= ");
    scanf("%lf",&x);
    printf("y= ");
    scanf("%lf",&y);
 result1=log(fabs((y - sqrt(fabs(x))) * (x - y/x + x*x/4)));
 result2=((sin(x) + cos(y)) /(cos(x) - sin(y)))*tan(x * y);
printf("%+.5f\n",result1);
printf("%+.5e\n",result2);
return 0;
}
