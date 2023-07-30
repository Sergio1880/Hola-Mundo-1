#include <stdio.h>

int ingresoEntero();
float ingresoReal();
void mostrarEntero(int);
void mostrarReal(float);
void saludo();

int main(void) {

  
  
  return 0;
}


int ingresoEntero(){
  int a;
  printf("Ingrese un numero Entero:\n");
  scanf("%d",&a);
  return a;
}

float ingresoReal(){
  float a;
  printf("Ingrese un numero Real:\n");
  scanf("%f",&a);
  return a;
}

void mostrarEntero(int a){
  printf("\nEl numero es:%d",a);
}
void mostrarReal(float a){
  printf("\nEl numero es:%f",a);
}

void saludo(){
  printf("HOLA MUNDO!!!");
}


//By Sergio Chavez