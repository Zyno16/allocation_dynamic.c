#include <stdio.h>
#include <stdlib.h>

main(){
float *pr  = malloc(sizeof(float));
float *pv = malloc(sizeof(float));
float *p = malloc(sizeof(float));
printf("enter the price of the iteams");
scanf("%f",pr);
printf("enter the price of the iteams");
scanf("%f",pv);
if(*pr>*pv)
    printf("you win =%.2f",*pr-*pv);
else if(*pr<*pv)
printf("you loose %.2f",*pr-*pv);
else
printf("")

return 0;
}
