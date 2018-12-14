//KALKULATOR

#include <stdio.h>
#include <stdlib.h>

int main(){

long long int a,b;
int wybor;
int inne;
int x;
printf("****PROSTY KALKULATOR****\n\n");
printf("Menu: \n");
printf("1. Dodawanie\n");
printf("2. Odejmowanie\n");
printf("3. Mnozenie\n");
printf("4. Reszta z dzielenia\n\n");

do  {

printf("Podaj liczbe a: ");
scanf("%lld",&a);

printf("Podaj liczbe b: ");
scanf("%lld",&b);

printf("Podane liczby to: a = %lld i b = %lld\n",a,b);

puts("Podaj numer dzialania: \n");
scanf("%d", &wybor);

switch(wybor)   {

case 1:{
printf("Wynik dodawania to: ");
printf("%lld\n\n",(a+b));
}
break;

case 2:{
printf("Wynik odejmowania to: ");
printf("%lld\n\n",(a-b));
}
break;

case 3:{
printf("Wynik mnozenia to: ");
printf("%lld\n\n",(a*b));
}
break;

case 4:{
printf("Wynik modulo to: ");
printf("%lld\n\n",(a%b));
}
break;

default:
puts("Zly wybor");
break;

}

puts("Inne dzialanie na tych samych liczbach?\n1 - tak, 0 - nie");
scanf("%d",&inne);

if (inne)   {}

else {
puts("Dzialanie na innych liczbach?\n1 - tak, 0 - nie");
scanf("%d",&x);
if (x){
continue;
}
else break;
}

}
while (x);

return 0;
}

