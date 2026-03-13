#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
int numeroJogador, numeroComputador, resultado;
char tipocomparacao;
srand (time(0)); 
numeroComputador = rand () % 100 + 1;

printf ("Escolha um tipo de comparação e um número:\n");
printf ("M. Maior\n");
printf ("N. Menor\n");
printf ("I. Igual\n");
scanf (" %c", &tipocomparacao);

printf ("Escolha um número de 1 a 100:\n");
scanf ("%d", &numeroJogador);

switch (tipocomparacao) {
case 'M':
case 'm':
resultado = numeroJogador >= numeroComputador ? 1 : 0; 
if (numeroJogador >=1) {
printf ("Parabéns, você venceu!\n");
}
else {
    printf ("Infelizmente, você perdeu!\n");
}
break;
case 'N':
case 'n':
resultado = numeroJogador <= numeroComputador ? 1 : 0; 
if (numeroJogador <=1) {
printf ("Parabéns, você venceu!\n");
}
else {
    printf ("Infelizmente, você perdeu!\n");
}
break;
case 'I':
case 'i':
resultado = numeroJogador == numeroComputador ? 1 : 0;
if (numeroJogador ==1) {
printf ("Parabéns, você venceu!\n");
}
else {
    printf ("Infelizmente, você perdeu!\n");
} 
break;
}
printf ("Número do jogador: %d - Número do computador: %d\n",numeroJogador, numeroComputador);

}
