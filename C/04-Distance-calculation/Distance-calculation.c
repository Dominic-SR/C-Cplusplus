#include <stdio.h>

int main(){

float km,m,cm,ft,i;

printf("\n Please Enter the Kilometer :");
scanf("%f",&km);

m=km*1000;
cm=m*100;
ft=cm/2.54;
i=ft/12;

printf("\n Meter :%0.2f",m);
printf("\n Centi Meter :%0.2f",cm);
printf("\n Feet :%0.2f",ft);
printf("\n Inch :%0.2f",i);

return 0;
}
