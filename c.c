#include <stdio.h>
int main(){

int num;
int contador;
int sale;
char opc;

do {

 printf("por favor ingrese un numero para la tabla de multiplica \n");
 scanf("%d",&num);
 contador=1;
    do
    {
    
    sale=num*contador;
    printf("%d * %d = %d \n",num, contador, sale);
    contador ++;
    } while (contador<=12);

printf("Quiere hacer otra tabla? (s/n)");
scanf(" %c", &opc);
} while (opc== 's' || opc == 'S');

printf("Gracias por usar nuestros servicios \n");

 return 0;
}