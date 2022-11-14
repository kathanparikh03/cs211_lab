#include <stdio.h>   

// catching array as a pointer
// added a new comment 2
void functionOne(int *arr, int n)
{
   int i;
   for (i = 0; i < n; i++)
     printf(" %d", arr[i]);
}
 
int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("\n");
    functionOne(arr, n); // passing an array
    printf("\n");
    return 0;
   
}