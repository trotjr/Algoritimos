#include <stdio.h>

int CalcularFatorial(n){
  if(n <= 1){
    return 1;
  }
  int pn = n * (n-1);
  int sn;
  int i;
  int e = n-2 ;
  for(i = e ;i >= 1; i--){
    sn = pn * i;
    pn = sn;
  };
  return pn;
};
int main(){
  int i;
  for(i=0; i <= 10; i++){
  printf("%d\n",CalcularFatorial(i));
}
};


  