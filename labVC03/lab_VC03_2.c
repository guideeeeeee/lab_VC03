#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int h =4,z=1,value=5;
  h+=z*5;
  printf("h = %d\n",h);
  value *=h - 10 * ++z;
  printf(" Value = %d and z = %d\n",value,z);
  system("PAUSE");
}