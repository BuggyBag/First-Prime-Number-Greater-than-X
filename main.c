#include <stdio.h>


int main(void) {
  printf("Find the first prime number after 30 \n\n");

  int value = 30;
  int i = value + 1;
  int count, j;

  while(i > value){
    
    count = 0;
    
    for(j = 1; j <= i; j++){
      if (i % j == 0){
        count++;
      }
    }

    if (count == 2){
      printf("The first prime number after %d is %d", value, i);
      break;
    }
    
    i++;
  }
  
  return 0;
}