#include <stdio.h>

int main()
{
    int num=10;
    int *punt= &num;

    printf("Hola mundo");
    
    //el contenido del puntero
    printf("\n%d",*punt);
    //la direccion de memoria almacenada por el punt
    printf("\n%d",punt);
    //la direccion de memoria de la variable
    printf("\n%d",&num);
    //la direccion de memoria del puntero
    printf("\n%d",&punt);
    //el tamaño de memoria 
    printf("\n%d", sizeof(punt));

    return 0;
}