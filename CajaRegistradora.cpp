#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int  precio,nventas=0,totalventas=0;
char menu;
bool salir=false;
while (salir==false) {//Evita que el programa termine sin que el usuario lo desee 
	system("cls");//limpia la pantalla despues de cada proceso 
  cout << "\t<<TiendaMax>>\n\nCaja registradora \n\n1------Registrar una venta \n2------Ver total ventas realizadas \n3------Salir" << '\n';
  cin>>menu;
  switch(menu){
    case '1':{//caso 1: Registro de ventas
    	int dir=0,cliente=0,cambio=0;
    	bool venta=true;
    	system("cls");//limpia la pantalla despues de cada proceso 
    	while (venta==true) {//Registra productos hasta que el valor ingresado sea igual a 0
      		cout << "Precio del producto (presione 0 para salir)" << '\n';
      		cin>>precio;
      		dir+=precio;
      		if(precio==0)
      			venta=false;      		
    	}
    	system("cls");
	    cout << "\t<<TiendaMax>> \n\n\tVenta de productos \nTotal compra realizada: " <<dir<<"\nDigite la cantidad de dinero dada por el cliente: \n";
    	cin>>cliente;
    	cambio=cliente-dir;
    	system ("cls");//limpia la pantalla despues de cada proceso 
    	cout<<"!!!Cambio!!!\n"<<cambio;
    	getch();
    	system ("cls");//limpia la pantalla despues de cada proceso 
    	cout<<"***VENTA REALIZADA CON EXITO :)*** \n";
    	nventas+=1;
    	totalventas+=dir;
    	getch();
    	system("cls");//limpia la pantalla despues de cada proceso 
		break;
	}
    
    case '2'://caso 2: consulta de ventas
    	system("cls");//limpia la pantalla despues de cada proceso 
    	cout <<"\t<<TiendaMax \n\tVenta de productos \n\nNumero de ventas: "<<nventas<<"\nTotal vendido: "<<totalventas;
    	getch();
    	system("cls");//limpia la pantalla despues de cada proceso 
    break;
	case '3':{//caso 3: Salir mostrando el registro de ventas
		system("cls");//limpia la pantalla despues de cada proceso 
    	cout << "\t<<TiendaMax \n\tVenta de productos \n\nNumero de ventas: "<<nventas<<"\nTotal vendido: "<<totalventas;
    	salir=true;
    	getch();
    	system("cls");//limpia la pantalla despues de cada proceso 
		break;
	}   
    default://opcion incorrecta ingresada por el usuario 
    system("cls");//limpia la pantalla despues de cada proceso 
    cout<<"Digite un valor correcto (1-3)";
    getch();
	}
}
}

