#include "sum.h"

#include <stdio.h>
#include <assert.h>

/* Sum integers 1 to n */
int sum(int n)
{
  /* pre-condition */
  assert(n >= 1);
  /* post-condition */
  if (n > 1)
    return n + sum(n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail(int n, int total) // function to sum tail-recursively
{
  if (n == 1) // function has to sum from 1 to n
  {
    return n + total; // Lægger 1 til så længe n==1: 1+0 = 1 (first case)
  }
  else
  {
    return sumtail(n - 1, n + total); // n-1 så vi tæller fra 0 (recursive step)
  }
}

/* Sum integers 1 to n */
int sumwhile(int n) // function to sum with a loop
{
  assert(n >= 1); // samme assertion som i den givne sum-funktion.

  int sum_while = 0; // intialize and define sum_while
  int i = 1;

  while (i <= n) // loop through until total sum is reached: From 1 to n
  {
    sum_while = sum_while + i;
    i++;
  }
  return sum_while; // return the total sum
}