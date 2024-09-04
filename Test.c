#include <stdio.h>
int main()
{
  int shift, max, x, i, arr[] = {9, 2, 1, 1, 0, 2};
  int arSize = sizeof(arr) / sizeof(arr[0]);

  printf("Before the array was change : ");
  for (int y = 0; y < arSize; y++)
  {
    printf(" %d ", arr[y]);
  }
  printf("\n");

  for (i = 0; i < arSize; i++)
  {
    for (x = 0; x < arSize; x++)
    {
      if (arr[x] < arr[x + 1])
      {
        arr[x] = arr[x];
        arr[x + 1] = arr[x + 1];
      }
      else if (arr[x] > arr[x + 1])
      {
        shift = arr[x];
        arr[x] = arr[x + 1];
        arr[x + 1] = shift;
      }
    }
  }

  printf("After the array is change : ");
  for (int y = 0; y < arSize; y++)
  {
    printf(" %d ", arr[y]);
  }
  printf("\n");

  return 0;
}