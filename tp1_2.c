#include <stdio.h>

int cuadradoNumero(int num);

void cuadradoVoid(int num, int *resul);
void invertir(int a, int b);
void orden(int *a, int *b);

int main()
{
    int num=2;
    int result;
    int a=5, b=7, c = 15, d = 10;
    //c)
    //result = cuadradoNumero(num);

    printf("La direccion es: %d, y el contenido es: %d\n", &result,result);
    
    //f)
    invertir(a,b);
    orden(&c,&d);

    printf("\nEl valor de c es: %d y el valor de d es: %d",c,d);
    
    return 0;
    
}


int cuadradoNumero(int num)
{
    int result;
    result = num*num;
    return result;
}

void cuadradoVoid(int num, int *resul)
{
    *resul = num * num;   
    

}
void invertir(int a, int b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("El nuevo valor de a es: %d y el de b es: %d", a,b);
}
void orden(int *a,int *b)
{
    int aux;
    if (*a > *b)
    {   
        aux = *b;
        *b = *a;
        *a = aux;
    }
    
}

