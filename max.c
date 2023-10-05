#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int numbers[], int size) 
{
  int MaxValue;
  MaxValue = numbers[0];
  
  for (int i = 0; i < size; i++)
  {
    if(numbers[i]> MaxValue)
    {
      MaxValue = numbers[i];
    }
  }
  return MaxValue;
}

#ifndef TEST

int main() 
{
  int Array1[] = {0,1,5,-2,10};
  int Array2[] = {0};
  int Array3[] = {-10,-5,-2,-1};

  assert(max(Array1,5) == 10);  
  printf("assertion successful\n");

  assert(max(Array2,1) == 0);
  printf("assertion successful\n");

  assert(max(Array3,4) == -1);
  printf("assertion successful\n");
	return 0;
}

#endif
