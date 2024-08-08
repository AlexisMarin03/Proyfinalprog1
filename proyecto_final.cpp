#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

struct estudiante {
	string nombre;
	string pass;
	string cd;
	};
	struct respuestas {
	int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
	};
int main (){
	float point, promedio, promedioF, point2, promedio2, promedioF2,rp;
	promedioF=0;
	promedioF2=0;
	int a[]={1,2,3,4,5};
	struct estudiante id;
	struct respuestas p1, p2;
	string n,p,f,f2,c;
	int i,opcion;	
	system("color 70");
	cout << "*****************************************\n";	
	cout << "**                                     **\n";
	cout << "**          Universidad Latina         **\n";
	cout << "**              de Panama              **\n";
	cout << "**                                     **\n";
	cout << "**    Integrantes:                     **\n";
	cout << "**        Diego Oliva   8-960-1429     **\n";
	cout << "**        Alexis Marin  8-949-1114     **\n";
	cout << "**        Pablo Salazar 8-951-499      **\n";
	cout << "**                                     **\n";
	cout << "**    Programacion I                   **\n";
	cout << "**                                     **\n";
	cout << "**    Profesor                         **\n";
	cout << "**      Arturo U. Murillo              **\n";
	cout << "**                                     **\n";
	cout << "*****************************************\n";
	cout << endl;
	cout << "________________Registro_________________\n";
	cout << endl;
	cout << "Ingrese su cedula: ";
	cin >> id.cd;
	cout << "Ingrese su Nombre de usuario: ";
	cin >> id.nombre;
	cout << "Ingrese su contrasena: ";
	cin >> id.pass;
	cout << "Gracias por Registrarse\n";
	cout << endl;
	for(i=1; i<4; i++){
	system("pause>null");
	system("cls");
	cout << "__________________Login_________________\n";
	cout << endl;
	cout << "inserte su cedula: ";
	cin >> c;
	if(id.cd == c){
	cout << "cedula correcta\n";
	cout << "________________________________________\n";
	cout << "Nombre de usuario: ";
	cin >> n;
	if(id.nombre == n){
	cout << "Nombre de usuario correcto\n";
	cout << "________________________________________\n";
	cout << "contrasena: ";
	cin >> p;
	if(id.pass == p){
	cout << "Contrasena correcta, bienvenido, sera redirigido a la aplicacion" << endl;
	system("pause>null");
	break; //salir de if para poder iniciar
	}
	else
	if(id.pass != p){
    cout << "Contrasena incorrecta, por favor ingrese un usuario y contrasena valida" << endl;
    system("pause>null");
	}
}
	else
	if(id.nombre != n){
    cout << "Nombre de usuario incorrecto, por favor ingrese su nombre de usuario nuevamente" << endl;
  	system("pause>null");}

	else
	if(id.cd != c){
 	cout <<"cedula incorrecta, por favor intentelo de nuevo"<<endl;
 	system("pause>null");
}
}
 if(i > 0){
    cout << endl;
    cout << "Ha realizado " << i << "/3 intentos" << endl;
    cout << endl;
    system("pause>null");
   }
 if(i == 3){
   cout << endl;
   cout << "Ha realizado 3 intentos, por seguridad el programa se cerrara..." << endl;
   system("pause>null");
   exit(0);
  }
}
 
	system("cls");
	do{
	system("cls");
	cout << "__________________MENU__________________\n";
	cout << "1 - Primer Parcial   nota: "<<promedioF<<endl;
	cout << "2 - Segundo Parcial  nota: "<<promedioF2<<endl;
	cout << "3 - Reporte          Final: "<<(promedioF+promedioF2)/2<<endl;
	cout << "4 - Salir\n";
	cout << "________________________________________\n";
	cout << "opcion: ";	
	cin >> opcion;
	 switch (opcion)
     {
            case 1:
 				if(f!="y"){ 
            	system("cls");
                cout<<"Bienvenido a Primer parcial\n";
                cout<<"Esta consta de 10 preguntas\n";
                cout<<"debes elegir la mejor opci\242n, buena suerte\n"<<endl;
                cout << "________________________________________\n";
                cout<<"1) Quienes crearon el lenguaje c?\n";
                cout << "________________________________________\n";
                cout<<"1) Bill Gates y Steve Jobs\n";
                cout<<"2) Ken Thompson y Dennis M. Ritchie\n";
                cout<<"3) Larry y Serguei Brin\n";
                cout<<"4) Thomas Edison y Nikola Tesla\n";
                cout<<"5) Jerry Yang y David FIlo\n";
                cout << "________________________________________\n";
                cin>>p1.r1;
                if(p1.r1==a[1]){
		    	cout<<"correcto \n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    }

			    
                system("cls");
                cout<<"2) En que ano fue creado?\n";;
                cout << "________________________________________\n"; 
                cout<<"1) 1982\n";
                cout<<"2) 1943\n";
                cout<<"3) 1975\n";
                cout<<"4) 1950\n";
                cout<<"5) 1969\n";
                cout << "________________________________________\n";
                cin>>p1.r2;
                if(p1.r2==a[4]){
		    	cout<<"correcto \n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    }

			    
			    
                system("cls");
                cout<<"3) en que laboratorio se creo el lenguaje c? \n";
                cout << "________________________________________\n";
                cout<<"1) bell \n";
                cout<<"2) microsoft\n";
                cout<<"3) fermi\n";
                cout<<"4) wageningen\n";
                cout<<"5) ninguno de los anteriores\n";
                cout << "________________________________________\n";
                cin>>p1.r3;
                if(p1.r3==a[0]){
		    	cout<<"correcto \n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    }
			    
                
                system("cls");
                cout<<"4) que es un editor?\n";
                cout << "________________________________________\n";
                cout<<"1) crea el programa .c o.cpp\n";
                cout<<"2) edita las variables\n";
                cout<<"3) cambio de nombre\n";
                cout<<"4) edita los campos\n";
                cout<<"5) ninguno de los anteriores\n";
                cout << "________________________________________\n";
                cin>>p1.r4;
                if(p1.r4==a[0]){
		    	cout<<"correcto \n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    }

                
                
                system("cls");
                cout<<"5) que es un procesador?\n";               
                cout << "________________________________________\n";
                cout<<"1) genera codigos\n";
                cout<<"2) genera nuevos archivos\n";
                cout<<"3) procesa directivas\n";
                cout<<"4) procesa cambios \n";
                cout<<"5) ninguno de los anteriores\n";
                cout << "________________________________________\n";
                cin>>p1.r5;
                if(p1.r5==a[2]){
		    	cout<<"correcto \n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    }

                
                
                system("cls");
                cout<<"6) que es un compilador?\n";                
                cout << "________________________________________\n";
                cout<<"1) procesa directivas\n";
                cout<<"2) crea archivos\n";
                cout<<"3) genera codigo objeto obj.\n";
                cout<<"4) cambia la directiva\n";
                cout<<"5) ninguno de los anteriores\n";
                cout << "________________________________________\n";
                cin>>p1.r6;
                if(p1.r6==a[2]){
		    	cout<<"correcto \n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    }

                
                
                system("cls");
                cout<<"7) funcion de este escape de salida (t)\n";               
                cout << "________________________________________\n";
                cout<<"1) imprime comillas\n";
                cout<<"2) retono de linea\n";
                cout<<"3) diagonal invertida\n";
                cout<<"4) tabulacion horizontal\n";
                cout<<"5) ninguno de los anteriores\n";
                cout << "________________________________________\n";
                cin>>p1.r7;
                if(p1.r7==a[3]){
		    	cout<<"correcto \n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    }

                
                
                system("cls");
                cout<<"8) funcion de este escape de salida (r)\n";               
                cout << "________________________________________\n";
                cout<<"1) tabulacion horizontal\n";
                cout<<"2) retono de linea\n";
                cout<<"3) imprime comillas \n";
                cout<<"4) visualiza un caracter\n";
                cout<<"5) ninguno de los anteriores\n";
                cout << "________________________________________\n";
                cin>>p1.r8;
                if(p1.r8==a[1]){
		    	cout<<"correcto \n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    }

                
                
                system("cls");
                cout<<"9) funcion de este escape de salida (OOO)\n ";               
                cout << "________________________________________\n ";
                cout<<"1) imprime comillas\n";
                cout<<"2) retono de linea\n";
                cout<<"3) diagonal invertida\n";
                cout<<"4) tabulacion horizontal\n";
                cout<<"5) ninguno de los anteriores\n";
                cout << "________________________________________\n ";
                cin>>p1.r9;
                if(p1.r9==a[4]){
		    	cout<<"correcto \n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    }

                
                
                system("cls");
                cout<<"10) cual es el operador de modulo en cpp\n";              
                cout << "________________________________________\n";
                cout<<"1) +\n";
                cout<<"2) -\n";
                cout<<"3) *\n";
                cout<<"4) %\n";
                cout<<"5) /\n";
                cout << "________________________________________\n";
                cin>>p1.r10;
                if(p1.r10==a[3]){
		    	cout<<"correcto \n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    }
			    system ("cls");
			    cout<<endl;
			    cout<<"coloque y para finalizar"<<endl;
			    cout << "________________________________________\n"; 
			    cin>>f;
			    system("cls");
			    cout<<" puntos obtenidos: "<<point<<endl;
			    promedio=point/10;
			    promedioF=promedio*100;
			    cout<<"Calificación: "<<promedioF<<endl;
			    if(promedioF>=91 and promedioF<=100){
			    	cout<<"Nota: A \n";
				} else if(promedioF>=81 and promedioF<=90){
					cout<<"Nota: B \n";
				} else if(promedioF>=71 and promedioF<=80){
					cout<<"Nota: C \n";
				} else if(promedioF>=61 and promedioF<=70){
					cout<<"Nota: D \n";
				} else if(promedioF<60){
					cout<<"Nota: F \n";
				}
			    
			    cout<<"resultado final: "<<promedioF<<endl;
			    
			    Sleep(2000);
			    system("pause");
			    break;
			}
			    else{
			    cout<<"usted ya realizo este parcial \n";
			    system("pause");
			    break;
				}
			    
			    
			    
			    
            case 2:
            	//parcial 2
            	if(f=="y"&&f2!="y"){
		    	system("cls");
                cout<<"Bienvenido a Segundo parcial\n";
                cout<<"Esta consta de 10 preguntas\n";
                cout<<"debes elegir la mejor opci\242n, buena suerte\n";
                cout << "________________________________________\n";
                cout<<"1) Para definir un array hay que definir \n";
                cout << "________________________________________\n";
                cout<<"1) variable\n";
                cout<<"2) nombre\n";
                cout<<"3) tamaño\n";
                cout<<"4) ninguna de las anteriores\n";
                cout<<"5) todas las anteriores\n";
                cout << "________________________________________\n";
                cin>>p2.r1;
                if(p2.r1==a[4]){
		    	cout<<"correcto \n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    }
                
                
                system("cls");
                cout<<"2) donde comienza un indice?\n";;
                cout << "________________________________________\n"; 
                cout<<"1) 0\n";
                cout<<"2) 1\n";
                cout<<"3) 0.1\n";
                cout<<"4) 2\n";
                cout<<"5) ninguna de las anteriores\n";
                cout << "________________________________________\n";
                cin>>p2.r2;
                if(p2.r2==a[0]){
		    	cout<<"correcto \n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    }                
                
                
                system("cls");
                cout<<"3)Las estructuras de datos nos permiten\n";
                cout << "________________________________________\n";
                cout<<"1) hacer una estructura\n";
                cout<<"2) mantener el orden \n";
                cout<<"3) resolver un problema de manera más sencilla \n";
                cout<<"4) simplificar un problema\n";
                cout<<"5) ninguna de las anteriores\n";
                cout << "________________________________________\n";
                cin>>p2.r3;
                if(p2.r3==a[2]){
		    	cout<<"correcto \n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    }                
                
                
                system("cls");
                cout<<"4)La asignaci\242n de estructuras solo est\240 permitida entre \n";
                cout << "________________________________________\n";
                cout<<"1) cualquier tipo de objeto\n";
                cout<<"2) objetos del mismo tipo de estructuras\n";
                cout<<"3) objetos especificos\n";
                cout<<"4) solo un objeto\n";
                cout<<"5) ninguna de las anteriores\n";
                cout << "________________________________________\n";
                cin>>p2.r4;
                if(p2.r4==a[1]){
		    	cout<<"correcto \n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    }                
                
                
                system("cls");
                cout<<"5) Los punteros en c++ sirven para \n";               
                cout << "________________________________________\n";
                cout<<"1) señalar objetos\n";
                cout<<"2) quitar objetos\n";
                cout<<"3) marcar objetos\n";
                cout<<"4) crear objetos\n";
                cout<<"5) ninguna de las anteriores\n";
                cout << "________________________________________\n";
                cin>>p2.r5;
                 if(p2.r5==a[0]){
		    	cout<<"correcto \n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    }               
                
                
                system("cls");
                cout<<"6) como se declaran los punteros con respeto a los demas objetos\n";                
                cout << "________________________________________\n";
                cout<<"1) direntes\n";
                cout<<"2) identificandolos\n";
                cout<<"3) con un +\n";
                cout<<"4) con un %\n";
                cout<<"5) ninguna de las anteriores\n";
                cout << "________________________________________\n";
                cin>>p2.r6;
                if(p2.r6==a[4]){
		    	cout<<"correcto \n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    }              
                
                
                system("cls");
                cout<<"7) cuales son los operadores aridmeticos?\n";               
                cout << "________________________________________\n";
                cout<<"1) division\n";
                cout<<"2) multiplicacion\n";
                cout<<"3) modulo\n";
                cout<<"4) todos los anteriores\n";
                cout<<"5) ninguna de las anteriores\n";
                cout << "________________________________________\n";
                cin>>p2.r7;
                if(p2.r7==a[3]){
		    	cout<<"correcto \n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    }                
                
                
                system("cls");
                cout<<"8) que es una funcion en c++\n";               
                cout << "________________________________________\n";
                cout<<"1) el valor de entrada o parametros\n";
                cout<<"2) conjunto de instrucciones en forma de c\242digos \n";
                cout<<"3) recibe una copia del valor que tiene la variable\n";
                cout<<"4) da un orden prioritario\n";
                cout<<"5) ninguna de las anteriores\n";
                cout << "________________________________________\n";
                cin>>p2.r8;
                if(p2.r8==a[1]){
		    	cout<<"correcto \n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    }               
                
                
                system("cls");
                cout<<"9) cual es la funcion del operador #\n";               
                cout << "________________________________________\n";
                cout<<"1) marcar objetos\n";
                cout<<"2) definir macros\n";
                cout<<"3) dar ordenes o directivas\n";
                cout<<"4) remplazar obejtos\n";
                cout<<"5) ninguna de las anteriores\n";
                cout << "________________________________________\n";
                cin>>p2.r9;
                if(p2.r9==a[2]){
		    	cout<<"correcto \n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    }               
                
                
                system("cls");
                cout<<"10) funcion del operador &\n";              
                cout << "________________________________________\n";
                cout<<"1) considera a su operando como una direcci\242n\n";
                cout<<"2) devuelve la direcci\242n de memoria del operando\n";
                cout<<"3) Permite acceder a objetos \n";
                cout<<"4) dar \242rdenes o directivas al compilador\n";
                cout<<"5) ninguna de las anteriores\n";
                cout << "________________________________________\n";
                cin>>p2.r10;
                if(p2.r10==a[1]){
		    	cout<<"correcto \n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    }
			    system ("cls");
			    cout<<endl;
			    cout<<"coloque y para finalizar"<<endl;
			    cout << "________________________________________\n"; 
			    cin>>f2;
			    system("cls");
			    cout<<"Puntos obtenidos: "<<point2<<endl;
			    promedio2=point2/10;
			    promedioF2=promedio2*100;
			    
			    cout<<"Calificacion: "<<promedioF2<<endl;
			    if(promedioF2>=91 and promedioF2<=100){
			    	cout<<"Nota A \n";
				} else if(promedioF2>=81 and promedioF2<=90){
					cout<<"Nota B \n";
				} else if(promedioF2>=71 and promedioF2<=80){
					cout<<"Nota C \n";
				} else if(promedioF2>=61 and promedioF2<=70){
					cout<<"Nota D \n";
				} else if(promedioF2<60){
					cout<<"Nota F \n";
				}
			    
			    cout<<"resultado final: "<<promedioF2<<endl;
			    system("pause");
			    
			    
                break;
			    } else{
			    cout<<"usted no ha hecho el primer parcial o ya realizo este parcial \n";
			    system("pause");
			    break;
			    }
            	
            case 3:
            	system("cls");
            	cout<<"Ingrese 1 para ver los reportes del parcial numero 1 "<<endl;
            	cout<<"ingrese 2 para ver los reportes del parcial numero 2"<<endl;
            	cout<<"ingrese 3 para ver la nota final\n"<<endl;
                cout<<"Reportes\n";
                cout<<" 1. Parcial 1 \n " ;
                cout<<"2. Parcial 2 \n " ;
                cout<<"3. Nota Total \n " ;
                cin>>rp; 
                
                
                //parcial 1
                if(rp==1){
                system("cls");
                cout<<"                     Reportes        \n\n";
                cout<<"Sus resultados del parcial #1 son los siguientes. \n\n\n ";
                cout<<"Puntos obtenidos: "<<point<<"/10. \n ";
                cout<<"Calificacion: "<<promedioF<<endl;
                //Nota en letra
                if(promedioF>=91 and promedioF<=100){
			    	cout<<"Nota A \n";
				} else if(promedioF>=81 and promedioF<=90){
					cout<<"Nota B \n";
				} else if(promedioF>=71 and promedioF<=80){
					cout<<"Nota C \n";
				} else if(promedioF>=61 and promedioF<=70){
					cout<<"Nota D \n";
				} else if(promedioF<60){
					cout<<"Nota F \n";
				}

                cout << "________________________________________\n"; 
				cout<<"1) Quienes crearon el lenguaje c?\n";
                if(p1.r1==a[1]){
		    	cout<<"correcto \n";
		    	cout<<"Ken Thompson y Dennis M. Ritchie\n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: Ken Thompson y Dennis M. Ritchie\n";
			    }

                cout << "________________________________________\n"; 
                cout<<"2) En que año fue creado?\n";
                if(p1.r2==a[4]){
		    	cout<<"correcto \n";
		    	cout<<"1969\n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: 1969\n";
			    }

                cout << "________________________________________\n";
                cout<<"3) en que laboratorio se creo el lenguaje c? \n";
                if(p1.r3==a[0]){
		    	cout<<"correcto \n";
		    	cout<<"bell \n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: bell \n";
			    }
			    
                
                cout << "________________________________________\n";
                cout<<"4) que es un editor?\n";
                if(p1.r4==a[0]){
		    	cout<<"correcto \n";
		    	cout<<"crea el programa .c o.cpp\n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: crea el programa .c o.cpp\n";
			    }

                cout << "________________________________________\n";
                cout<<"5) que es un procesador?\n";               
                if(p1.r5==a[2]){
		    	cout<<"correcto \n";
		    	cout<<"procesa directivas\n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: procesa directivas\n";
			    }

                cout << "________________________________________\n";
                cout<<"6) que es un compilador?\n";                
                if(p1.r6==a[2]){
		    	cout<<"correcto \n";
		    	cout<<"genera codigo objeto obj.\n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: genera codigo objeto obj.\n";
			    }

                cout << "________________________________________\n";
                cout<<"7) funcion de este escape de salida (t)\n";               
                if(p1.r7==a[3]){
		    	cout<<"correcto \n";
		    	cout<<"diagonal invertida\n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: diagonal invertida\n";
			    }

                cout << "________________________________________\n";
                cout<<"8) funcion de este escape de salida (r)\n";               
                if(p1.r8==a[1]){
		    	cout<<"correcto \n";
		    	cout<<"retono de linea\n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: retono de linea\n";
			    }
			    
			    cout << "________________________________________\n ";
                cout<<"9) funcion de este escape de salida (OOO)\n ";               
                if(p1.r9==a[4]){
		    	cout<<"correcto \n";
		    	cout<<"ninguno de los anteriores\n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: ninguno de los anteriores\n";
			    }

                cout << "________________________________________\n";
                cout<<"10) cual es el operador de modulo en cpp\n";             
                if(p1.r10==a[3]){
		    	cout<<"correcto \n";
		    	cout<<"%\n";
		    	point=point+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: %\n";
			    }
				
				
				system("pause");
				
				
				
				//parcial 2
                system("cls");
				} else if(rp==2){
				cout<<"                     Reportes        \n\n";
                cout<<"Sus resultados del parcial #2 son los siguientes. \n\n\n ";
                cout<<"Puntos obtenidos: "<<point2<<"/10. \n ";
                cout<<"Calificacion: "<<promedioF2<<endl;
                //Nota en letra
                if(promedioF2>=91 and promedioF2<=100){
			    	cout<<"Nota A \n";
				} else if(promedioF2>=81 and promedioF2<=90){
					cout<<"Nota B \n";
				} else if(promedioF2>=71 and promedioF2<=80){
					cout<<"Nota C \n";
				} else if(promedioF2>=61 and promedioF2<=70){
					cout<<"Nota D \n";
				} else if(promedioF2<60){
					cout<<"Nota F \n";
				}
				
				
				
				cout<<"1) Para definir un array hay que definir \n";
                if(p2.r1==a[4]){
		    	cout<<"correcto \n";
		    	cout<<"todas las anteriores\n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: todas las anteriores\n";
			    }
                
                
                cout << "________________________________________\n";
                cout<<"2) donde comienza un indice?\n";; 
                if(p2.r2==a[0]){
		    	cout<<"correcto \n";
		    	cout<<"0\n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: 0\n";
			    }                
                
                cout << "________________________________________\n";                
                cout<<"3)Las estructuras de datos nos permiten\n";
                if(p2.r3==a[2]){
		    	cout<<"correcto \n";
		    	cout<<"resolver un problema de manera más sencilla \n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
                cout<<"La respuesta correcta es: resolver un problema de manera más sencilla \n";
			    }                
                
                cout << "________________________________________\n";              
                cout<<"4)La asignación de estructuras solo está permitida entre \n";
                if(p2.r4==a[1]){
		    	cout<<"correcto \n";
		    	cout<<"objetos del mismo tipo de estructuras\n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: objetos del mismo tipo de estructuras\n";
			    }                
                
                cout << "________________________________________\n";                
                cout<<"5) Los punteros en c++ sirven para \n";               
                 if(p2.r5==a[0]){
		    	cout<<"correcto \n";
		        cout<<"señalar objetos\n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: señalar objetos\n";
			    }               

                cout << "________________________________________\n";
                cout<<"6) como se declaran los punteros con respeto a los demas objetos\n";                
                if(p2.r6==a[4]){
		    	cout<<"correcto \n";
		    	cout<<"ninguna de las anteriores\n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: ninguna de las anteriores\n";
			    }              
                
                cout << "________________________________________\n";
                cout<<"7) cuales son los operadores aridmeticos?\n";               
                if(p2.r7==a[3]){
		    	cout<<"correcto \n";
		    	cout<<"todos los anteriores\n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
                cout<<"La respuesta correcta es: todos los anteriores\n";			    
			    }                
                
                cout << "________________________________________\n";
                cout<<"8) que es una funcion en c++\n";               
                if(p2.r8==a[1]){
		    	cout<<"correcto \n";
		    	cout<<"conjunto de instrucciones en forma de códigos \n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La respuesta correcta es: conjunto de instrucciones en forma de códigos \n";
			    }               
                
                cout << "________________________________________\n";
                cout<<"9) cual es la funcion del operador #\n";                    
                if(p2.r9==a[2]){
		    	cout<<"correcto \n";
		    	cout<<"dar ordenes o directivas\n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
			    cout<<"La repspuesta correcta es: dar ordenes o directivas\n";
			    }               
                
                cout << "________________________________________\n";               
                cout<<"10) funcion del operador &\n";              
                if(p2.r10==a[1]){
		    	cout<<"correcto \n";
                cout<<"devuelve la dirección de memoria del operando\n";
		    	point2=point2+1;
			    } else{
			    cout<<"incorrecto \n";
                cout<<"La respuesta correcta es: devuelve la dirección de memoria del operando\n";
			    }
				
				system("pause");
					
				}else if(rp==3){
				cout<<"Su nota final\n";
				cout<<"parcial 1: "<<promedioF<<endl;
				cout<<"parcial 2: "<<promedioF2<<endl;
				cout<<"TOTAL: "<<(promedioF+promedioF2)/2<<endl;
				system("pause");
				}
                break;
            case 4:
                cout<<"Salir";
                break;
            default:
            	cout<<"Opci\242n no v\240lida.";
            }
        } while ( opcion != 4 );
	return 0;	
}

	
	


