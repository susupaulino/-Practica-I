#include <stdio.h>

int main(int arg_count, char *arg_list[]) {
    int i;

    // Imprimir la cantidad de argumentos
    printf("There were %d arguments provided:\n", arg_count);

    // Iterar a través de todos los argumentos
    for(i = 0; i < arg_count; i++)
        printf("argument #%d\t-\t%s\n", i, arg_list[i]);

    return 0;
}
