#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

main() {
	system ("color E");
	long long i,a,b,z,x,w,h,t,y,op=0;
	int c[100],d[100],m[100];
	cout<<"Ingrese la variable para el inicio de la convercion. ";
	
	/*---------------------------Transformación a binaro---------------------------*/
	cout<<endl;
	cin>>a;
	x=a;
	y=a;
	z=0;
	i=1;
	b=a%2;
	a=a/2;
	c[0]=b;
	
	while ((a/2)>1){
		b=a%2;
		a=a/2;
		c[i]=b;
		i++;
	}
	
	b=a%2;	
	c[i]=b;
	i++;
	b=a/2;
	c[i]=b;
	cout<<endl;
	cout<<"                             Convercion Finalizada. ";
	cout<<endl;
	cout<<endl;
	cout<<"Representacion en el sistema Binario. ";
	cout<<endl;
	cout<<endl;
	
	while (i>=z){
		cout<<c[i];
		i--;
    }
    
    cout<< endl;
    cout<<endl;
    		
    /*--------------------------- Tranformación a hexadecimal---------------------------*/			
	i=1;
	z=0;
	h=x%16;
	x=x/16;
	d[0]=h;
	
 	if (x<16){
 		d[i]=x;
 	}
 		
 	while (x>15){
 		h=x%16;
 		x=x/16;
 		d[i]=h;
 		i++;
 			if (x<16){
 				d[i]=x;
 			}
	}
	
	cout<<"Representacion en el sistema Hexadecimal ";
	cout<<endl;
	cout<<endl;
	
	while (i>=z)
	{
		t=d[i];
			switch (t){
				case 10:
					cout<<"A";
					break;
				case 11:
					cout<<"B";
					break;
				case 12:
					cout<<"C";
					break;
				case 13:
					cout<<"D";
					break;
				case 14:
					cout<<"E";
					break;
				case 15:
					cout<<"F";
					break;
				default:
				cout<<d[i];
				break;	
				}
		i--;
	}
	
	/*---------------------------Transformación de decimal a Octal---------------------------*/
		    
	cout<<endl;
	z=0;
	i=1;
	w=y%8;
	y=y/8;
	m[0]=w;
	
	if (y<8){
 		m[i]=y;
 	}
 	
	while (y>7){
		w=y%8;
		y=y/8;
		m[i]=w;
		i++;
		if (y<8){
 			m[i]=y;
 		} 	
	}
		    
	cout<<endl;
	cout<<"Representacion en el sistema Octal. ";
	cout<<endl;
	cout<<endl;
	
	while (i>=z){
		cout<<m[i];
		i--;
	}
	
	cout<<endl;
	cout<<endl;
}

