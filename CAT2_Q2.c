//CAT2__Q2.C
#include <stdio.h>
 int main (){
  int i,j;
  int score[2][2] = {
    {65,92}, {84,72}
  };
  for(i=0;i<2;i++){
   for(j=0;j<2;j++){
    printf("Score[%d][%d] = %d\n",i,j,score[i][j]);
   }
   }
   int k,l;
   int scores[2][2] = {
    {35,70},{59,67}
   };
   for(k=0;k<2;k++){
    for(l=0;l<2;l++){
    printf("Score[%d][%d] = %d\n",k,l,scores[k][l]);
    }
   }
 
 return 0;
 }