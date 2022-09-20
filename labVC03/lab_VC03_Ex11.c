#include<stdio.h>
#include<math.h>
float a, b,c,x1,x2;
void main(){
    printf("A:");
    scanf("%f",&a );
    printf("B:");
    scanf("%f",&b );
    printf("C:");
    scanf("%f",&c );
    printf("A:%f B:%f C:%f",a,b,c);
    x1 = (-b +sqrt(pow(b,2)-(4*a*c)))/2*a;
    x2 = (-b -sqrt(pow(b,2)-(4*a*c)))/2*a;
    printf("\nx1 = %f and x2 = %f",x1,x2);
}