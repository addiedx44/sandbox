#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int sum=0;
  int i;

  for(i=1; i<1000; i++) {
    if(i % 3 == 0 || i % 5 == 0) {
      sum+=i;
    }
  }

  printf("%d\n", sum);

  return 0;
}
