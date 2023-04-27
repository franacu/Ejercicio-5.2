#include <stdio.h>
typedef struct
{
    int codigo;
    char nombre[50];
    int stock;
    int stock_minimo;

}Producto;


int main()
{
    int cant_prod,i=0;
    printf("Ingrese la cantidad de productos a registrar: ");
    scanf("%d", &cant_prod);
    Producto productos[cant_prod];
    for (int i = 0; i < cant_prod; i++){
        printf("\nIngrese los detalles del producto %d:\n", i + 1);
        printf("Código: ");
        scanf("%d", &productos[i].codigo);
        printf("Nombre: ");
        scanf("%s", productos[i].nombre);
        printf("Stock: ");
        scanf("%d", &productos[i].stock);
        printf("Stock mínimo: ");
        scanf("%d", &productos[i].stock_minimo);
    }
    printf("\nProductos registrados:\n");
    for (i=0; i < cant_prod; i++) {
        printf("\nCódigo: %d\n", productos[i].codigo);
        printf("Nombre: %s\n", productos[i].nombre);
        printf("Stock: %d\n", productos[i].stock);
        printf("Stock mínimo: %d\n", productos[i].stock_minimo);
    }
    return 0;
}
