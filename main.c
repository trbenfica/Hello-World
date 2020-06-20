// Demonstration of the use of pointers in C.
// through pointers, we will be able to change
// the value of two variables through a function.

#include <stdio.h>

void switchArgs (int* a, int* b)
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int main ()
{
  int a = 5;
  int b = 8;
  printf ("\nBefore the switch: a = %d, b = %d\n", a, b);
  switchArgs (&a, &b);
  printf ("\nAfter the switch: a = %d, b = %d\n", a, b);
  return 0;
}
