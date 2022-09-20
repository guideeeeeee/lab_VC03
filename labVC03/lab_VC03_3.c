#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.141
void main()
{
  float resultV, resultA,r;
  printf("radius(r):=");
  scanf("%f",&r);
  resultV = 4*PI*pow(r,3)/3;
  resultA = 4*PI*pow(r,2);
  printf("resultV = %f\n",resultV);
  printf("resultA = %f\n",resultA);
  system("pause");
  }