#include <stdio.h>

int numero, ultimoNumero, penultimoNumero, primeiroNumero;

int main(){

    printf("...::: PROGRAMA INVERSOR DE NUMEROS :::...\n");
    printf("Insira o número que deseja inverter:");
    printf("0 a 999\n");
    scanf("%i", &numero);

    //calculador de numeros//

    ultimoNumero = numero % 10;
    penultimoNumero = numero / 10 % 10;
    primeiroNumero = numero / 100;

    printf("Aqui esta o numero invertido %i%i%i\n", ultimoNumero, penultimoNumero, primeiroNumero);


return 0;    

}
