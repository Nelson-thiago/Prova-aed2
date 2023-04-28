#include <stdio.h>
#include <stdlib.h>

void entrada(float *r){
    printf("insira o tamanho do raio: ");
    scanf("%f", r);
    printf("%.2f \n", *r);
}

void processamento(float *per, float *ar, float *dia, float *vol, float *r){
    *per=  (2.0 * 3.14) * (*r);
    *ar = 3.14 * ((*r)*(*r));
    *dia = 2.0 * (*r);
    *vol = 1.3 * 3.14 * (*r);
}
void saida(float *per, float *ar, float *dia, float *vol){
    printf("o perimetro eh: %.2f\n", *per);
    printf("a area eh: %.2f\n", *ar);
    printf("o diametro eh: %.2f\n", *dia);
    printf("o volume eh: %.2f\n", *vol);

}
void questao01(void){

    float perimetro, area, diametro, volume, raio;

    entrada(&raio);
    processamento(&perimetro,&area,&diametro,&volume,&raio);
    saida(&perimetro,&area,&diametro,&volume);


}
