#include "stdlib.h"
#include "main.h"

/**
 * add - This function prints to 98
 * @n: n is an integer
 * Return: always (n)
 */

void print_to_98(int n)
{
  if(n == 98) printf("98\n");
  if(n < 98){
    for(n ; n < 98 ; n++){
      printf("%d, ", n);
        if(n == 98) printf("\n");
    }
  }
  if(n > 98){
    for(n ; n > 98 ; n--){
      printf("%d, ", n);
        if(n == 98) printf("\n");
    }
  }
  
	return (n);
}
