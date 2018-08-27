/**
* Author: AJ appleget
* Date: 2018/087/27
*
* This program reads in 3 values from the user
* and computes their averages
*/
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {

  int a, b, c;

  printf("enter the first number:");
  scanf("%d", &a);

  printf("enter the second number");
  scanf("%d", &b);

  printf("enter the third number:");
  scanf("%d", &c);

  double average = (a + b + c) / 3;

  printf("the average of %d, %d, and %d is %f\n", a, b, c, average);

  return 0;
}
