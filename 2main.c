#include <stdio.h>

int CalcularFatorial(n){
  
  int pn = n * (n-1);
  int sn;
  int i;
  int e = n-2 ;
  if(n <= 2){
    e = n;
    };
  for(i = e ;i >= 1; i--){
    sn = pn * i;
    pn = sn;
  };
  return pn;
};
int main(){
  printf("%d\n",CalcularFatorial(0));
};

  