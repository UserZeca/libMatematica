#include <stdio.h>
#include "libMatematica.h"
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    float angulo = rand() % 360;
    printf("[Angulo %.2f]\nsen: %f\ncos: %f\ntag: %f\n", angulo, calcular_seno(angulo), calcular_cosseno(angulo), calcular_tangente(angulo));

    return 0;
}