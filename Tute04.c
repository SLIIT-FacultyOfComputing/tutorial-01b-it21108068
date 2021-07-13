/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum (int i, int j);
int maximum (int k, int l);
int multiply (int m, int n);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int minimum (int i, int j)
{
  if(i > j)
  {
    return j;
  }
  else
  {
    return i;
  }
}
int maximum(int k, int l)
{
  if(k > l)
  {
    return k;
  }
  else
  {
    return l;
  }

}
int multiply(int m, int n)
{
  return m * n;
}