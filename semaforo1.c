#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void verde1(int verde){//Funcion para la luz verde
	int i ;
	printf("\t\t\t\t\t\tLuz Verde");
		for(i=0;i<verde;i++){
			Sleep(1000);// Tiempo en segundo
			Beep(1200,600);//Seleccón de sonido.
			system("color  A0");//color de fondo verde 
			}
    
		system("cls");
}
void amarillo1(int amarillo){ //Funcion de la luz Amarilla
	int j;
	printf("\t\t\t\t\t\tLuz Amarilla");
	while(1){//Bucle para repetir 
		for(j=0;j<amarillo;j++){
			Sleep(1000);
			Beep(600,400);
			system("color  E0");//Seleccion de color amarillo texto en negor 0
		}
		break;//Sirve para para cuando el bucle se completo
	}
	system("cls");//Limpia la pantalla
}

void rojo1(int rojo){ //Funcion de la luz Roja
	int k;
	printf("\t\t\t\t\t\tLuz Roja");
	while(1){
	
		for(k=0;k<rojo;k++){
			Sleep(1000);	
			Beep(600,400);
			system("color  48");//seleeecion de numero
			}
		break;
	}
	system("cls");
}
int main(){
	int amarillo=5, verde=20,rojo=15;
	//Llamando a las funciones 
	while(1){
		verde1(verde);
		amarillo1(amarillo);
		rojo1(rojo);
  }
	return 0;
}
