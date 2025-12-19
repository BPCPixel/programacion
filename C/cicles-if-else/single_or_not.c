// This program shows if a person is single or not
#include <stdio.h>

int main(){

int single;

printf("Are you single? 1) Yes 2) No: ");
scanf("%d",&single);

if(single % 2 == 0){
  printf("You must watch yourself \n");
}else{
  printf("You're a happy person \n");
}


  return 0;
}