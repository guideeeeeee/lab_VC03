#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int i;
  char ch = 'a';
  i =10+5+ch;
  printf("total is %d = %c \n",i,i);
  i++;
  printf("%d character is %c \n", i,i);
  i= i%10;
  printf("resolve = %d\n",i);
  system("pause");
}