/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2, sum;
  float avg;

  printf("Input mark 1 :");
  scanf("%d", &mark1);

  printf("input mark 2 :");
  scanf("%d", &mark2);

  sum = mark1 + mark2;

  printf("sum is :%d\n", sum);

  avg = sum / 2;

  printf("average is : %.2f", avg);
  
  return 0;
}
 
