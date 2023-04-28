#include <stdio.h>
#include <stdlib.h>

void entrada2(float *salb){
    printf("insira o valor do salario bruto: ");
    scanf("%f", salb);
}

void processamento2(float *salb, float *sall){
    if(*salb > 2000.0){
        printf("o salario eh maior que R$ 2000,00\n");
        *sall= *salb - (*salb * 0.2);
    }
    else{
        *sall= *salb - (*salb * 0.1);
        printf("o salario eh menor q 2000\n");
    }
}
void saida2(float *sall){
    printf("o salario liquido eh: %.2f", *sall);
}
void questao02(void){

    float salariobruto, salarioliq ;

    entrada2(&salariobruto);
    processamento2(&salariobruto,&salarioliq);
    saida2(&salarioliq);


}
