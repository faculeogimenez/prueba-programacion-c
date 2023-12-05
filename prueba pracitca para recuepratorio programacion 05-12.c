#include <stdio.h>
#include <stdlib.h> // ok
#include <string.h>

/*Desarrollar un programa en C que permita cargar un relevamiento de datos relacionados a los estudios cursados del personal de una empresa que tiene 500 empleados.
Los datos se almacenaran en un vector, según nivel educativo:
    • S = secundario
    • T = terciario
    • U = universitario 
Se pide resolver utilizando:
    1) Función para cargar el vector.
    2) Función que muestre el vector.
    3) Función que retorne porcentaje de empleados según estudios cursados.
    4) Función que reciba por parámetro el porcentaje de empleados según estudios cursados, y retorne cual es el nivel educativo de la mayoría de los estudiantes*/

int maximo_personal=500;
char vector_personall [500];
//prototipo funciones
void cargar_vector (char vector_personal[], char secundario, char terciario, char universitario);
void mostrar_vector (char vector_personal[]);
void porcentaje_segun_estudios (char vector_personal[],int *secundario_cantidad, int *terciario_cantidad, int *universitario_cantidad, int *porc_secundario, int *porc_terciario, int *porc_universitario );
void mayor_nivel_educativo (int *porc_secundario, int *porc_terciario, int *porc_universitario, int mayor_nivel);


int main () {

char vector_personal[500];
char secundario, terciario, universitario;
int secundario_cantidad, terciario_cantidad, universitario_cantidad,porc_secundario,porc_terciario,porc_universitario, mayor_nivel, secundario_cantidad, terciario_cantidad, universitario_cantidas;

//invocaciones de las funciones 


cargar_vector (vector_personal,secundario,terciario, universitario);
mostrar_vector (vector_personal);
porcentaje_segun_estudios (vector_personal, *secundario_cantidad,*terciario_cantidad,*universitario_cantidad, *porc_secundario,*porc_terciario, *porc_universitario );
mayor_nivel_educativo (*porc_secundario,*porc_terciario,*porc_universitario,mayor_nivel);

 
return 0;


}

//desarrollo de funciones

// 1) Función para cargar el vector.

void cargar_vector (char vector_personal[], char secundario, char terciario, char universitario); {

 do {
        int i;
            for (i=0;i<maximo_personal;i++) {
            printf ("ingrese el nivel educaion del alumno siendo s para secundario, t para tercierio y u para                 univseritario");
            scanf ("%c", &vector_personal[i]);
}

        while (vector_personal[]i==s && vector_personal[i]==t && vector_personal[i]==u);
                if (vector_personal[]i!=s && vector_personal[i]!=t && vector_personal[i]!=u); {
                  printf ("el nivel educativo ingresado es incorrecto ingreselo nuevamente");
                     scanf ("%c", &vector_personal[i]);

     }
    }
  }

// 2) Función que muestre el vector.

void mostrar_vector (char vector_personal[]); {
    int i;       
    for (i=0;i<maximo_personal;i++) {
           
            printf  ("%c", vector_personal[i]);
      
}

 //3) Función que retorne porcentaje de empleados según estudios cursados.

void porcentaje_segun_estudios (char vector_personal[], int *secundario_cantidad,int *terciario_cantidad, int *universitario_cantidad,int *porc_secundario,int *porc_terciario,int*porc_universitario ); {

    if (vector_personal[i]==s) {
      *secundario_cantidad++;
        } 
     if (vector_personal[i]==t) {
      *terciario_cantidad++;
        } 
     if (vector_personal[i]==u) {
      *universitario_cantidad++;
        } 


        *porc_secundario=*secundario*100/maxima_personal;
        *porc_terciario=*terciario*100/maxima_personal;
        *porc_universitario=*universitario*100/maxima_personal;
            printf ("el porcetante de empleados con nievel secundario es de % /n %d",*porc_secundario);
             printf ("el porcetante de empleados con nievel terciario es de % /n %d",*porc_terciario);
                printf ("el porcetante de empleados con nievel universitario es de % /n %d",*porc_universitario);
            
}

/* 4) Función que reciba por parámetro el porcentaje de empleados según estudios cursados, y retorne cual es el nivel educativo de la mayoría de los estudiantes*/


void mayor_nivel_educativo (int *porc_secundario, int*porc_terciario, int *porc_universitario, int mayor_nivel); {
    if (porc_secundario>porc_terciario && porc_secundario>porc_universitario) {
         mayor_nivel=*porc_secundario
          printf ("el mayor nivel educativo es el nivel secundario");
    }
        
    if (porc_terciario>porc_secundario && porc_terciario>porc_universitario) {
        mayor_nivel=*porc_terciario;
         printf ("el mayor nivel educattivo es el nivel terciario");
   }
    

    if (porc_universitario>porc_secundario && porc_universitario<porc_terciario) {
      mayor_nivel=*porc_universitario;
        printf ("el mayor nivel educativo es el nivel universitario");
   }

}



//EJERCICIO 2

/*Desarrollar un programa en C que permita cargar los datos de los pacientes atendidos en la guardia de un Sanatorio. 
Por cada paciente atendido se ingresa la obra social (IOMA, PAMI, sin obra social). Por cada atención se factura:

    • IOMA = costo de consulta $1500
    • PAMI = costo de consulta $1000
    • Sin obra social = costo de consulta $3000

Se pide resolver utilizando:
    1) Función para cargar el vector.
    2) Función que muestre el vector.
    3) Función que retorne total facturado por obra social.
    4) Función que tome por parámetro el total facturado por obra social y retorne cual es la obra social que más facturo.

*/



#include <stadio.h> 
#include <stdlib.h>
#include <string.h>

//PROTOTIṔOS DE FUNCIONES

int pami=1000;
int ioma=1500;
int sin_os=3000;

void carga_vector (char vector_pacientes, char ioma, char pami, char particular);
void mostrar_vector (char vector_pacientes);
void total_factura_os(char vector_pacientes , char ioma, char pami, char particular , int *total_pami,int *total_ioma, int *total_particular, int *total_facturado_pami, int *total_facturado_ioma, int *total_facturado_particular);
void mayor_facturado_os(int *total_facturado_pami, int *total_facturado_ioma, int *total_facturado_particular);

int main {

char vector_pacientes[50];
char ioma, pami, particular;
int total_facturado_pami,total_facturado_ioma,total_facturado_particular,total_pami,total_ioma, total_particular;

//INVOCACION DE FUNCIONES

carga_vector (vector_pacientes, ioma, pami, particualar);
mostrar_vector (vector_pacientes);
total_factura_os (vector_pacientes, ioma, pami, particular, total_pami, total_ioma, total_particular, total_facturado_pami, total_facturado_ioma,total_facturado_particular);
total_factura_os (vector_pacientes ,ioma,pami, particular ,total_pami,total_ioma, total_particular, total_facturado_pami, total_facturado_ioma,total_facturado_particular);
mayor_facturado_os (total_facturado_pami, total_facturado_ioma, total_facturado_particular);

       
return 0;
}



//DESARROLLO DE FUNCIONES 


//1) Función para cargar el vector.

void carga_vector (vector_pacientes[], char ioma, char pami, char particular); {

    int i;
 int carga_maxima=50;
 do{

 for (i=0; i<carga_maxima; i++){
       printf ("ingrese la cobertura medica del pacientes siendo pami, ioma o particular")
        scanf("%c",&vector_pacientes);
    }


} while (vector_pacientes[i]==ioma && vector_pacientes[i]==pami && vector_pacientes[i]==particular );
     if (vector_pacientes[i]!=ioma && vector_pacientes[i]!=pami && vector_pacientes[i]!=particular) {
        
        printf ("usted ingreso una cobertura no valida, inhgresela nuevamente")
          scanf ("%c",&vector_pacientes[i]);
     }
  
}

//2) Función que muestre el vector.


void mostrar_vector (char vector_pacientes[]) {
    
   int 1;
   int carga_maxima=50;
    
    for (i=0;i<carga_maxima;i++) {
         scanf("%c",&vector_pacientes[i])
        }    

}

//3) Función que retorne total facturado por obra social.

void total_factura_os (char vector_pacientes , char ioma, char pami, char particular , int *total_pami,int *total_ioma, int *total_particular, int *total_facturado_pami, int *total_facturado_ioma, int *total_facturado_particular) {

        if (vector_pacientes[i]==pami){
            *total_pami++
             *total_facturado_pami=*total_pami*pami;
             }

        if (vector_pacientes[i]==ioma){
            *total_ioma++;
                *total_facturado_ioma=*total_ioma*ioma;
        }
        
        if (vector_pacientes[i]==particular) {
               *total_particular++;
            *total_facturado_particular=*total_particular*sin_os;
             
           }

        printf ("el total facturado por pami fue de /n $ %d",*total_facturado_pami);
        printf ("el total facturado por ioma fue de /n $ %d",*total_facturado_ioma);
        printf ("el total facturado para pacientes sin obra social fue de /n $ %d",*total_facturado_particular);

}

//4) Función que tome por parámetro el total facturado por obra social y retorne cual es la obra social que más facturo.


void mayor_facturado_os(int *total_facturado_pami, int *total_facturado_ioma, int *total_facturado_particular) {
    
      if (*total_facturado_ioma>*total_facturado_pami && *total_facturado_ioma > *total_facturado_particular) {
            printf ("la obra social que mayuor facturo fue ioma")
       }
       
      if (*total_facturado_pami>*total_facturado_ioma && *total_facturado_pami>*total_facturado_particular) {
             printf ("la obra social que mayor facturo es /n es PAMI "); }

       if (*total_facturado_particular>*total_facturado_ioma && *total_facturado_particular>*total_facturado_pami) {
               printf("la mayor facturacion se realizo para pacientes sin obra social /n");}


}


/*Desarrollar un programa en C que permita cargar los datos de las ventas realizadas en un comercio. 

Las ventas van a estar almacenadas en un vector, teniendo en cuenta la forma de pago:

    • Efectivo: se le aplica un descuento del 10% sobre el total de la venta 
    • Tarjeta: se le aplica 15% de interés sobre el total de la venta.

Se pide resolver utilizando:
    1) Función para cargar el vector.
    2) Función que muestre el vector.
    3) Función que retorne el promedio de ventas.
    4) Función que tome por parámetro el promedio de ventas y retorne cuantos días se superó el promedio de ventas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int carga_maxima=50;
int *cantidad_clientes;
//prototipo funciones

void carga_vector (char vector_forma_pago[],int vector_monto[], char efectivo, char tarjeta, int *cantidad_clientes);
void mostrar_vector (char vector_forma_pago[], int vector_monto[]); 
void promedio_ventas (int vector_monto[], int *promedio , int monto_total_ventas, int *cantidad_clientes);
void supera_ventas (int *promedio, int *dias_superados, int vector_monto []);

int main (){


//invocacion funciones

carga_vector (vector_forma_pago,vector_monto, efectivo, tarjeta, monto_compra, cantidad_clientes);
mostrar_vector (vector_forma_pago, vector_monto);
promedio_ventas (vector_monto, *promedio , monto_total_ventas,*cantidad_clientes);
supera_ventas (promedio, dias_superados ,vector_monto [])
return 0;
}



//desarrollo de funciones

//1) Función para cargar el vector.

void carga_vector (char vector_forma_pago[],int vector_monto[], char efectivo, char tarjeta, int monto_compra, int *cantidad_clientes) {
   int i; 
    cantidad_clientes=0;
    
    for (i=0;i<carga_maxima;i++){
        printf ("ingrese el monto de la compra");
        scanf ("%d",&vector_monto[i]);
            printf ("indique si la compra fue abonada con tarjeta o en efectivo");
                scanf ("%c",&vector_forma_pago);
                *cantidad_clientes++; }
   
   
   }


 //2) Función que muestre el vector.

void mostrar_vector (char vector_forma_pago[], int vector_monto[]) {
     int i;

        for (i=0;i<carga_maxima;i++){
           printf ("la compra de monto /n ");
            printf ("%d", vecltor_monto[i]);
                printf ("el medio de pago utilizado fue");
                    printf ("%c", vector_forma_pago);
        }
   }


//  3) Función que retorne el promedio de ventas.


void promedio_ventas (int vector_monto, int *promedio , int monto_total_ventas, int *cantidad_clientes){
  
        *monto_total_ventas=vector_monto[];
            *promedio=monto_total_ventas / *cantidad_clientes;
                printf ("el promedio de las ventas realizadas es $ /n %d", *promedio);
                
            }





//4) Función que tome por parámetro el promedio de ventas y retorne cuantos días se superó el promedio de ventas.

void supera_ventas (int *promedio, int *dias_superados, int vector_monto []) {
       
        if (vector_monto[i] < *promedio) {
           *dias_superados++;
            }
            printf ("la cantidad de dias en los que la venta supero el promedio fue de %d", *dias_superados);


}




/*Una empresa de turismo tiene un listado de reservas realizadas para el próximo fin de semana
largo a tres destinos turísticos diferentes, junto con la cantidad de pasajeros por reserva.

Los datos se almacenaran en dos vectores.

1) En el vector_1 se almacenara el número correspondiente al destino turístico de cada
   reserva (C= Cataratas B= Bariloche G= Gualeguaychu)

2) En el vector_2 se almacenara la cantidad de pasajeros para cada reserva.

Se desconoce la cantidad de reservas realizadas, los vectores tendrán como máximo 100
elementos.
Desarrollar un programa en C que implemente funciones para:
1. Cargar los dos vectores.
2. Función que retorne cantidad de reservas por destino turístico.
3. Función que retorne cual es el destino turístico con mayor cantidad de pasajeros.
4. Función que muestre un listado de reservas indicando para cada reserva el destino turístico,
cantidad de pasajeros e importe a pagar. El importe se calcula en base a la cantidad de
pasajeros:

a. Cataratas - costo por pasajero $139.000
b. Bariloche - costo por pasajero $245.000
c. Gualeguaychu - costo por pasajero $120.000

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cataratas=139000;
int bariloche=245000;
int galeyguaychu=120000;



//prototipo de funciones
void carga_vector (char vector_destino [],int  vector_pasajeros []);
void reservas_por_destino(char vector_destino[], int *reservas_cata, int *reservas_barilo, int *reservas_guale);
void mayor_destino (int *reservas_cata, int *reservas_barilo, int *reservas_guale);
void detalle_reservas (char vector_destino, int vector_pasajeros, int *reservas_cata, int *reservas_barilo, int *reservas_guale, int *valor_cata, int *valor_barilo, int *valor_guale);


//funcion principal 

int main () {

char vector_destino[100];
int vector_pasajeros [100];
int reservas_cata, reservas_barilo, reservas_guale, valor_barilo, valor_cata, valor_guale;

//invocacion de funcion

carga_vector(vector_destino,vector_pasajeros);
reservas_por_destino(vector_destino[],*reservas_cata, *reservas_barilo, *reservas_guale);
mayor_destino (*reservas_cata, *reservas_barilo, *reservas_guale);
detalle_reservas (vector_destino,vector_pasajeros, *reservas_cata, *reservas_barilo, *reservas_guale, *valor_cata, *valor_barilo, *valor_guale)


return 0;
}
 

//desarrollo funciones

//1. Cargar los dos vectores.

void carga_vector (char vector_destino [], int vector_pasajeros[]); {
       
        int i;
        int carga_maxima=101

for (i=0;i<carga_maxima;i++){
        printf ("ingrese el numero de pasajeros");
        scanf ("%d",&vector_pasajeros[i]);
         printf ("ingrese el destino del pasajero siendo c para cataratas b para bariloche y g para gualeyguaychu");
        scanf("%c", &vector_destino[i]);
       }
}


//2. Función que retorne cantidad de reservas por destino turístico.

void reservas_por_destino(char vector_destino[], int *reservas_cata, int *reservas_barilo, int *reservas_guale); {
  
   if (vector_destino[i]==c) {
       *reservas_cata++;}
    if (vector_destino[i]==b) {
       *reservas_barilo++;}
    if (vector_destino[i]==g){
        *reservas_cata++}

printf ("el total de reservas para cataratas es de /n %d",*reservas_cata);
printf ("el total de las reservas para bariloche es de /n %d", *reservas_barilo);
printf ("el total de las reservas para gualeyguaychu es de /n %d",*reservas_guale);

}


//3. Función que retorne cual es el destino turístico con mayor cantidad de pasajeros.

void mayor_destino(int *reservas_cata , int *reservas_barilo, int *reservas_guale) {

        if (*reservas_cata > *reservas_barilo && *reservas_cata > *reservas_guale){
            printf ("el destino con mayor cantidad de pasajeros es cataratas");
        }        
        if (*reservas_barilo > *reseras_cata && *reservas_barilo > *reservas_guale){
           printf ("el destino con mayor cantidad de pasajeros es bariloche");
        }
        if (*reservas_guale > *reseras_cata && *reservas_guale > *reservas_barilo){
           printf ("el destino con mayor cantidad de reservas es gualeyguaychu")
        }
   }

/*4. Función que muestre un listado de reservas indicando para cada reserva el destino turístico,
cantidad de pasajeros e importe a pagar. El importe se calcula en base a la cantidad de
pasajeros:
*/

void detalle_reservas (char vector_destino, int vector_pasajeros, int *reservas_cata, int *reservas_barilo, int *reservas_guale, int *valor_cata, int *valor_barilo, int *valor_guale) {

    printf ("el detalle de reservas y destino es el siguiente /n");
 
             int i;
        int carga_maxima=101

for (i=0;i<carga_maxima;i++){
        printf ("pasajeros");
        printf ("%d",vector_pasajeros[i]);
         printf ("destino");
        scanf("%c", vector_destino[i]);
       }

printf ("con un total por destino de pasajeros");
    printf ("cataratas /n %d",*reservas_cata);
    printf ("bariloche  /n  %d", *reservas_cata);
    printf ("gualeyguaychu  /n %d", *reservas_guale);

printf ("el importe a abonar de cada destino es /n");

   *valor_cata=*reservas_cata*cataratas;
   *valor_barilo=*reservas_barilo*bariloche;
   *valor_guale=*reservas_guale*gualeyguaychu;

printf ("destino cataratas /n $ %d", *valor_cata);
printf ("destino bariloche /n $ %d", *valor_barilo);
printf ("destino gualeyguaychu  /n  $  %d", *reservas_guale);
    
    }  


/*En un Supermercado mayorista se quiere otorgar un bono de descuento a los primeros N clientes
que han realizado compras durante el mes de noviembre.
Los datos se almacenaran en dos vectores.

1) En el vector_1 se almacenara la categoría del cliente (I= Inscripto N= No Inscripto)
2) En el vector_2 se almacenara el importe de la compra.

Los vectores tendrán como máximo 100 elementos.


Desarrollar un programa en C que implemente funciones para:

1. Cargar los dos vectores.
2. Mostrar los dos vectores.
3. Función que retorne porcentaje de clientes según categoría.
4. Función que retorne cual categoría de clientes realizo la mayor cantidad de compras.
5. Función que muestre un listado de compras realizadas por clientes de categoría Inscriptos
indicando para cada una el numero de cliente y el importe de compra. Mostrar además cual
fue el importe promedio de compras realizadas y cuantas compras superan el mismo.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int carga_maxima=100;

//prototipo de funcion

void carga_vector (char vector_categoria_cliente[], int vector_importe_compra [], int *cantidad_clientes_registrados, int *cantidad_no_inscriptos, int *cantidad_inscriptos);
void mostrar_vector (char vector_categoria_cliente [], int vector_importe_compra[]);
void porcentaje_categoria (char vector_categoria_cliente[], int *cantidad_clientes_registrados, float *porcentaje_inscriptos, float *porcentaje_no_inscriptos, int *cantidad_inscriptos, int *cantidad_no_inscriptos, int *cantidad_no_inscritos, int *cantidad_inscriptos);
void categoria_mas_compro (int *cantidad_inscriptos, int *cantidad_no_inscriptos)
//funcion princpal 

int main (){ 
char vector_categoria_cliente [2];
int vector_importe_compra [100];
int cantidad_clientes_registrados;

carga_vector (vector_categoria_cliente, vector_importe_compra *cantidad_clientes_registrados, *cantidad_no_inscriptos, *cantidad_inscriptos);
mostrar_vector (vector_categoria_cliente, vector_importe_compra);
porcentaje_categoria (vector_categoria_cliente, *cantidad_clientes_registrados, *porcentaje_inscriptos, *porcentaje_no_inscriptos,*cantidad_inscriptos,*cantidad_no_inscriptos, *cantidad_no_inscritos, *cantidad_inscriptos);
categoria_mas_compro ( *cantidad_inscriptos, *cantidad_no_inscriptos)


return 0;}



//desarrollo de funciones

void cargar_vector (char vector_categoria_cliente [], int vector_importe_compra, int *cantidad_clientes_registrados, int *cantidad_no_inscriptos, int *cantidad_inscriptos): {
 int i;
       for (i=0;i<carga_maxima;i++){
        printf ("ingrese la categoria del cliente siendo i para inscripto y n para no inscripto");
        scanf ("%c",&vector_categoria_cliente [i]);
        printf ("ingrese el montode la compra ");
        scanf ("%d",&vector_importe_compra[i]);
        *cantidad_clientes_registrados++;
            if (vector_categoria_cliente[i]==inscripto){
                *cantidad_inscriptos++;
            }
            if (vector_categoria_cliente[i]==no inscripto){
                *cantidad_no_inscripto++;
            }
}

}

//2. Mostrar los dos vectores.

void mostrar_vector (char vector_categoria_cliente[], int vector_importe_compra[]); {

    int i;
    for (i=0; i<carga_maxima;i++){
        printf ("%c",vector_categoria_cliente[i]);
        printf ("%d", vector_importe_compra[i]);
    }
}

//3. Función que retorne porcentaje de clientes según categoría

void porcentaje_categoria (char vector_categoria_cliente[], int *cantidad_clientes_registrados, float *porcentaje_inscriptos, float *porcentaje_no_inscriptos, int *cantidad_inscriptos, int *cantidad_no_inscriptos, int *cantidad_no_inscritos, int *cantidad_inscriptos); {
    
    *porcentaje_inscriptos=*cantidad_inscrptos*100/ *cantidad_clientes_registrados;
    *porcentaje_no_inscriptos=*cantidad_no_inscriptos*100/ *cantidad_clientes_registrados;
    printf ("el porcentaje de clientes no inscriptos es de % /n %f",*porcentaje_no_inscriptos);
    printf ("el porcentaje de clientes inscriptos es de % /n %f", *porcentaje_inscriptos);

    
}

//4. Función que retorne cual categoría de clientes realizo la mayor cantidad de compras.

void categoria_mas_compro (int *cantidad_inscriptos, int *cantidad_no_inscriptos){
    if (*cantidad_no_inscriptos > *cantidad_inscriptos){
        printf ("la categoria que mayor cantidad de operacion realizo por NO INSCRIPTO  /n");

    }
    else {
        printf ("la categoria que mas compras realizo en INSCRIPTO");
    }
}

/*5. Función que muestre un listado de compras realizadas por clientes de categoría Inscriptos
indicando para cada una el numero de cliente y el importe de compra. Mostrar además cual
fue el importe promedio de compras realizadas y cuantas compras superan el mismo.
*/

void compras_inscriptos () {
    
}

//Ejercicio 2

/*
En una empresa familiar se quiere otorgar a los empleados que no hayan tenido inasistencias
durante el mes de Octubre un bono especial.

Los datos se almacenaran en dos vectores.
 En el vector_1 se almacenara el sueldo de cada empleado
 En el vector_2 se almacenara la asistencias 
(N=sin inasistencias; S=tuvo inasistencias).

La empresa cuenta con un total de 75 empleados.

Desarrollar un programa en C que implemente funciones para:

1.Cargar los dos vectores.
2. Mostrar los dos vectores.
3. Función que retorne cantidad de empleados que no percibirán el bono.
4. Función que muestre un listado con el número de empleado e importe correspondiente al
bono que percibirá. El bono se calcula en base al sueldo:
Sueldo menor o igual a $500.000  se abonara un bono del 15%
Sueldo mayor a $500.000  se abonara un bono del 10%

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int carga_maxima =76;

//prototipo de funciones
void carga_vectores (char vector_asistencias[], int vector_sueldo[], int vector_empleado_bono[]);
void mostrar_vector (char vector_asistencias[], int vector_sueldo[]);
void empleados_sin_bono (char vector_asistencias[], int empleados_ausentes);
void  empleados_bono(int vector_sueldo[],char vector_asistencias[],int vector_empleado_bono[] int *empleados_presentes, int *sueldo_mayor, int *sueldo_menor);

//funcion principal 

int main () {

char vector_asistencias[2];
int vector_sueldo [75];
int vector_empleado_bono [75];

//invocacion de funcion

carga_vectores (vector_asistencias,vector_sueldo, vector_empleado_bono);
mostrar_vector (vector_asistencias,vector_sueldo);
empleados_sin_bono(vector_asistencias, empleados_ausentes);
empleados_bono( vector_sueldo[],vector_asistencias[],vector_empleado_bono, *empleados_presentes,*sueldo_mayor,*sueldo_menor);

    return 0;
}



//desarollo de funciones 


//1.Cargar los dos vectores.

void carga_vectores (char vector_asistencias[], int vector_sueldo[], int vector_empleado_bono);
{
    int i;

    for (i=0;i<carga_maxima;i++){
void  empleados_bono(int vector_sueldo[],char vector_asistencias[], int *empleados_presentes, int *sueldo_mayor, int *sueldo_menor);
        printf ("ingrese si el empleado a tenido inasistencias siendo s para si y n para no");
        scanf ("%c", &vector_asistencias[i]);
        printf ("ingrese el sueldo del emepleado");
        scanf ("%d",&vector_sueldo[i]);
        if (vector_asistencias[i]==n){
            scanf("%d",&vector_empleado_bono[i]);
        }
    }
}

//2. Mostrar los dos vectores.

void mostrar_vector (char vector_asistencias[], int vector_sueldo[],int *empleados_presentes);{
    int i;

    for (i=0;i<carga_maxima;i++){
        printf ("asistencia de los empleados ");
        printf ("%c", vector_asistencias[i]);
        printf ("sueldo de los empleados ");
        printf ("%d",vector_sueldo[i]);
          if (vector_asistencias[i]==n){
            *empleado_presentes++;
          }
        }
}

//3. Función que retorne cantidad de empleados que no percibirán el bono.

void empleados_sin_bono (char vector_asistencia[], int empleados_ausentes);{
    if (vector_asistencia[i]==s){
        empleados_ausentes++;
        
    }
    printf ("los empleados que no percibiran el bono debido a poseer inasistencias seran /n %d",empleados_ausentes);
}void empleados_sin_bono (char vector_asistencia[], int empleados_ausentes);

/*Función que muestre un listado con el número de empleado el
 importe correspondiente al bono que percibirá. 
El bono se calcula en base al sueldo:
Sueldo menor o igual a $500.000  se abonara un bono del 15%
Sueldo mayor a $500.000  se abonara un bono del 10% .*/

void  empleados_bono(int vector_sueldo[],char vector_asistencias[],int vector_empleado_bono[] int *empleados_presentes, int *sueldo_mayor, int *sueldo_menor);{
    int i;
    if (vector_asistenias[i]==n) {
        for (i=0;i<carga_maxima;i++){
            printf("empleado");
            printf ("%d",vector_empleado_bono[i] );
            if (vector_sueldo[i]<==500000){
                *sueldo_menor=vector_sueldo[i]*1.15;
                printf("el sueldo a cobrar con un bono del 15% es de /n $ %d",*sueldo_menor);
            }
            if (vector_sueldo[i]>500000){
                *sueldo_mayor=vector_sueldo[i]*1.10;
                printf("el sueldo a cobrar con un bono del 10% es de /n $ %d",*suedldo_mayor);
            }
        }
    }
}

