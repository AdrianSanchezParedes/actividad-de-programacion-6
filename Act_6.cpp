/***********************************presentacion******************************
integrantes: Adrian Sanchez Paredes
Victor Eduardo Macias Macias
Fecha: 21/02/2022
programa: Actividad de programacion 6.
Centro Universitario de los Altos/ UNIVERSIDAD DE GUADALAJARA/ INGENIRÍA EN COMPUTACIÓN/ 2DO SEMESTRE
Profesor: Sergio Franco Casillas
*****************************************************************************/
#include <iostream>
using namespace std;
int m1[10][10], m2[10][10],i, e, z, q, p,r,resultado[10][10];
//proto funciones
void muestra1()
{
    for(i=0;i<p;i++)
    {
        for(e=0;e<p;e++)
        {
            cout<<"|";
            cout<<m1[i][e];
        }
        cout<<"| \n";
    }
}
void muestra2()
{
for(i=0;i<p;i++)
    {
        for(e=0;e<p;e++)
        {
            cout<<"|";
            cout<<m2[i][e];
        }
        cout<<"|";
        cout<<"\n";
    }
}//fin void
void alerta()
{
if(p>10)
    {
      cout<<"\n********** PRECAUCION **********\n \t modifica grado del 1 al 10 para buen funcionamiento \n";
    }
}//fin void
//inicio
int main()
{
    system("cls");
    cout<<"Escibe el grado de las matrices: ";
    cin>>p;
    alerta();
    //cuerpo
    inicio:
    cout<<"\n Bievenido, \n 1:agregar elementos \n 2: borrar matriz \n 3: ver las matrices \n 4: numeros random \n 5: operaciones con matrices \n 6: modificar el grado de las matrices \n 7: salir\n";
    cin>>z;
    switch(z)
    {
        case 1:
        //almacenanco elementos
cout<<"digite elementos de matriz 1: \n";
    for(i=0;i<p;i++)//m1
    {
        for(e=0;e<p;e++)
        {
            cout<<"digite: <<["<<i<<"]<<["<<e<<"]: ";
            cin>>m1[i][e];
        }
    }
    muestra1();
    //m2
    cout<<"digite elementos de matriz 2: \n";
for(i=0;i<p;i++)
    {
        for(e=0;e<p;e++)
        {
            cout<<"digite: <<["<<i<<"]<<["<<e<<"]: ";
            cin>>m2[i][e];
        }
    }
    muestra2();
    goto inicio;
        break;
    //fin case 1
    //eliminar matriz
    case 2:
    cout<<"1 o 2";
    cin>>z;
    if (z == 1)//eliminar m1
    {
     for(i=0;i<p;i++)
    {
        for(e=0;e<p;e++)
        {
            cout<<"digite: <<["<<i<<"]<<["<<e<<"]: ";
            m1[i][e]=0;
        }
    }
    }
    else if(z==2)//eliminar m2
    {
for(i=0;i<p;i++)
    {
        for(e=0;e<p;e++)
        {
            cout<<"digite: <<["<<i<<"]<<["<<e<<"]: ";
            m2[i][e]=0;
        }
    }
    }
    
    goto inicio;
    break;

    //enseñar
    case 3:
    muestra1();
cout<<"\n";
    muestra2();
    goto inicio;
    break;

    //aleatorio
    case 4:
    srand((unsigned) time(0));
    cout<<"matriz 1 o 2?: ";
    cin>>z;
    if (z==1)
    {
        for(i= 0; i < p; i++)
    {
        for(e=0; e< p; e++)
    {
        m1[i][e] = 100 + rand() % 100;
    }
    }
    muestra1();
    }//fin
    
    else if (z==2)
    {
        for(i= 0; i < p; i++)
    {
        for(e=0; e< p; e++)
    {
        m2[i][e] = 100 + rand() % 100;
    }
    }
    muestra2();
    }//fin
    goto inicio;
    break;
    //fin case 4
    case 5:
    cout<<"para sumar: 1 \n para restar: 2 \n para multiplicar: 3 \n para dividir: 4\n";
    cin>>r;
    if(r==1)//sumar
    {
    for(i=0;i<p;i++)
    {
        for(e=0;e<p;e++)
        {
            cout<<"|"<<m1[i][e] + m2[i][e];
        }
        cout<<"| \n";
    }
    goto inicio;
    }
    else if(r==2)//restar
    {
        for(i=0;i<p;i++)
    {
        for(e=0;e<p;e++)
        {
            cout<<"|"<<m1[i][e] - m2[i][e];
        }
        cout<<"| \n";
    }
    goto inicio;
    }
    else if(r==3)//multiplicar
    {
       for(i=0;i<p;i++)
       {
           for(e=0;e<p;e++)
           {
               resultado[i][e] = 0;
               for(r=0;r<p;r++)
               {
                   resultado[i][e]+=m1[i][r] * m2[r][e];
               }
               cout<<"|"<<resultado[i][e]<<" ";
           }
          cout<<"\n";
       }  
       goto inicio;
    }
    else if(r==4)//dividir
    {
      for(i=0;i<p;i++)
    {
        for(e=0;e<p;e++)
        {
           cout<<"|"<<float(m1[i][e]) / float (m2[i][e]);
        }
        cout<<"| \n";
    }
    goto inicio;
    }
    else
    goto inicio;
    break;
//fin case 5
case 6:
    cout<<"Escibe el grado de las matrices";//ingresar datos
    cin>>p;
    alerta();
    goto inicio;
    break;
case 7:
    abort();
    break;
default:
        cout<<"intentalo otra vez";
        goto inicio;
        break;
    }
}//fin
