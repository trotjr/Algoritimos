#include <stdio.h>

void imprimirFib(n) {
  //if(n <=0) {
  //printf("d%", 0) return;
  //}
  if(n > 0) {

    int termo1  = 1;
    int termo2 = 1;
    int proxtermo = termo1 + termo2;
      
    printf("%d\n", 1);

    for(int i = 1; i <= n - 1; i ++ ) {
      termo1 = termo2;
      termo2 = proxtermo;
      proxtermo = termo1 + termo2;
      printf( "%d \n",  termo1);
    }
  }
  return;
};

int main(){
  imprimirFib(5);
};