#include <stdio.h>

//Faça um programa em C que leia Km e litros do seu carro e diga o consumo medio e se seu carro é economico,intermediario ou gasta muito

int main(){

float k, l;
int y;

do{
printf("\nPROGRAMA AVALIADOR DE CONSUMO DE VEICULOS AUROMOTORES\n\nQuantos Km foram percorridos? ");
scanf("%f" , &k);
printf("\nQuantos litros foram abastecidos? ");
scanf("%f" , &l);

if(k/l<8){
    printf("\nSeu consumo médio foi de %.2f km/l. Seu carro nao e economico.\nDeseja efetuar nova consulta? (1-Sim ou 2-Nao)\n" , k/l);
    scanf("%d" , &y);
}
else if(k/l>=8 && k/l<=10){
    printf("\nSeu consumo medio foi de %.2f km/l. Seu carro tem um consumo intermediario.\nDeseja efetuar nova consulta? (1-Sim ou 2-Nao\n)" , k/l);
    scanf("%d" , &y);
}
else{
        printf("\nSeu consumo medio foi de %.2f km/l. Seu carro e economico, parabens!.\n\nDeseja efetuar nova consulta? (1-Sim ou 2-Nao)\n" , k/l);
        scanf("%d" , &y);
}
}
while(y==1);
    if(y==2){
        printf("\nMuito obrigado por usar nosso sistema, ate a proxima!\n");
    }
 return 0;
}
