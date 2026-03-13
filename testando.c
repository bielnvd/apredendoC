#include <stdio.h>
int main () {
float nota1, nota2, nota3, nota4, media, soma;
int opcao;

printf ("Menu principal:\n");
printf ("1. Calcular média.\n");
printf ("2. Determinar status.\n");
printf ("3. Sair.\n");
printf ("Escolha uma opção:\n");
scanf ("%d", &opcao);
switch (opcao)
{
case 1:
    printf ("Digite sua primeira nota:\n");
scanf ("%f", &nota1);
printf ("Digite sua primeira nota:\n");
scanf ("%f", &nota2);
printf ("Digite sua primeira nota:\n");
scanf ("%f", &nota3);
printf ("Digite sua primeira nota:\n");
scanf ("%f", &nota4);
soma = nota1 + nota2 + nota3 + nota4;
media = soma/4;
printf ("Sua média: %.2f", media);
;
    break;
case 2:
printf ("Digite sua média para ver seu status:\n");
scanf ("%f", &media);
if (media >= 7 && media <= 10) {
printf ("Aprovado!");
} else if (media == 6 || media == 5) {
printf ("Recuperação"); 
} 
else if (media >= 11) {
printf ("O máximo é dez, mano, peba.");
}
else {
    printf ("Reprovado, que peba, mano.");
}
break;
case 3:
printf ("Saindo...");
break;
default:
printf ("Que burro hein...");
    break;
}

}
