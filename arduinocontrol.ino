//Código realizado por ing. Luis Eduardo Ramírez Carvajal
//Correo:luiseduardorc@ufps.edu.co
//Cel: 3153437000

//Librerias y Variables 
#include <LiquidCrystal.h>
LiquidCrystal lcd(50, 48, 46, 44, 42, 40);

//activadores
int bomba1=2; //pin 2 a bjt que activa bomba 1
int bomba2=3; //pin 3 a bjt que activa bomba 2
int bomba3=4; //pin 4 a bjt que activa bomba 3
int bomba4=5; //pin 5 a bjt que activa bomba 4
int led1=6; //pin 6 a bjt que activa led 1
int led2=7; //pin 7 a bjt que activa led 2

int botonelemento=53; //elegir elemento
int botonopcion=51; //elegir opción programar
int botononoff=49; // periodo que inicia


int botonnumero1=35;
int botonnumero2=37;
int botonnumero3=39;
int botonnumero4=41;
int botonnumero5=43;
int botonnumero6=45;

int botonactivarparar=47; //activar elemento
int botonapagar=33; //apagar elemento

//para guardar volumen de bomba 1
int unidades1=0;
int decenas1=0;
int centenas1=0;
int unidadesdemil1=0;
int decenasdemil1=0;
int centenasdemil1=0;

//para guardar volumen de bomba 2
int unidades2=0;
int decenas2=0;
int centenas2=0;
int unidadesdemil2=0;
int decenasdemil2=0;
int centenasdemil2=0;

//para guardar volumen de bomba 3
int unidades3=0;
int decenas3=0;
int centenas3=0;
int unidadesdemil3=0;
int decenasdemil3=0;
int centenasdemil3=0;

//para guardar volumen de bomba 4
int unidades4=0;
int decenas4=0;
int centenas4=0;
int unidadesdemil4=0;
int decenasdemil4=0;
int centenasdemil4=0;

//para guardar el tiempo on de bomba 1
int segundoson1=0;
int minutoson1=0;
int horason1=0;
int segundosunidadeson1=0;
int segundosdecenason1=0;
int minutosunidadeson1=0;
int minutosdecenason1=0;
int horasunidadeson1=0;
int horasdecenason1=0;

//para guardar el tiempo on de bomba 2
int segundoson2=0;
int minutoson2=0;
int horason2=0;
int segundosunidadeson2=0;
int segundosdecenason2=0;
int minutosunidadeson2=0;
int minutosdecenason2=0;
int horasunidadeson2=0;
int horasdecenason2=0;

//para guardar el tiempo on de bomba 3
int segundoson3=0;
int minutoson3=0;
int horason3=0;
int segundosunidadeson3=0;
int segundosdecenason3=0;
int minutosunidadeson3=0;
int minutosdecenason3=0;
int horasunidadeson3=0;
int horasdecenason3=0;

//para guardar el tiempo on de bomba 4
int segundoson4=0;
int minutoson4=0;
int horason4=0;
int segundosunidadeson4=0;
int segundosdecenason4=0;
int minutosunidadeson4=0;
int minutosdecenason4=0;
int horasunidadeson4=0;
int horasdecenason4=0;

//para guardar el tiempo on de led 1
int segundoson5=0;
int minutoson5=0;
int horason5=0;
int segundosunidadeson5=0;
int segundosdecenason5=0;
int minutosunidadeson5=0;
int minutosdecenason5=0;
int horasunidadeson5=0;
int horasdecenason5=0;

//para guardar el tiempo on de led 2
int segundoson6=0;
int minutoson6=0;
int horason6=0;
int segundosunidadeson6=0;
int segundosdecenason6=0;
int minutosunidadeson6=0;
int minutosdecenason6=0;
int horasunidadeson6=0;
int horasdecenason6=0;


//para guardar el tiempo off de bomba 1
int segundosoff1=0;
int minutosoff1=0;
int horasoff1=0;
int segundosunidadesoff1=0;
int segundosdecenasoff1=0;
int minutosunidadesoff1=0;
int minutosdecenasoff1=0;
int horasunidadesoff1=0;
int horasdecenasoff1=0;

//para guardar el tiempo off de bomba 2
int segundosoff2=0;
int minutosoff2=0;
int horasoff2=0;
int segundosunidadesoff2=0;
int segundosdecenasoff2=0;
int minutosunidadesoff2=0;
int minutosdecenasoff2=0;
int horasunidadesoff2=0;
int horasdecenasoff2=0;

//para guardar el tiempo off de bomba 3
int segundosoff3=0;
int minutosoff3=0;
int horasoff3=0;
int segundosunidadesoff3=0;
int segundosdecenasoff3=0;
int minutosunidadesoff3=0;
int minutosdecenasoff3=0;
int horasunidadesoff3=0;
int horasdecenasoff3=0;

//para guardar el tiempo off de bomba 4
int segundosoff4=0;
int minutosoff4=0;
int horasoff4=0;
int segundosunidadesoff4=0;
int segundosdecenasoff4=0;
int minutosunidadesoff4=0;
int minutosdecenasoff4=0;
int horasunidadesoff4=0;
int horasdecenasoff4=0;

//para guardar el tiempo off de led 1
int segundosoff5=0;
int minutosoff5=0;
int horasoff5=0;
int segundosunidadesoff5=0;
int segundosdecenasoff5=0;
int minutosunidadesoff5=0;
int minutosdecenasoff5=0;
int horasunidadesoff5=0;
int horasdecenasoff5=0;

//para guardar el tiempo off de led 2
int segundosoff6=0;
int minutosoff6=0;
int horasoff6=0;
int segundosunidadesoff6=0;
int segundosdecenasoff6=0;
int minutosunidadesoff6=0;
int minutosdecenasoff6=0;
int horasunidadesoff6=0;
int horasdecenasoff6=0;

//ciclos de elementos
int ciclos1=1;
int ciclosunidades1=1;
int ciclosdecenas1=0;
int cicloscentenas1=0;

int ciclos2=1;
int ciclosunidades2=1;
int ciclosdecenas2=0;
int cicloscentenas2=0;

int ciclos3=1;
int ciclosunidades3=1;
int ciclosdecenas3=0;
int cicloscentenas3=0;

int ciclos4=1;
int ciclosunidades4=1;
int ciclosdecenas4=0;
int cicloscentenas4=0;

int ciclos5=1;
int ciclosunidades5=1;
int ciclosdecenas5=0;
int cicloscentenas5=0;

int ciclos6=1;
int ciclosunidades6=1;
int ciclosdecenas6=0;
int cicloscentenas6=0;

unsigned long tconteomillison1=0;
unsigned long tconteomillison2=0;
unsigned long tconteomillison3=0;
unsigned long tconteomillison4=0;
unsigned long tconteomillison5=0;
unsigned long tconteomillison6=0;

unsigned long tconteomillisoff1=0;
unsigned long tconteomillisoff2=0;
unsigned long tconteomillisoff3=0;
unsigned long tconteomillisoff4=0;
unsigned long tconteomillisoff5=0;
unsigned long tconteomillisoff6=0;

unsigned long tconteoon1=0;
unsigned long tconteoon2=0;
unsigned long tconteoon3=0;
unsigned long tconteoon4=0;
unsigned long tconteoon5=0;
unsigned long tconteoon6=0;

unsigned long tconteooff1=0;
unsigned long tconteooff2=0;
unsigned long tconteooff3=0;
unsigned long tconteooff4=0;
unsigned long tconteooff5=0;
unsigned long tconteooff6=0;

unsigned long ttotalon1=0;
unsigned long ttotalon2=0;
unsigned long ttotalon3=0;
unsigned long ttotalon4=0;
unsigned long ttotalon5=0;
unsigned long ttotalon6=0;

unsigned long trestanteon1=0;
unsigned long trestanteon2=0;
unsigned long trestanteon3=0;
unsigned long trestanteon4=0;
unsigned long trestanteon5=0;
unsigned long trestanteon6=0;

unsigned long ttotaloff1=0;
unsigned long ttotaloff2=0;
unsigned long ttotaloff3=0;
unsigned long ttotaloff4=0;
unsigned long ttotaloff5=0;
unsigned long ttotaloff6=0;

unsigned long trestanteoff1=0;
unsigned long trestanteoff2=0;
unsigned long trestanteoff3=0;
unsigned long trestanteoff4=0;
unsigned long trestanteoff5=0;
unsigned long trestanteoff6=0;

int elementoelegido=1;//1=bomba1, 2=bomba2, 3=bomba3, 4=bomba4, 5=Led1, 6=Led2
int opcion=1; // 1=configurar On, 2= configurar Off, 3=configurar ciclos 
int antirebote=180; //antirebote de botones

int onoff1=1; //periodo que inicia 0=apagado, 1=encendido
int onoff2=1; //periodo que inicia 0=apagado, 1=encendido
int onoff3=1; //periodo que inicia 0=apagado, 1=encendido
int onoff4=1; //periodo que inicia 0=apagado, 1=encendido
int onoff5=1; //periodo que inicia 0=apagado, 1=encendido
int onoff6=1; //periodo que inicia 0=apagado, 1=encendido

//proceso de elementos
int procesobomba1=0; // 0 apagada, 1 on inicia, 2 off termina, 3 off inicia, 4 on termina
int procesobomba2=0; // 0 apagada, 1 on inicia, 2 off termina, 3 off inicia, 4 on termina
int procesobomba3=0; // 0 apagada, 1 on inicia, 2 off termina, 3 off inicia, 4 on termina
int procesobomba4=0; // 0 apagada, 1 on inicia, 2 off termina, 3 off inicia, 4 on termina
int procesoled1=0; //   0 apagada, 1 on inicia, 2 off termina, 3 off inicia, 4 on termina
int procesoled2=0; //   0 apagada, 1 on inicia, 2 off termina, 3 off inicia, 4 on termina 


float v1=0.0;   //Voltaje bomba 1
float v2=0.0;   //Voltaje bomba 2
float v3=0.0;   //Voltaje bomba 3
float v4=0.0;   //Voltaje bomba 4
float volumen1; //volumen a llenar por bomba 1
float volumen2; //volumen a llenar por bomba 2
float volumen3; //volumen a llenar por bomba 3
float volumen4; //volumen a llenar por bomba 4


//Configuración del sistemas
void setup() {

  tconteomillison1=millis(); //Se inicia conteo de bomba 1 con función millis
  tconteomillison2=millis(); //Se inicia conteo de bomba 2 con función millis
  tconteomillison3=millis(); //Se inicia conteo de bomba 1 con función millis  
  tconteomillison4=millis(); //Se inicia conteo de bomba 1 con función millis
  tconteomillison5=millis(); //Se inicia conteo de bomba 1 con función millis
  tconteomillison6=millis(); //Se inicia conteo de bomba 1 con función millis

  tconteomillisoff1=millis(); //Se inicia conteo de bomba 1 con función millis
  tconteomillisoff2=millis(); //Se inicia conteo de bomba 2 con función millis
  tconteomillisoff3=millis(); //Se inicia conteo de bomba 1 con función millis  
  tconteomillisoff4=millis(); //Se inicia conteo de bomba 1 con función millis
  tconteomillisoff5=millis(); //Se inicia conteo de bomba 1 con función millis
  tconteomillisoff6=millis(); //Se inicia conteo de bomba 1 con función millis
  
  pinMode(bomba1,OUTPUT);
  pinMode(bomba2,OUTPUT);
  pinMode(bomba3,OUTPUT);
  pinMode(bomba4,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);

  pinMode(botonelemento,INPUT);
  pinMode(botonopcion,INPUT);
  pinMode(botononoff,INPUT);
  pinMode(botonapagar,INPUT);
  pinMode(botonactivarparar,INPUT);

  pinMode(botonnumero1,INPUT);
  pinMode(botonnumero2,INPUT);
  pinMode(botonnumero3,INPUT);  
  pinMode(botonnumero4,INPUT);
  pinMode(botonnumero5,INPUT);
  pinMode(botonnumero6,INPUT);
        
  lcd.begin(20, 4);
  lcd.setCursor(0,1);
  lcd.print(">");

  lcd.setCursor(1,0);
  lcd.print("Bomba1");
  lcd.setCursor(8,0);
  lcd.print("Inicia:On");
  lcd.setCursor(1,1);
  lcd.print("On000000ml 00:00:00");
  lcd.setCursor(1,2);
  lcd.print("Off00:00:00");
  lcd.setCursor(1,3);
  lcd.print("Ciclos:001");
}

void loop() {
  
  if(procesobomba1==0){ //////////////////////////////////////////// calculando variables con bombas apagadas
    float vmed1=analogRead(A1)*5.0/1023.0; //se lee voltaje 
    v1=vmed1*(1752.0+2660.0)/1752.0; //se calcula voltaje en bomba
    float t1300ml=  5756.0*exp( -0.5898*v1) + 217.6*exp(-0.07186*v1); // Se calcula tiempo de llenado para 300ml con voltaje medido, Tercer intento, ecuacion exponencial con segunda caracterización 
    float volumen1=unidades1+decenas1*10.0+centenas1*100.0+unidadesdemil1*1000.0+decenasdemil1*10000.0 + centenasdemil1*100000; //Se lee volumen marcado en teclado
    ttotalon1=(volumen1*t1300ml/300.0)*0.77;
    trestanteon1=ttotalon1;
    
    //horasoff1= horasunidadesoff1+horasdecenasoff1*10;
    //minutosoff1= minutosunidadesoff1 + minutosdecenasoff1*10;
    //segundosoff1= segundosunidadesoff1 + segundosdecenasoff1*10;
    //ttotaloff1=segundosoff1 + minutosoff1*60 + horasoff1*60*60;
    
    ttotaloff1=segundosunidadesoff1 + segundosdecenasoff1*10 + minutosunidadesoff1*60 +minutosdecenasoff1*60*10 + horasunidadesoff1*60*60 + horasdecenasoff1*60*60*10;
    trestanteoff1=ttotaloff1;

    ciclos1= ciclosunidades1 + ciclosdecenas1*10 + cicloscentenas1*100;
    }

  if(procesobomba2==0){ //////////////////////////////////////////// calculando tiempo con bombas apagadas
    float vmed2=analogRead(A2)*5.0/1023.0; //se lee voltaje 
    v2=vmed2*(1752.0+2660.0)/1752.0; //se calcula voltaje en bomba
    float t2300ml=  5756.0*exp( -0.5898*v2) + 217.6*exp(-0.07186*v2); // Se calcula tiempo de llenado para 300ml con voltaje medido, Tercer intento, ecuacion exponencial con segunda caracterización 
    float volumen2=unidades2+decenas2*10.0+centenas2*100.0+unidadesdemil2*1000.0+decenasdemil2*10000.0 + centenasdemil2*100000; //Se lee volumen marcado en teclado
    ttotalon2=(volumen2*t2300ml/300.0)*0.77;
    trestanteon2=ttotalon2;

    ttotaloff2=segundosunidadesoff2 + segundosdecenasoff2*10 + minutosunidadesoff2*60 +minutosdecenasoff2*60*10 + horasunidadesoff2*60*60 + horasdecenasoff2*60*60*10;
    trestanteoff2=ttotaloff2;

    ciclos2= ciclosunidades2 + ciclosdecenas2*10 + cicloscentenas2*100;
    }

  if(procesobomba3==0){ //////////////////////////////////////////// calculando tiempo con bombas apagadas
    float vmed3=analogRead(A3)*5.0/1023.0; //se lee voltaje 
    v3=vmed3*(1752.0+2660.0)/1752.0; //se calcula voltaje en bomba
    float t3300ml=  5756.0*exp( -0.5898*v3) + 217.6*exp(-0.07186*v3); // Se calcula tiempo de llenado para 300ml con voltaje medido, Tercer intento, ecuacion exponencial con segunda caracterización 
    float volumen3=unidades3+decenas3*10.0+centenas3*100.0+unidadesdemil3*1000.0+decenasdemil3*10000.0 + centenasdemil3*100000; //Se lee volumen marcado en teclado
    ttotalon3=(volumen3*t3300ml/300.0)*0.85;
    trestanteon3=ttotalon3;

    ttotaloff3=segundosunidadesoff3 + segundosdecenasoff3*10 + minutosunidadesoff3*60 +minutosdecenasoff3*60*10 + horasunidadesoff3*60*60 + horasdecenasoff3*60*60*10;
    trestanteoff3=ttotaloff3;

    ciclos3= ciclosunidades3 + ciclosdecenas3*10 + cicloscentenas3*100;
    }

  if(procesobomba4==0){ //////////////////////////////////////////// calculando tiempo con bombas apagadas
    float vmed4=analogRead(A4)*5.0/1023.0; //se lee voltaje 
    v4=vmed4*(1752.0+2660.0)/1752.0; //se calcula voltaje en bomba
    float t4300ml=  5756.0*exp( -0.5898*v4) + 217.6*exp(-0.07186*v4); // Se calcula tiempo de llenado para 300ml con voltaje medido, Tercer intento, ecuacion exponencial con segunda caracterización 
    float volumen4=unidades4+decenas4*10.0+centenas4*100.0+unidadesdemil4*1000.0+decenasdemil4*10000.0 + centenasdemil4*100000; //Se lee volumen marcado en teclado
    ttotalon4=(volumen4*t4300ml/300.0)*0.80;
    trestanteon4=ttotalon4;

    ttotaloff4=segundosunidadesoff4 + segundosdecenasoff4*10 + minutosunidadesoff4*60 +minutosdecenasoff4*60*10 + horasunidadesoff4*60*60 + horasdecenasoff4*60*60*10;
    trestanteoff4=ttotaloff4;

    ciclos4= ciclosunidades4 + ciclosdecenas4*10 + cicloscentenas4*100;
    }
    
    /////////////////////////////////////////////////////////////Calculando el tiempo de led 1 apagado
    if(procesoled1==0){
      ttotalon5=segundosunidadeson5 + segundosdecenason5*10 + minutosunidadeson5*60 +minutosdecenason5*60*10 + horasunidadeson5*60*60 + horasdecenason5*60*60*10;
      trestanteon5=ttotalon5;
      
      ttotaloff5=segundosunidadesoff5 + segundosdecenasoff5*10 + minutosunidadesoff5*60 +minutosdecenasoff5*60*10 + horasunidadesoff5*60*60 + horasdecenasoff5*60*60*10;
      trestanteoff5=ttotaloff5;

      ciclos5= ciclosunidades5 + ciclosdecenas5*10 + cicloscentenas5*100;
      }

    /////////////////////////////////////////////////////////////Calculando el tiempo de led 2 apagado
    if(procesoled2==0){
      ttotalon6=segundosunidadeson6 + segundosdecenason6*10 + minutosunidadeson6*60 +minutosdecenason6*60*10 + horasunidadeson6*60*60 + horasdecenason6*60*60*10;
      trestanteon6=ttotalon6;

      ttotaloff6=segundosunidadesoff6 + segundosdecenasoff6*10 + minutosunidadesoff6*60 +minutosdecenasoff6*60*10 + horasunidadesoff6*60*60 + horasdecenasoff6*60*60*10;
      trestanteoff6=ttotaloff6;

      ciclos6= ciclosunidades6 + ciclosdecenas6*10 + cicloscentenas6*100;
      }      

          horason1=(trestanteon1/60)/60;
          horasunidadeson1=horason1%10;
          horasdecenason1=horason1/10;          
          minutoson1=(trestanteon1/60)%60;
          minutosunidadeson1=minutoson1%10;
          minutosdecenason1=minutoson1/10;          
          segundoson1=trestanteon1%60;
          segundosunidadeson1=segundoson1%10;
          segundosdecenason1=segundoson1/10;          
         //////////////////////////////////////////////////////horario on 00:00:00 bomba 1

          
          horasoff1=(trestanteoff1/60)/60;
          horasunidadesoff1=horasoff1%10;
          horasdecenasoff1=horasoff1/10;          
          minutosoff1=(trestanteoff1/60)%60;
          minutosunidadesoff1=minutosoff1%10;
          minutosdecenasoff1=minutosoff1/10;          
          segundosoff1=trestanteoff1%60;
          segundosunidadesoff1=segundosoff1%10;
          segundosdecenasoff1=segundosoff1/10;
         //////////////////////////////////////////////////////horario off 00:00:00 bomba 1

          horason2=(trestanteon2/60)/60;
          horasunidadeson2=horason2%10;
          horasdecenason2=horason2/10;          
          minutoson2=(trestanteon2/60)%60;
          minutosunidadeson2=minutoson2%10;
          minutosdecenason2=minutoson2/10;          
          segundoson2=trestanteon2%60;
          segundosunidadeson2=segundoson2%10;
          segundosdecenason2=segundoson2/10;          
         //////////////////////////////////////////////////////horario on 00:00:00 bomba 2

           
          horasoff2=(trestanteoff2/60)/60;
          horasunidadesoff2=horasoff2%10;
          horasdecenasoff2=horasoff2/10;          
          minutosoff2=(trestanteoff2/60)%60;
          minutosunidadesoff2=minutosoff2%10;
          minutosdecenasoff2=minutosoff2/10;          
          segundosoff2=trestanteoff2%60;
          segundosunidadesoff2=segundosoff2%10;
          segundosdecenasoff2=segundosoff2/10;          
         //////////////////////////////////////////////////////horario off 00:00:00 bomba 2 

          horason3=(trestanteon3/60)/60;
          horasunidadeson3=horason3%10;
          horasdecenason3=horason3/10;          
          minutoson3=(trestanteon3/60)%60;
          minutosunidadeson3=minutoson3%10;
          minutosdecenason3=minutoson3/10;          
          segundoson3=trestanteon3%60;
          segundosunidadeson3=segundoson3%10;
          segundosdecenason3=segundoson3/10;          
         //////////////////////////////////////////////////////horario on 00:00:00 bomba 3


          horasoff3=(trestanteoff3/60)/60;
          horasunidadesoff3=horasoff3%10;
          horasdecenasoff3=horasoff3/10;          
          minutosoff3=(trestanteoff3/60)%60;
          minutosunidadesoff3=minutosoff3%10;
          minutosdecenasoff3=minutosoff3/10;          
          segundosoff3=trestanteoff3%60;
          segundosunidadesoff3=segundosoff3%10;
          segundosdecenasoff3=segundosoff3/10;          
         //////////////////////////////////////////////////////horario off 00:00:00 bomba 3 

          horason4=(trestanteon4/60)/60;
          horasunidadeson4=horason4%10;
          horasdecenason4=horason4/10;          
          minutoson4=(trestanteon4/60)%60;
          minutosunidadeson4=minutoson4%10;
          minutosdecenason4=minutoson4/10;          
          segundoson4=trestanteon4%60;
          segundosunidadeson4=segundoson4%10;
          segundosdecenason4=segundoson4/10;          
         //////////////////////////////////////////////////////horario on 00:00:00 bomba 4

          horasoff4=(trestanteoff4/60)/60;
          horasunidadesoff4=horasoff4%10;
          horasdecenasoff4=horasoff4/10;          
          minutosoff4=(trestanteoff4/60)%60;
          minutosunidadesoff4=minutosoff4%10;
          minutosdecenasoff4=minutosoff4/10;          
          segundosoff4=trestanteoff4%60;
          segundosunidadesoff4=segundosoff4%10;
          segundosdecenasoff4=segundosoff4/10;          
         //////////////////////////////////////////////////////horario off 00:00:00 bomba 4



          horason5=(trestanteon5/60)/60;
          horasunidadeson5=horason5%10;
          horasdecenason5=horason5/10;          
          minutoson5=(trestanteon5/60)%60;
          minutosunidadeson5=minutoson5%10;
          minutosdecenason5=minutoson5/10;          
          segundoson5=trestanteon5%60;
          segundosunidadeson5=segundoson5%10;
          segundosdecenason5=segundoson5/10;          
         //////////////////////////////////////////////////////horario on 00:00:00 led1

          horasoff5=(trestanteoff5/60)/60;
          horasunidadesoff5=horasoff5%10;
          horasdecenasoff5=horasoff5/10;          
          minutosoff5=(trestanteoff5/60)%60;
          minutosunidadesoff5=minutosoff5%10;
          minutosdecenasoff5=minutosoff5/10;          
          segundosoff5=trestanteoff5%60;
          segundosunidadesoff5=segundosoff5%10;
          segundosdecenasoff5=segundosoff5/10;          
         //////////////////////////////////////////////////////horario off 00:00:00 led1


          horason6=(trestanteon6/60)/60;
          horasunidadeson6=horason6%10;
          horasdecenason6=horason6/10;          
          minutoson6=(trestanteon6/60)%60;
          minutosunidadeson6=minutoson6%10;
          minutosdecenason6=minutoson6/10;          
          segundoson6=trestanteon6%60;
          segundosunidadeson6=segundoson6%10;
          segundosdecenason6=segundoson6/10;          
         //////////////////////////////////////////////////////horario on 00:00:00 led2

          horasoff6=(trestanteoff6/60)/60;
          horasunidadesoff6=horasoff6%10;
          horasdecenasoff6=horasoff6/10;          
          minutosoff6=(trestanteoff6/60)%60;
          minutosunidadesoff6=minutosoff6%10;
          minutosdecenasoff6=minutosoff6/10;          
          segundosoff6=trestanteoff6%60;
          segundosunidadesoff6=segundosoff6%10;
          segundosdecenasoff6=segundosoff6/10;          
         //////////////////////////////////////////////////////horario off 00:00:00 led2


      switch(elementoelegido){   //Imprimiendo en pantalla información en tiempo real 
      
      case 1: //Bomba1
      lcd.setCursor(1,0);
      lcd.print("Bomba1");
      lcd.setCursor(1,1);
      lcd.print("On");
      
      if(onoff1==1){ //periodo que inicia
        lcd.setCursor(15,0);
        lcd.print("On ");
      }else{
        lcd.setCursor(15,0);
        lcd.print("Off");
      }
      
        lcd.setCursor(12,1);
        lcd.print(horasdecenason1);
        lcd.setCursor(13,1);
        lcd.print(horasunidadeson1);
        lcd.setCursor(14,1);
        lcd.print(":");
        lcd.setCursor(15,1);
        lcd.print(minutosdecenason1);
        lcd.setCursor(16,1);
        lcd.print(minutosunidadeson1);        
        lcd.setCursor(17,1);        
        lcd.print(":");
        lcd.setCursor(18,1);
        lcd.print(segundosdecenason1);
        lcd.setCursor(19,1);
        lcd.print(segundosunidadeson1);

        lcd.setCursor(3,1);
        lcd.print(centenasdemil1);
        lcd.setCursor(4,1);
        lcd.print(decenasdemil1);
        lcd.setCursor(5,1);
        lcd.print(unidadesdemil1);
        lcd.setCursor(6,1);
        lcd.print(centenas1);
        lcd.setCursor(7,1);
        lcd.print(decenas1);
        lcd.setCursor(8,1);
        lcd.print(unidades1);                
        lcd.setCursor(9,1);
        lcd.print("ml");                                      

      //periodo off
      lcd.setCursor(1,2);
      lcd.print("Off");
      lcd.setCursor(4,2);
      lcd.print(horasdecenasoff1);
      lcd.setCursor(5,2);
      lcd.print(horasunidadesoff1);
      lcd.setCursor(6,2);
      lcd.print(":");
      lcd.setCursor(7,2);
      lcd.print(minutosdecenasoff1);
      lcd.setCursor(8,2);
      lcd.print(minutosunidadesoff1);
      lcd.setCursor(9,2);
      lcd.print(":");      
      lcd.setCursor(10,2);
      lcd.print(segundosdecenasoff1);
      lcd.setCursor(11,2);
      lcd.print(segundosunidadesoff1);

      //ciclos bomba1
      lcd.setCursor(1,3);
      lcd.print("Ciclos: ");
      lcd.setCursor(8,3);
      lcd.print(cicloscentenas1);      
      lcd.setCursor(9,3);
      lcd.print(ciclosdecenas1);
      lcd.setCursor(10,3);
      lcd.print(ciclosunidades1);
      break;

      case 2:
      lcd.setCursor(1,0);
      lcd.print("Bomba2");
      lcd.setCursor(1,1);
      lcd.print("On");      
      
      if(onoff2==1){ //periodo que inicia
        lcd.setCursor(15,0);
        lcd.print("On ");
      }else{
        lcd.setCursor(15,0);
        lcd.print("Off");
      }
      
        lcd.setCursor(12,1);
        lcd.print(horasdecenason2);
        lcd.setCursor(13,1);
        lcd.print(horasunidadeson2);
        lcd.setCursor(14,1);
        lcd.print(":");
        lcd.setCursor(15,1);
        lcd.print(minutosdecenason2);
        lcd.setCursor(16,1);
        lcd.print(minutosunidadeson2);        
        lcd.setCursor(17,1);       
        lcd.print(":");
        lcd.setCursor(18,1);
        lcd.print(segundosdecenason2);
        lcd.setCursor(19,1);
        lcd.print(segundosunidadeson2);

        lcd.setCursor(3,1);
        lcd.print(centenasdemil2);
        lcd.setCursor(4,1);
        lcd.print(decenasdemil2);
        lcd.setCursor(5,1);
        lcd.print(unidadesdemil2);
        lcd.setCursor(6,1);
        lcd.print(centenas2);
        lcd.setCursor(7,1);
        lcd.print(decenas2);
        lcd.setCursor(8,1);
        lcd.print(unidades2);                
        lcd.setCursor(9,1);
        lcd.print("ml");                                      

      //periodo off
      lcd.setCursor(1,2);
      lcd.print("Off");
      lcd.setCursor(4,2);
      lcd.print(horasdecenasoff2);
      lcd.setCursor(5,2);
      lcd.print(horasunidadesoff2);
      lcd.setCursor(6,2);
      lcd.print(":");
      lcd.setCursor(7,2);
      lcd.print(minutosdecenasoff2);
      lcd.setCursor(8,2);
      lcd.print(minutosunidadesoff2);
      lcd.setCursor(9,2);
      lcd.print(":");      
      lcd.setCursor(10,2);
      lcd.print(segundosdecenasoff2);
      lcd.setCursor(11,2);
      lcd.print(segundosunidadesoff2);

      //ciclos bomba2
      lcd.setCursor(1,3);
      lcd.print("Ciclos: ");
      lcd.setCursor(8,3);
      lcd.print(cicloscentenas2);      
      lcd.setCursor(9,3);
      lcd.print(ciclosdecenas2);
      lcd.setCursor(10,3);
      lcd.print(ciclosunidades2);
      break;

      case 3: //Bomba 3 
      lcd.setCursor(1,0);
      lcd.print("Bomba3");
      lcd.setCursor(1,1);
      lcd.print("On");      
      
      if(onoff3==1){ //periodo que inicia
        lcd.setCursor(15,0);
        lcd.print("On ");
      }else{
        lcd.setCursor(15,0);
        lcd.print("Off");
      }
      
        lcd.setCursor(12,1);
        lcd.print(horasdecenason3);
        lcd.setCursor(13,1);
        lcd.print(horasunidadeson3);
        lcd.setCursor(14,1);
        lcd.print(":");
        lcd.setCursor(15,1);
        lcd.print(minutosdecenason3);
        lcd.setCursor(16,1);
        lcd.print(minutosunidadeson3);        
        lcd.setCursor(17,1);        
        lcd.print(":");
        lcd.setCursor(18,1);
        lcd.print(segundosdecenason3);
        lcd.setCursor(19,1);
        lcd.print(segundosunidadeson3);

        lcd.setCursor(3,1);
        lcd.print(centenasdemil3);
        lcd.setCursor(4,1);
        lcd.print(decenasdemil3);
        lcd.setCursor(5,1);
        lcd.print(unidadesdemil3);
        lcd.setCursor(6,1);
        lcd.print(centenas3);
        lcd.setCursor(7,1);
        lcd.print(decenas3);
        lcd.setCursor(8,1);
        lcd.print(unidades3);                
        lcd.setCursor(9,1);
        lcd.print("ml");                                      
      

      //periodo off
      lcd.setCursor(1,2);
      lcd.print("Off");
      lcd.setCursor(4,2);
      lcd.print(horasdecenasoff3);
      lcd.setCursor(5,2);
      lcd.print(horasunidadesoff3);
      lcd.setCursor(6,2);
      lcd.print(":");
      lcd.setCursor(7,2);
      lcd.print(minutosdecenasoff3);
      lcd.setCursor(8,2);
      lcd.print(minutosunidadesoff3);
      lcd.setCursor(9,2);
      lcd.print(":");      
      lcd.setCursor(10,2);
      lcd.print(segundosdecenasoff3);
      lcd.setCursor(11,2);
      lcd.print(segundosunidadesoff3);

      //ciclos bomba3
      lcd.setCursor(1,3);
      lcd.print("Ciclos: ");
      lcd.setCursor(8,3);
      lcd.print(cicloscentenas3);      
      lcd.setCursor(9,3);
      lcd.print(ciclosdecenas3);
      lcd.setCursor(10,3);
      lcd.print(ciclosunidades3);
      break;

      case 4: //Bomba 4
      lcd.setCursor(1,0);
      lcd.print("Bomba4");
      lcd.setCursor(1,1);
      lcd.print("On");      
      
      if(onoff4==1){ //periodo que inicia
        lcd.setCursor(15,0);
        lcd.print("On ");
      }else{
        lcd.setCursor(15,0);
        lcd.print("Off");
      }
     
        lcd.setCursor(12,1);
        lcd.print(horasdecenason4);
        lcd.setCursor(13,1);
        lcd.print(horasunidadeson4);
        lcd.setCursor(14,1);
        lcd.print(":");
        lcd.setCursor(15,1);
        lcd.print(minutosdecenason4);
        lcd.setCursor(16,1);
        lcd.print(minutosunidadeson4);        
        lcd.setCursor(17,1);        
        lcd.print(":");
        lcd.setCursor(18,1);
        lcd.print(segundosdecenason4);
        lcd.setCursor(19,1);
        lcd.print(segundosunidadeson4);

        lcd.setCursor(3,1);
        lcd.print(centenasdemil4);
        lcd.setCursor(4,1);
        lcd.print(decenasdemil4);
        lcd.setCursor(5,1);
        lcd.print(unidadesdemil4);
        lcd.setCursor(6,1);
        lcd.print(centenas4);
        lcd.setCursor(7,1);
        lcd.print(decenas4);
        lcd.setCursor(8,1);
        lcd.print(unidades4);                
        lcd.setCursor(9,1);
        lcd.print("ml");                                      

      //periodo off
      lcd.setCursor(1,2);
      lcd.print("Off");
      lcd.setCursor(4,2);
      lcd.print(horasdecenasoff4);
      lcd.setCursor(5,2);
      lcd.print(horasunidadesoff4);
      lcd.setCursor(6,2);
      lcd.print(":");
      lcd.setCursor(7,2);
      lcd.print(minutosdecenasoff4);
      lcd.setCursor(8,2);
      lcd.print(minutosunidadesoff4);
      lcd.setCursor(9,2);
      lcd.print(":");      
      lcd.setCursor(10,2);
      lcd.print(segundosdecenasoff4);
      lcd.setCursor(11,2);
      lcd.print(segundosunidadesoff4);

      //ciclos bomba4
      lcd.setCursor(1,3);
      lcd.print("Ciclos: ");
      lcd.setCursor(8,3);
      lcd.print(cicloscentenas4);      
      lcd.setCursor(9,3);
      lcd.print(ciclosdecenas4);
      lcd.setCursor(10,3);
      lcd.print(ciclosunidades4);
      break;

      case 5: //led 1
      lcd.setCursor(1,0);
      lcd.print("Led1  ");
      lcd.setCursor(1,1);
      lcd.print("On");      
      
      if(onoff5==1){ //periodo que inicia
        lcd.setCursor(15,0);
        lcd.print("On ");
      }else{
        lcd.setCursor(15,0);
        lcd.print("Off");
      }

      //periodo on
      lcd.setCursor(3,1);
      lcd.print(horasdecenason5);
      lcd.setCursor(4,1);
      lcd.print(horasunidadeson5);
      lcd.setCursor(5,1);
      lcd.print(":");
      lcd.setCursor(6,1);
      lcd.print(minutosdecenason5);
      lcd.setCursor(7,1);
      lcd.print(minutosunidadeson5);        
      lcd.setCursor(8,1);        
      lcd.print(":");
      lcd.setCursor(9,1);
      lcd.print(segundosdecenason5);
      lcd.setCursor(10,1);
      lcd.print(segundosunidadeson5);
      lcd.setCursor(11,1);
      lcd.print("         ");

      //periodo off
      lcd.setCursor(1,2);
      lcd.print("Off");
      lcd.setCursor(4,2);
      lcd.print(horasdecenasoff5);
      lcd.setCursor(5,2);
      lcd.print(horasunidadesoff5);
      lcd.setCursor(6,2);
      lcd.print(":");
      lcd.setCursor(7,2);
      lcd.print(minutosdecenasoff5);
      lcd.setCursor(8,2);
      lcd.print(minutosunidadesoff5);
      lcd.setCursor(9,2);
      lcd.print(":");      
      lcd.setCursor(10,2);
      lcd.print(segundosdecenasoff5);
      lcd.setCursor(11,2);
      lcd.print(segundosunidadesoff5);

      //ciclos led 1
      lcd.setCursor(1,3);
      lcd.print("Ciclos: ");
      lcd.setCursor(8,3);
      lcd.print(cicloscentenas5);      
      lcd.setCursor(9,3);
      lcd.print(ciclosdecenas5);
      lcd.setCursor(10,3);
      lcd.print(ciclosunidades5);
      break;

      case 6: //led 2
      lcd.setCursor(1,0);
      lcd.print("Led2  ");
      lcd.setCursor(1,1);
      lcd.print("On");      
      
      if(onoff6==1){ //periodo que inicia
        lcd.setCursor(15,0);
        lcd.print("On ");
      }else{
        lcd.setCursor(15,0);
        lcd.print("Off");
      }

      //periodo on
      lcd.setCursor(3,1);
      lcd.print(horasdecenason6);
      lcd.setCursor(4,1);
      lcd.print(horasunidadeson6);
      lcd.setCursor(5,1);
      lcd.print(":");
      lcd.setCursor(6,1);
      lcd.print(minutosdecenason6);
      lcd.setCursor(7,1);
      lcd.print(minutosunidadeson6);        
      lcd.setCursor(8,1);        
      lcd.print(":");
      lcd.setCursor(9,1);
      lcd.print(segundosdecenason6);
      lcd.setCursor(10,1);
      lcd.print(segundosunidadeson6);
      lcd.setCursor(11,1);
      lcd.print("         ");

      //periodo off
      lcd.setCursor(1,2);
      lcd.print("Off");
      lcd.setCursor(4,2);
      lcd.print(horasdecenasoff6);
      lcd.setCursor(5,2);
      lcd.print(horasunidadesoff6);
      lcd.setCursor(6,2);
      lcd.print(":");
      lcd.setCursor(7,2);
      lcd.print(minutosdecenasoff6);
      lcd.setCursor(8,2);
      lcd.print(minutosunidadesoff6);
      lcd.setCursor(9,2);
      lcd.print(":");      
      lcd.setCursor(10,2);
      lcd.print(segundosdecenasoff6);
      lcd.setCursor(11,2);
      lcd.print(segundosunidadesoff6);

      //ciclos led 2
      lcd.setCursor(1,3);
      lcd.print("Ciclos: ");
      lcd.setCursor(8,3);
      lcd.print(cicloscentenas6);      
      lcd.setCursor(9,3);
      lcd.print(ciclosdecenas6);
      lcd.setCursor(10,3);
      lcd.print(ciclosunidades6);
      break;
    } //////////////////////////////////////// fin de imprimesión en pantalla de información 

  /////////////////////////////////////////////////////////////si se presiona botón para elegir elemento
  if(digitalRead(botonelemento)==LOW){ 
    delay(antirebote);
    
    if(elementoelegido==6){
      elementoelegido=1;
    }else{
      elementoelegido++;      
    }
  }  

  //////////////////////////////////////////////////////////////////////seleccionador de funciones
  if(digitalRead(botonopcion)==LOW){ 
    delay(antirebote);
    if(opcion==3){
      opcion=1;
      lcd.setCursor(0,1);
      lcd.print(">");  
      lcd.setCursor(0,3);
      lcd.print(" ");
    }else{
      opcion++;
      lcd.setCursor(0,opcion);
      lcd.print(">");  
      lcd.setCursor(0,opcion-1);
      lcd.print(" ");      
    }             
  }    

  ////////////////////////////////////////////////////////si se presiona botón para elegir periodo que inicia
  if(digitalRead(botononoff)==LOW){ 
    delay(antirebote);

    switch(elementoelegido){
      
    case 1: //Bomba1
    if(onoff1==0){
      onoff1=1;
      lcd.setCursor(15,0);
      lcd.print("On ");
    }else{
      onoff1=0;
      lcd.setCursor(15,0);
      lcd.print("Off");
    }
    break;

    case 2: //Bomba2
    if(onoff2==0){
      onoff2=1;
      lcd.setCursor(15,0);
      lcd.print("On ");
    }else{
      onoff2=0;
      lcd.setCursor(15,0);
      lcd.print("Off");
    }
    break;    

    case 3: //Bomba3
    if(onoff3==0){
      onoff3=1;
      lcd.setCursor(15,0);
      lcd.print("On ");
    }else{
      onoff3=0;
      lcd.setCursor(15,0);
      lcd.print("Off");
    }
    break;

    case 4: //Bomba4
    if(onoff4==0){
      onoff4=1;
      lcd.setCursor(15,0);
      lcd.print("On ");
    }else{
      onoff4=0;
      lcd.setCursor(15,0);
      lcd.print("Off");
    }
    break;

    case 5: //Led1
    if(onoff5==0){
      onoff5=1;
      lcd.setCursor(15,0);
      lcd.print("On ");
    }else{
      onoff5=0;
      lcd.setCursor(15,0);
      lcd.print("Off");
    }
    break;

    case 6://Led2
    if(onoff6==0){
      onoff6=1;
      lcd.setCursor(15,0);
      lcd.print("On ");
    }else{
      onoff6=0;
      lcd.setCursor(15,0);
      lcd.print("Off");
    }
    break;        
    
    }
  } ///////////////////////////////////////fin de programación onn/off

  ////////////////////////////////////////////////////////si se presiona botón 1 de número
  if(digitalRead(botonnumero1)==LOW){ 
    delay(antirebote);

    switch(elementoelegido){ //Configuración para cada elemento
      
    case 1: //Bomba1
    if(procesobomba1==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(unidades1==9){
          unidades1=0;
          }else{
            unidades1=unidades1 + 1;
            }
      lcd.setCursor(8,1);
      lcd.print(unidades1);                    
      break; //break de on

      case 2: //Configurar Off
      if(segundosunidadesoff1==9){
        segundosunidadesoff1=0;
        }else{
          segundosunidadesoff1=segundosunidadesoff1 + 1;
          } 
      lcd.setCursor(11,2);
      lcd.print(segundosunidadesoff1);
      break; //break de off      

      case 3: //Configurar ciclos
      if(ciclosunidades1==9){
        ciclosunidades1=0;
        }else{
          ciclosunidades1=ciclosunidades1 + 1;
          }
      lcd.setCursor(10,3);
      lcd.print(ciclosunidades1);
      break; //break de ciclos
           
      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 1

    case 2: //Bomba2
    if(procesobomba2==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(unidades2==9){
          unidades2=0;
          }else{
            unidades2=unidades2 + 1;
            }
      lcd.setCursor(8,1);
      lcd.print(unidades2);           
      break; //break de on      

      case 2: //Configurar Off
      if(segundosunidadesoff2==9){
        segundosunidadesoff2=0;
        }else{
          segundosunidadesoff2=segundosunidadesoff2 + 1;
        }
      lcd.setCursor(11,2);
      lcd.print(segundosunidadesoff2);
      break;   //break de off             

      case 3: //Configurar ciclos
      if(ciclosunidades2==9){
        ciclosunidades2=0;
        }else{
          ciclosunidades2=ciclosunidades2 + 1;
          }
      lcd.setCursor(10,3);
      lcd.print(ciclosunidades2);
      break;//break de ciclos

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 2 

    case 3: //Bomba3
    if(procesobomba3==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(unidades3==9){
          unidades3=0;
          }else{
            unidades3=unidades3 + 1;
            }
      lcd.setCursor(8,1);
      lcd.print(unidades3);          
      break; //break de on      

      case 2: //Configurar Off
      if(segundosunidadesoff3==9){
        segundosunidadesoff3=0;
        }else{
          segundosunidadesoff3=segundosunidadesoff3 + 1;
        }
      lcd.setCursor(11,2);
      lcd.print(segundosunidadesoff3);
      break;   //break de off             

      case 3: //Configurar ciclos
      if(ciclosunidades3==9){
        ciclosunidades3=0;
        }else{
          ciclosunidades3=ciclosunidades3 + 1;
          }
      lcd.setCursor(10,3);
      lcd.print(ciclosunidades3);
      break;//break de ciclos

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 3 

    case 4: //Bomba4
    if(procesobomba4==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(unidades4==9){
          unidades4=0;
          }else{
            unidades4=unidades4 + 1;
            }
      lcd.setCursor(8,1);
      lcd.print(unidades4);          
      break; //break de on      

      case 2: //Configurar Off
      if(segundosunidadesoff4==9){
        segundosunidadesoff4=0;
        }else{
          segundosunidadesoff4=segundosunidadesoff4 + 1;
        }
      lcd.setCursor(11,2);
      lcd.print(segundosunidadesoff4);
      break;   //break de off             

      case 3: //Configurar ciclos
      if(ciclosunidades4==9){
        ciclosunidades4=0;
        }else{
          ciclosunidades4=ciclosunidades4 + 1;
          }
      lcd.setCursor(10,3);
      lcd.print(ciclosunidades4);
      break;//break de ciclos

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 4 


    case 5: //Led1
    if(procesoled1==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(segundosunidadeson5==9){
          segundosunidadeson5=0;
          }else{
            segundosunidadeson5=segundosunidadeson5 + 1;
            }
      lcd.setCursor(10,1);
      lcd.print(segundosunidadeson5); 
      break; //break de on                     

      case 2: //Configurar Off
      if(segundosunidadesoff5==9){
        segundosunidadesoff5=0;
        }else{
          segundosunidadesoff5=segundosunidadesoff5 + 1;
          }  
      lcd.setCursor(11,2);
      lcd.print(segundosunidadesoff5); 
      break; //break de off               

      case 3: //Configurar ciclos
      if(ciclosunidades5==9){
        ciclosunidades5=0;
        }else{
          ciclosunidades5=ciclosunidades5 + 1;
          }
      lcd.setCursor(10,3);
      lcd.print(ciclosunidades5); 
      break; //break de ciclos                 
      } // se evaluaron las 3 opciones
    }// cierre de condicional de led apagado
    break; //break de led1

    case 6: //Led2
    if(procesoled2==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(segundosunidadeson6==9){
          segundosunidadeson6=0;
          }else{
            segundosunidadeson6=segundosunidadeson6 + 1;
            }
      lcd.setCursor(10,1);
      lcd.print(segundosunidadeson6); 
      break; //break de on                     

      case 2: //Configurar Off
      if(segundosunidadesoff6==9){
        segundosunidadesoff6=0;
        }else{
          segundosunidadesoff6=segundosunidadesoff6 + 1;
          }  
      lcd.setCursor(11,2);
      lcd.print(segundosunidadesoff6); 
      break; //break de off               

      case 3: //Configurar ciclos
      if(ciclosunidades6==9){
        ciclosunidades6=0;
        }else{
          ciclosunidades6=ciclosunidades6 + 1;
          }
      lcd.setCursor(10,3);
      lcd.print(ciclosunidades6); 
      break; //break de ciclos                 
      } // se evaluaron las 3 opciones
    }// cierre de condicional de led apagado
    break; //break de led2
    }// elementos
  }//cierre lectura de boton 1


////////////////////////////////////////////////////////////////////si se presiona el botón 2 de número
  if(digitalRead(botonnumero2)==LOW){ 
    delay(antirebote);

    switch(elementoelegido){ //Configuración para cada elemento
      
    case 1: //Bomba1
    if(procesobomba1==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(decenas1==9){
          decenas1=0;
          }else{
            decenas1=decenas1 + 1;
            }
      lcd.setCursor(7,1);
      lcd.print(decenas1);   
      break; //break de on

      case 2: //Configurar Off
      if(segundosdecenasoff1==5){
        segundosdecenasoff1=0;
        }else{
          segundosdecenasoff1=segundosdecenasoff1 + 1;
          } 
      lcd.setCursor(10,2);
      lcd.print(segundosdecenasoff1);
      break; //break de off      

      case 3: //Configurar ciclos
      if(ciclosdecenas1==9){
        ciclosdecenas1=0;
        }else{
          ciclosdecenas1=ciclosdecenas1 + 1;
          }
      lcd.setCursor(9,3);
      lcd.print(ciclosdecenas1);
      break; //break de ciclos
           
      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 1

    case 2: //Bomba2
    if(procesobomba2==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(decenas2==9){
          decenas2=0;
          }else{
            decenas2=decenas2 + 1;
            }
      lcd.setCursor(7,1);
      lcd.print(decenas2);          
      break; //break de on      

      case 2: //Configurar Off
      if(segundosdecenasoff2==5){
        segundosdecenasoff2=0;
        }else{
          segundosdecenasoff2=segundosdecenasoff2 + 1;
        }
      lcd.setCursor(10,2);
      lcd.print(segundosdecenasoff2);
      break;   //break de off             

      case 3: //Configurar ciclos
      if(ciclosdecenas2==9){
        ciclosdecenas2=0;
        }else{
          ciclosdecenas2=ciclosdecenas2 + 1;
          }
      lcd.setCursor(9,3);
      lcd.print(ciclosdecenas2);
      break;//break de ciclos

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 2 

    case 3: //Bomba3
    if(procesobomba3==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(decenas3==9){
          decenas3=0;
          }else{
            decenas3=decenas3 + 1;
            }
      lcd.setCursor(7,1);
      lcd.print(decenas3);          
      break; //break de on      

      case 2: //Configurar Off
      if(segundosdecenasoff3==5){
        segundosdecenasoff3=0;
        }else{
          segundosdecenasoff3=segundosdecenasoff3 + 1;
        }
      lcd.setCursor(10,2);
      lcd.print(segundosdecenasoff3);
      break;   //break de off             

      case 3: //Configurar ciclos
      if(ciclosdecenas3==9){
        ciclosdecenas3=0;
        }else{
          ciclosdecenas3=ciclosdecenas3 + 1;
          }
      lcd.setCursor(9,3);
      lcd.print(ciclosdecenas3);
      break;//break de ciclos

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 3 

    case 4: //Bomba4
    if(procesobomba4==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(decenas4==9){
          decenas4=0;
          }else{
            decenas4=decenas4 + 1;
            }
      lcd.setCursor(7,1);
      lcd.print(decenas4);          
      break; //break de on      

      case 2: //Configurar Off
      if(segundosdecenasoff4==5){
        segundosdecenasoff4=0;
        }else{
          segundosdecenasoff4=segundosdecenasoff4 + 1;
        }
      lcd.setCursor(10,2);
      lcd.print(segundosdecenasoff4);
      break;   //break de off             

      case 3: //Configurar ciclos
      if(ciclosdecenas4==9){
        ciclosdecenas4=0;
        }else{
          ciclosdecenas4=ciclosdecenas4 + 1;
          }
      lcd.setCursor(9,3);
      lcd.print(ciclosdecenas4);
      break;//break de ciclos

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 4 


    case 5: //Led1
    if(procesoled1==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(segundosdecenason5==5){
          segundosdecenason5=0;
          }else{
            segundosdecenason5=segundosdecenason5 + 1;
            }
      lcd.setCursor(9,1);
      lcd.print(segundosdecenason5); 
      break; //break de on                     

      case 2: //Configurar Off
      if(segundosdecenasoff5==5){
        segundosdecenasoff5=0;
        }else{
          segundosdecenasoff5=segundosdecenasoff5 + 1;
          }  
      lcd.setCursor(10,2);
      lcd.print(segundosdecenasoff5); 
      break; //break de off               

      case 3: //Configurar ciclos
      if(ciclosdecenas5==9){
        ciclosdecenas5=0;
        }else{
          ciclosdecenas5=ciclosdecenas5 + 1;
          }
      lcd.setCursor(9,3);
      lcd.print(ciclosdecenas5); 
      break; //break de ciclos                 
      } // se evaluaron las 3 opciones
    }// cierre de condicional de led apagado
    break; //break de led1

    case 6: //Led2
    if(procesoled2==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(segundosdecenason6==5){
          segundosdecenason6=0;
          }else{
            segundosdecenason6=segundosdecenason6 + 1;
            }
      lcd.setCursor(9,1);
      lcd.print(segundosdecenason6); 
      break; //break de on                     

      case 2: //Configurar Off
      if(segundosdecenasoff6==5){
        segundosdecenasoff6=0;
        }else{
          segundosdecenasoff6=segundosdecenasoff6 + 1;
          }  
      lcd.setCursor(10,2);
      lcd.print(segundosdecenasoff6); 
      break; //break de off               

      case 3: //Configurar ciclos
      if(ciclosdecenas6==9){
        ciclosdecenas6=0;
        }else{
          ciclosdecenas6=ciclosdecenas6 + 1;
          }
      lcd.setCursor(9,3);
      lcd.print(ciclosdecenas6); 
      break; //break de ciclos                 
      } // se evaluaron las 3 opciones
    }// cierre de condicional de led apagado
    break; //break de led2
    }// elementos
  }//cierre lectura de boton 2

///////////////////////////////////////////////////////////////////////si se presiona el botón 3 de número
  if(digitalRead(botonnumero3)==LOW){ 
    delay(antirebote);

    switch(elementoelegido){ //Configuración para cada elemento
      
    case 1: //Bomba1
    if(procesobomba1==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(centenas1==9){
          centenas1=0;
          }else{
            centenas1=centenas1 + 1;
            }
      lcd.setCursor(6,1);
      lcd.print(centenas1);                    
      break; //break de on

      case 2: //Configurar Off
      if(minutosunidadesoff1==9){
        minutosunidadesoff1=0;
        }else{
          minutosunidadesoff1=minutosunidadesoff1 + 1;
          } 
      lcd.setCursor(8,2);
      lcd.print(minutosunidadesoff1);
      break; //break de off      

      case 3: //Configurar ciclos
      if(cicloscentenas1==9){
        cicloscentenas1=0;
        }else{
          cicloscentenas1=cicloscentenas1 + 1;
          }
      lcd.setCursor(8,3);
      lcd.print(cicloscentenas1);
      break; //break de ciclos
           
      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 1

    case 2: //Bomba2
    if(procesobomba2==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(centenas2==9){
          centenas2=0;
          }else{
            centenas2=centenas2 + 1;
            }
      lcd.setCursor(6,1);
      lcd.print(centenas2);           
      break; //break de on      

      case 2: //Configurar Off
      if(minutosunidadesoff2==9){
        minutosunidadesoff2=0;
        }else{
          minutosunidadesoff2=minutosunidadesoff2 + 1;
        }
      lcd.setCursor(8,2);
      lcd.print(minutosunidadesoff2);
      break;   //break de off             

      case 3: //Configurar ciclos
      if(cicloscentenas2==9){
        cicloscentenas2=0;
        }else{
          cicloscentenas2=cicloscentenas2 + 1;
          }
      lcd.setCursor(8,3);
      lcd.print(cicloscentenas2);
      break;//break de ciclos

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 2 

    case 3: //Bomba3
    if(procesobomba3==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(centenas3==9){
          centenas3=0;
          }else{
            centenas3=centenas3 + 1;
            }
      lcd.setCursor(6,1);
      lcd.print(centenas3);          
      break; //break de on      

      case 2: //Configurar Off
      if(minutosunidadesoff3==9){
        minutosunidadesoff3=0;
        }else{
          minutosunidadesoff3=minutosunidadesoff3 + 1;
        }
      lcd.setCursor(8,2);
      lcd.print(minutosunidadesoff3);
      break;   //break de off             

      case 3: //Configurar ciclos
      if(cicloscentenas3==9){
        cicloscentenas3=0;
        }else{
          cicloscentenas3=cicloscentenas3 + 1;
          }
      lcd.setCursor(8,3);
      lcd.print(cicloscentenas3);
      break;//break de ciclos

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 3 

    case 4: //Bomba4
    if(procesobomba4==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(centenas4==9){
          centenas4=0;
          }else{
            centenas4=centenas4 + 1;
            }
      lcd.setCursor(6,1);
      lcd.print(centenas4);          
      break; //break de on      

      case 2: //Configurar Off
      if(minutosunidadesoff4==9){
        minutosunidadesoff4=0;
        }else{
          minutosunidadesoff4=minutosunidadesoff4 + 1;
        }
      lcd.setCursor(8,2);
      lcd.print(minutosunidadesoff4);
      break;   //break de off             

      case 3: //Configurar ciclos
      if(cicloscentenas4==9){
        cicloscentenas4=0;
        }else{
          cicloscentenas4=cicloscentenas4 + 1;
          }
      lcd.setCursor(8,3);
      lcd.print(cicloscentenas4);
      break;//break de ciclos

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 4 


    case 5: //Led1
    if(procesoled1==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(minutosunidadeson5==9){
          minutosunidadeson5=0;
          }else{
            minutosunidadeson5=minutosunidadeson5 + 1;
            }
      lcd.setCursor(7,1);
      lcd.print(minutosunidadeson5); 
      break; //break de on                     

      case 2: //Configurar Off
      if(minutosunidadesoff5==9){
        minutosunidadesoff5=0;
        }else{
          minutosunidadesoff5=minutosunidadesoff5 + 1;
          }  
      lcd.setCursor(8,2);
      lcd.print(minutosunidadesoff5); 
      break; //break de off               

      case 3: //Configurar ciclos
      if(cicloscentenas5==9){
        cicloscentenas5=0;
        }else{
          cicloscentenas5=cicloscentenas5 + 1;
          }
      lcd.setCursor(8,3);
      lcd.print(cicloscentenas5); 
      break; //break de ciclos                 
      } // se evaluaron las 3 opciones
    }// cierre de condicional de led apagado
    break; //break de led1

    case 6: //Led2
    if(procesoled2==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(minutosunidadeson6==9){
          minutosunidadeson6=0;
          }else{
            minutosunidadeson6=minutosunidadeson6 + 1;
            }
      lcd.setCursor(7,1);
      lcd.print(minutosunidadeson6); 
      break; //break de on                     

      case 2: //Configurar Off
      if(minutosunidadesoff6==9){
        minutosunidadesoff6=0;
        }else{
          minutosunidadesoff6=minutosunidadesoff6 + 1;
          }  
      lcd.setCursor(8,2);
      lcd.print(minutosunidadesoff6); 
      break; //break de off               

      case 3: //Configurar ciclos
      if(cicloscentenas6==9){
        cicloscentenas6=0;
        }else{
          cicloscentenas6=cicloscentenas6 + 1;
          }
      lcd.setCursor(8,3);
      lcd.print(cicloscentenas6); 
      break; //break de ciclos                 
      } // se evaluaron las 3 opciones
    }// cierre de condicional de led apagado
    break; //break de led2
    }// elementos
  }//cierre lectura de boton 3

//////////////////////////////////////////////////////////////////////////////////////////si se presiona el botón 4 de número
  if(digitalRead(botonnumero4)==LOW){ 
    delay(antirebote);

    switch(elementoelegido){ //Configuración para cada elemento
      
    case 1: //Bomba1
    if(procesobomba1==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(unidadesdemil1==9){
          unidadesdemil1=0;
          }else{
            unidadesdemil1=unidadesdemil1 + 1;
            }
      lcd.setCursor(5,1);
      lcd.print(unidadesdemil1);                    
      break; //break de on

      case 2: //Configurar Off
      if(minutosdecenasoff1==5){
        minutosdecenasoff1=0;
        }else{
          minutosdecenasoff1=minutosdecenasoff1 + 1;
          } 
      lcd.setCursor(7,2);
      lcd.print(minutosdecenasoff1);
      break; //break de off      
           
      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 1

    case 2: //Bomba2
    if(procesobomba2==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(unidadesdemil2==9){
          unidadesdemil2=0;
          }else{
            unidadesdemil2=unidadesdemil2 + 1;
            }
      lcd.setCursor(5,1);
      lcd.print(unidadesdemil2);           
      break; //break de on      

      case 2: //Configurar Off
      if(minutosdecenasoff2==5){
        minutosdecenasoff2=0;
        }else{
          minutosdecenasoff2=minutosdecenasoff2 + 1;
        }
      lcd.setCursor(7,2);
      lcd.print(minutosdecenasoff2);
      break;   //break de off             

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 2 

    case 3: //Bomba3
    if(procesobomba3==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(unidadesdemil3==9){
          unidadesdemil3=0;
          }else{
            unidadesdemil3=unidadesdemil3 + 1;
            }
      lcd.setCursor(5,1);
      lcd.print(unidadesdemil3);          
      break; //break de on      

      case 2: //Configurar Off
      if(minutosdecenasoff3==5){
        minutosdecenasoff3=0;
        }else{
          minutosdecenasoff3=minutosdecenasoff3 + 1;
        }
      lcd.setCursor(7,2);
      lcd.print(minutosdecenasoff3);
      break;   //break de off             

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 3 

    case 4: //Bomba4
    if(procesobomba4==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(unidadesdemil4==9){
          unidadesdemil4=0;
          }else{
            unidadesdemil4=unidadesdemil4 + 1;
            }
      lcd.setCursor(5,1);
      lcd.print(unidadesdemil4);          
      break; //break de on      

      case 2: //Configurar Off
      if(minutosdecenasoff4==5){
        minutosdecenasoff4=0;
        }else{
          minutosdecenasoff4=minutosdecenasoff4 + 1;
        }
      lcd.setCursor(7,2);
      lcd.print(minutosdecenasoff4);
      break;   //break de off             

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 4 


    case 5: //Led1
    if(procesoled1==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(minutosdecenason5==5){
          minutosdecenason5=0;
          }else{
            minutosdecenason5=minutosdecenason5 + 1;
            }
      lcd.setCursor(6,1);
      lcd.print(minutosdecenason5); 
      break; //break de on                     

      case 2: //Configurar Off
      if(minutosdecenasoff5==5){
        minutosdecenasoff5=0;
        }else{
          minutosdecenasoff5=minutosdecenasoff5 + 1;
          }  
      lcd.setCursor(7,2);
      lcd.print(minutosdecenasoff5); 
      break; //break de off               
                
      } // se evaluaron las 3 opciones
    }// cierre de condicional de led apagado
    break; //break de led1

    case 6: //Led2
    if(procesoled2==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(minutosdecenason6==5){
          minutosdecenason6=0;
          }else{
            minutosdecenason6=minutosdecenason6 + 1;
            }
      lcd.setCursor(6,1);
      lcd.print(minutosdecenason6); 
      break; //break de on                     

      case 2: //Configurar Off
      if(minutosdecenasoff6==5){
        minutosdecenasoff6=0;
        }else{
          minutosdecenasoff6=minutosdecenasoff6 + 1;
          }  
      lcd.setCursor(7,2);
      lcd.print(minutosdecenasoff6); 
      break; //break de off               
                 
      } // se evaluaron las 3 opciones
    }// cierre de condicional de led apagado
    break; //break de led2
    }// elementos
  }//cierre lectura de boton 4


  
/////////////////////////////////////////////////////////////////////////////////////////// Si se presiona Boton 5

//si se presiona el botón 5 de número
  if(digitalRead(botonnumero5)==LOW){ 
    delay(antirebote);

    switch(elementoelegido){ //Configuración para cada elemento
      
    case 1: //Bomba1
    if(procesobomba1==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(decenasdemil1==9){
          decenasdemil1=0;
          }else{
            decenasdemil1=decenasdemil1 + 1;
            }
      lcd.setCursor(4,1);
      lcd.print(decenasdemil1);                    
      break; //break de on

      case 2: //Configurar Off
      if(horasunidadesoff1==9){
        horasunidadesoff1=0;
        }else{
          horasunidadesoff1=horasunidadesoff1 + 1;
          } 
      lcd.setCursor(5,2);
      lcd.print(horasunidadesoff1);
      break; //break de off      
           
      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 1

    case 2: //Bomba2
    if(procesobomba2==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(decenasdemil2==9){
          decenasdemil2=0;
          }else{
            decenasdemil2=decenasdemil2 + 1;
            }
      lcd.setCursor(4,1);
      lcd.print(decenasdemil2);          
      break; //break de on      

      case 2: //Configurar Off
      if(horasunidadesoff2==9){
        horasunidadesoff2=0;
        }else{
          horasunidadesoff2=horasunidadesoff2 + 1;
        }
      lcd.setCursor(5,2);
      lcd.print(horasunidadesoff2);
      break;   //break de off             

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 2 

    case 3: //Bomba3
    if(procesobomba3==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(decenasdemil3==9){
          decenasdemil3=0;
          }else{
            decenasdemil3=decenasdemil3 + 1;
            }
      lcd.setCursor(4,1);
      lcd.print(decenasdemil3);          
      break; //break de on      

      case 2: //Configurar Off
      if(horasunidadesoff3==9){
        horasunidadesoff3=0;
        }else{
          horasunidadesoff3=horasunidadesoff3 + 1;
        }
      lcd.setCursor(5,2);
      lcd.print(horasunidadesoff3);
      break;   //break de off             

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 3 

    case 4: //Bomba4
    if(procesobomba4==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(decenasdemil4==9){
          decenasdemil4=0;
          }else{
            decenasdemil4=decenasdemil4 + 1;
            }
      lcd.setCursor(4,1);
      lcd.print(decenasdemil4);          
      break; //break de on      

      case 2: //Configurar Off
      if(horasunidadesoff4==9){
        horasunidadesoff4=0;
        }else{
          horasunidadesoff4=horasunidadesoff4 + 1;
        }
      lcd.setCursor(5,2);
      lcd.print(horasunidadesoff4);
      break;   //break de off             

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 4 


    case 5: //Led1
    if(procesoled1==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(horasunidadeson5==9){
          horasunidadeson5=0;
          }else{
            horasunidadeson5=horasunidadeson5 + 1;
            }
      lcd.setCursor(4,1);
      lcd.print(horasunidadeson5); 
      break; //break de on                     

      case 2: //Configurar Off
      if(horasunidadesoff5==9){
        horasunidadesoff5=0;
        }else{
          horasunidadesoff5=horasunidadesoff5 + 1;
          }  
      lcd.setCursor(5,2);
      lcd.print(horasunidadesoff5); 
      break; //break de off               
                
      } // se evaluaron las 3 opciones
    }// cierre de condicional de led apagado
    break; //break de led1

    case 6: //Led2
    if(procesoled2==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(horasunidadeson6==9){
          horasunidadeson6=0;
          }else{
            horasunidadeson6=horasunidadeson6 + 1;
            }
      lcd.setCursor(4,1);
      lcd.print(horasunidadeson6); 
      break; //break de on                     

      case 2: //Configurar Off
      if(horasunidadesoff6==9){
        horasunidadesoff6=0;
        }else{
          horasunidadesoff6=horasunidadesoff6 + 1;
          }  
      lcd.setCursor(5,2);
      lcd.print(horasunidadesoff6); 
      break; //break de off               
                 
      } // se evaluaron las 3 opciones
    }// cierre de condicional de led apagado
    break; //break de led2
    }// elementos
  }//cierre lectura de boton 5


  /////////////////////////////////////////////////////////////////////////////////////////// Si se presiona Boton 6
  if(digitalRead(botonnumero6)==LOW){ 
    delay(antirebote);

    switch(elementoelegido){ //Configuración para cada elemento
      
    case 1: //Bomba1
    if(procesobomba1==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(centenasdemil1==9){
          centenasdemil1=0;
          }else{
            centenasdemil1=centenasdemil1 + 1;
            }
      lcd.setCursor(3,1);
      lcd.print(centenasdemil1);                    
      break; //break de on

      case 2: //Configurar Off
      if(horasdecenasoff1==6){
        horasdecenasoff1=0;
        }else{
          horasdecenasoff1=horasdecenasoff1 + 1;
          } 
      lcd.setCursor(4,2);
      lcd.print(horasdecenasoff1);
      break; //break de off      
           
      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 1

    case 2: //Bomba2
    if(procesobomba2==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(centenasdemil2==9){
          centenasdemil2=0;
          }else{
            centenasdemil2=centenasdemil2 + 1;
            }
      lcd.setCursor(3,1);
      lcd.print(centenasdemil2);          
      break; //break de on      

      case 2: //Configurar Off
      if(horasdecenasoff2==5){
        horasdecenasoff2=0;
        }else{
          horasdecenasoff2=horasdecenasoff2 + 1;
        }
      lcd.setCursor(4,2);
      lcd.print(horasdecenasoff2);
      break;   //break de off             

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 2 

    case 3: //Bomba3
    if(procesobomba3==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(centenasdemil3==9){
          centenasdemil3=0;
          }else{
            centenasdemil3=centenasdemil3 + 1;
            }
      lcd.setCursor(3,1);
      lcd.print(centenasdemil3);          
      break; //break de on      

      case 2: //Configurar Off
      if(horasdecenasoff3==5){
        horasdecenasoff3=0;
        }else{
          horasdecenasoff3=horasdecenasoff3 + 1;
        }
      lcd.setCursor(4,2);
      lcd.print(horasdecenasoff3);
      break;   //break de off             

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 3 

    case 4: //Bomba4
    if(procesobomba4==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
        if(centenasdemil4==9){
          centenasdemil4=0;
          }else{
            centenasdemil4=centenasdemil4 + 1;
            }
      lcd.setCursor(3,1);
      lcd.print(centenasdemil4);          
      break; //break de on      

      case 2: //Configurar Off
      if(horasdecenasoff4==5){
        horasdecenasoff4=0;
        }else{
          horasdecenasoff4=horasdecenasoff4 + 1;
        }
      lcd.setCursor(4,2);
      lcd.print(horasdecenasoff4);
      break;   //break de off             

      } // se evaluaron las 3 opciones
    }// cierre de condicional de bomba apagada
    break; //break de bomba 4 


    case 5: //Led1
    if(procesoled1==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(horasdecenason5==5){
          horasdecenason5=0;
          }else{
            horasdecenason5=horasdecenason5 + 1;
            }
      lcd.setCursor(3,1);
      lcd.print(horasdecenason5); 
      break; //break de on                     

      case 2: //Configurar Off
      if(horasdecenasoff5==5){
        horasdecenasoff5=0;
        }else{
          horasdecenasoff5=horasdecenasoff5 + 1;
          }  
      lcd.setCursor(4,2);
      lcd.print(horasdecenasoff5); 
      break; //break de off               
                
      } // se evaluaron las 3 opciones
    }// cierre de condicional de led apagado
    break; //break de led1

    case 6: //Led2
    if(procesoled2==0){ //El elemento debe estar apagado

      switch(opcion){ //Configuración dependiendo de la opción elegida

      case 1: //Configurar On
      if(horasdecenason6==5){
          horasdecenason6=0;
          }else{
            horasdecenason6=horasdecenason6 + 1;
            }
      lcd.setCursor(3,1);
      lcd.print(horasdecenason6); 
      break; //break de on                     

      case 2: //Configurar Off
      if(horasdecenasoff6==5){
        horasdecenasoff6=0;
        }else{
          horasdecenasoff6=horasdecenasoff6 + 1;
          }  
      lcd.setCursor(4,2);
      lcd.print(horasdecenasoff6); 
      break; //break de off               
                 
      } // se evaluaron las 3 opciones
    }// cierre de condicional de led apagado
    break; //break de led2
    }// elementos
  }//////////////////////////////////////////////////cierre lectura de boton 6

///////////////////////////////////////////////////////////////////////////////si se presiona botón para activar bomba 1 
if(digitalRead(botonactivarparar)==LOW && elementoelegido==1){ 
  delay(antirebote);
  if(procesobomba1==0 && v1>6.5 && trestanteon1>2){ //debe estar apagada y cumplir con condiciones iniciales
    switch(onoff1){

      case 0: //Si inicia Off
      procesobomba1=3;
      digitalWrite(bomba1,LOW);
      break; //break de inicia off
      
      case 1: //Si inicia On
      procesobomba1=1;
      digitalWrite(bomba1,HIGH);
      break; //break de inicia on
      
    }
  }
}

if(procesobomba1==1){ /////////////////////////////////////////////// si bomba 1 está en periodo inicial On
    tconteomillison1=millis();
      if(tconteomillison1>(tconteoon1+1000)){//ha pasado 1 segundo
        tconteoon1=millis();
        trestanteon1=trestanteon1-1;
      }
      
      if(trestanteon1<1){
          procesobomba1=2;
          trestanteon1=ttotalon1;
          digitalWrite(bomba1,LOW);            
        }
}

if(procesobomba1==2){ /////////////////////////////////////////////// si bomba 1 está en periodo final Off
    tconteomillisoff1=millis();
      if(tconteomillisoff1>(tconteooff1+1000)){//ha pasado 1 segundo
        tconteooff1=millis();
        trestanteoff1=trestanteoff1-1;
      }
      
      if(trestanteoff1<1){
        ciclos1=ciclos1-1;
        cicloscentenas1=ciclos1/100;
        ciclosdecenas1=ciclos1/10;
        ciclosunidades1=ciclos1%10;
        
        if(ciclos1<1){
          procesobomba1=0;
          ciclos1=1;
          ciclosunidades1=1;
          digitalWrite(bomba1,LOW);
        }else{
          procesobomba1=1;
          digitalWrite(bomba1,HIGH);
          trestanteoff1=ttotaloff1;         
        }            
        }
}

if(procesobomba1==3){ /////////////////////////////////////////////// si bomba 1 está en periodo inicial Off
    tconteomillisoff1=millis();
      if(tconteomillisoff1>(tconteooff1+1000)){//ha pasado 1 segundo
        tconteooff1=millis();
        trestanteoff1=trestanteoff1-1;
      }
      
      if(trestanteoff1<1){
          procesobomba1=4;
          trestanteoff1=ttotaloff1;
          digitalWrite(bomba1,HIGH);            
        }
}

if(procesobomba1==4){ /////////////////////////////////////////////// si bomba 1 está en periodo final On
    tconteomillison1=millis();
      if(tconteomillison1>(tconteoon1+1000)){//ha pasado 1 segundo
        tconteoon1=millis();
        trestanteon1=trestanteon1-1;
      }
      
      if(trestanteon1<1){
        ciclos1=ciclos1-1;
        cicloscentenas1=ciclos1/100;
        ciclosdecenas1=ciclos1/10;
        ciclosunidades1=ciclos1%10;
        
        if(ciclos1<1){
          ciclos1=1;
          ciclosunidades1=1;
          procesobomba1=0;
          digitalWrite(bomba1,LOW);
        }else{
          procesobomba1=3;
          digitalWrite(bomba1,LOW);
          trestanteon1=ttotalon1;         
        }            
        }
}
//////////////////////////////////////////////////////////////////////////////// control bomba 1

///////////////////////////////////////////////////////////////////////////////si se presiona botón para activar bomba 2
if(digitalRead(botonactivarparar)==LOW && elementoelegido==2){ 
  delay(antirebote);
  if(procesobomba2==0 && v2>6.5 && trestanteon2>2){ //debe estar apagada y cumplir con condiciones iniciales
    switch(onoff2){

      case 0: //Si inicia Off
      procesobomba2=3;
      digitalWrite(bomba2,LOW);
      break; //break de inicia off
      
      case 1: //Si inicia On
      procesobomba2=1;
      digitalWrite(bomba2,HIGH);
      break; //break de inicia on
      
    }
  }
}

if(procesobomba2==1){ /////////////////////////////////////////////// si bomba 2 está en periodo inicial On
    tconteomillison2=millis();
      if(tconteomillison2>(tconteoon2+1000)){//ha pasado 1 segundo
        tconteoon2=millis();
        trestanteon2=trestanteon2-1;
      }
      
      if(trestanteon2<1){
          procesobomba2=2;
          trestanteon2=ttotalon2;
          digitalWrite(bomba2,LOW);            
        }
}

if(procesobomba2==2){ /////////////////////////////////////////////// si bomba 2 está en periodo final Off
    tconteomillisoff2=millis();
      if(tconteomillisoff2>(tconteooff2+1000)){//ha pasado 1 segundo
        tconteooff2=millis();
        trestanteoff2=trestanteoff2-1;
      }
      
      if(trestanteoff2<1){
        ciclos2=ciclos2-1;
        cicloscentenas2=ciclos2/100;
        ciclosdecenas2=ciclos2/10;
        ciclosunidades2=ciclos2%10;
        
        if(ciclos2<1){
          procesobomba2=0;
          ciclos2=1;
          ciclosunidades2=1;
          digitalWrite(bomba2,LOW);
        }else{
          procesobomba2=1;
          digitalWrite(bomba2,HIGH);
          trestanteoff2=ttotaloff2;         
        }            
        }
}

if(procesobomba2==3){ /////////////////////////////////////////////// si bomba 1 está en periodo inicial Off
    tconteomillisoff2=millis();
      if(tconteomillisoff2>(tconteooff2+1000)){//ha pasado 1 segundo
        tconteooff2=millis();
        trestanteoff2=trestanteoff2-1;
      }
      
      if(trestanteoff2<1){
          procesobomba2=4;
          trestanteoff2=ttotaloff2;
          digitalWrite(bomba2,HIGH);            
        }
}

if(procesobomba2==4){ /////////////////////////////////////////////// si bomba 1 está en periodo final On
    tconteomillison2=millis();
      if(tconteomillison2>(tconteoon2+1000)){//ha pasado 1 segundo
        tconteoon2=millis();
        trestanteon2=trestanteon2-1;
      }
      
      if(trestanteon2<1){
        ciclos2=ciclos2-1;
        cicloscentenas2=ciclos2/100;
        ciclosdecenas2=ciclos2/10;
        ciclosunidades2=ciclos2%10;
        
        if(ciclos2<1){
          ciclos2=1;
          ciclosunidades2=1;
          procesobomba2=0;
          digitalWrite(bomba2,LOW);
        }else{
          procesobomba2=3;
          digitalWrite(bomba2,LOW);
          trestanteon2=ttotalon2;         
        }            
        }
}
//////////////////////////////////////////////////////////////////////////////// control bomba 2

///////////////////////////////////////////////////////////////////////////////si se presiona botón para activar bomba 3
if(digitalRead(botonactivarparar)==LOW && elementoelegido==3){ 
  delay(antirebote);
  if(procesobomba3==0 && v3>6.5 && trestanteon3>2){ //debe estar apagada y cumplir con condiciones iniciales
    switch(onoff3){

      case 0: //Si inicia Off
      procesobomba3=3;
      digitalWrite(bomba3,LOW);
      break; //break de inicia off
      
      case 1: //Si inicia On
      procesobomba3=1;
      digitalWrite(bomba3,HIGH);
      break; //break de inicia on
      
    }
  }
}

if(procesobomba3==1){ /////////////////////////////////////////////// si bomba 3 está en periodo inicial On
    tconteomillison3=millis();
      if(tconteomillison3>(tconteoon3+1000)){//ha pasado 1 segundo
        tconteoon3=millis();
        trestanteon3=trestanteon3-1;
      }
      
      if(trestanteon3<1){
          procesobomba3=2;
          trestanteon3=ttotalon3;
          digitalWrite(bomba3,LOW);            
        }
}

if(procesobomba3==2){ /////////////////////////////////////////////// si bomba 3 está en periodo final Off
    tconteomillisoff3=millis();
      if(tconteomillisoff3>(tconteooff3+1000)){//ha pasado 1 segundo
        tconteooff3=millis();
        trestanteoff3=trestanteoff3-1;
      }
      
      if(trestanteoff3<1){
        ciclos3=ciclos3-1;
        cicloscentenas3=ciclos3/100;
        ciclosdecenas3=ciclos3/10;
        ciclosunidades3=ciclos3%10;
        
        if(ciclos3<1){
          procesobomba3=0;
          ciclos3=1;
          ciclosunidades3=1;
          digitalWrite(bomba3,LOW);
        }else{
          procesobomba3=1;
          digitalWrite(bomba3,HIGH);
          trestanteoff3=ttotaloff3;         
        }            
        }
}

if(procesobomba3==3){ /////////////////////////////////////////////// si bomba 1 está en periodo inicial Off
    tconteomillisoff3=millis();
      if(tconteomillisoff3>(tconteooff3+1000)){//ha pasado 1 segundo
        tconteooff3=millis();
        trestanteoff3=trestanteoff3-1;
      }
      
      if(trestanteoff3<1){
          procesobomba3=4;
          trestanteoff3=ttotaloff3;
          digitalWrite(bomba3,HIGH);            
        }
}

if(procesobomba3==4){ /////////////////////////////////////////////// si bomba 3 está en periodo final On
    tconteomillison3=millis();
      if(tconteomillison3>(tconteoon3+1000)){//ha pasado 1 segundo
        tconteoon3=millis();
        trestanteon3=trestanteon3-1;
      }
      
      if(trestanteon3<1){
        ciclos3=ciclos3-1;
        cicloscentenas3=ciclos3/100;
        ciclosdecenas3=ciclos3/10;
        ciclosunidades3=ciclos3%10;
        
        if(ciclos3<1){
          ciclos3=1;
          ciclosunidades3=1;
          procesobomba3=0;
          digitalWrite(bomba3,LOW);
        }else{
          procesobomba3=3;
          digitalWrite(bomba3,LOW);
          trestanteon3=ttotalon3;         
        }            
        }
}
//////////////////////////////////////////////////////////////////////////////// control bomba 3


///////////////////////////////////////////////////////////////////////////////si se presiona botón para activar bomba 4
if(digitalRead(botonactivarparar)==LOW && elementoelegido==4){ 
  delay(antirebote);
  if(procesobomba4==0 && v4>6.5 && trestanteon4>2){ //debe estar apagada y cumplir con condiciones iniciales
    switch(onoff4){

      case 0: //Si inicia Off
      procesobomba4=3;
      digitalWrite(bomba4,LOW);
      break; //break de inicia off
      
      case 1: //Si inicia On
      procesobomba4=1;
      digitalWrite(bomba4,HIGH);
      break; //break de inicia on
      
    }
  }
}

if(procesobomba4==1){ /////////////////////////////////////////////// si bomba 4 está en periodo inicial On
    tconteomillison4=millis();
      if(tconteomillison4>(tconteoon4+1000)){//ha pasado 1 segundo
        tconteoon4=millis();
        trestanteon4=trestanteon4-1;
      }
      
      if(trestanteon4<1){
          procesobomba4=2;
          trestanteon4=ttotalon4;
          digitalWrite(bomba4,LOW);            
        }
}

if(procesobomba4==2){ /////////////////////////////////////////////// si bomba 4 está en periodo final Off
    tconteomillisoff4=millis();
      if(tconteomillisoff4>(tconteooff4+1000)){//ha pasado 1 segundo
        tconteooff4=millis();
        trestanteoff4=trestanteoff4-1;
      }
      
      if(trestanteoff4<1){
        ciclos4=ciclos4-1;
        cicloscentenas4=ciclos4/100;
        ciclosdecenas4=ciclos4/10;
        ciclosunidades4=ciclos4%10;
        
        if(ciclos4<1){
          procesobomba4=0;
          ciclos4=1;
          ciclosunidades4=1;
          digitalWrite(bomba4,LOW);
        }else{
          procesobomba4=1;
          digitalWrite(bomba4,HIGH);
          trestanteoff4=ttotaloff4;         
        }            
        }
}

if(procesobomba4==3){ /////////////////////////////////////////////// si bomba 4 está en periodo inicial Off
    tconteomillisoff4=millis();
      if(tconteomillisoff4>(tconteooff4+1000)){//ha pasado 1 segundo
        tconteooff4=millis();
        trestanteoff4=trestanteoff4-1;
      }
      
      if(trestanteoff4<1){
          procesobomba4=4;
          trestanteoff4=ttotaloff4;
          digitalWrite(bomba4,HIGH);            
        }
}

if(procesobomba4==4){ /////////////////////////////////////////////// si bomba 3 está en periodo final On
    tconteomillison4=millis();
      if(tconteomillison4>(tconteoon4+1000)){//ha pasado 1 segundo
        tconteoon4=millis();
        trestanteon4=trestanteon4-1;
      }
      
      if(trestanteon4<1){
        ciclos4=ciclos4-1;
        cicloscentenas4=ciclos4/100;
        ciclosdecenas4=ciclos4/10;
        ciclosunidades4=ciclos4%10;
        
        if(ciclos4<1){
          ciclos4=1;
          ciclosunidades4=1;
          procesobomba4=0;
          digitalWrite(bomba4,LOW);
        }else{
          procesobomba4=3;
          digitalWrite(bomba4,LOW);
          trestanteon4=ttotalon4;         
        }            
        }
}
//////////////////////////////////////////////////////////////////////////////// control bomba 4



///////////////////////////////////////////////////////////////////////////////si se presiona botón para activar led1 
if(digitalRead(botonactivarparar)==LOW && elementoelegido==5){ 
  delay(antirebote);
  if(procesoled1==0 && trestanteon5>2){ //debe estar apagada y cumplir con condiciones iniciales
    switch(onoff5){

      case 0: //Si inicia Off
      procesoled1=3;
      digitalWrite(led1,LOW);
      break; //break de inicia off
      
      case 1: //Si inicia On
      procesoled1=1;
      digitalWrite(led1,HIGH);
      break; //break de inicia on
      
    }
  }
}

if(procesoled1==1){ /////////////////////////////////////////////// si led1 está en periodo inicial On
    tconteomillison5=millis();
      if(tconteomillison5>(tconteoon5+1000)){//ha pasado 1 segundo
        tconteoon5=millis();
        trestanteon5=trestanteon5-1;
      }
      
      if(trestanteon5<1){
          procesoled1=2;
          trestanteon5=ttotalon5;
          digitalWrite(led1,LOW);            
        }
}

if(procesoled1==2){ /////////////////////////////////////////////// si bomba 4 está en periodo final Off
    tconteomillisoff5=millis();
      if(tconteomillisoff5>(tconteooff5+1000)){//ha pasado 1 segundo
        tconteooff5=millis();
        trestanteoff5=trestanteoff5-1;
      }
      
      if(trestanteoff5<1){
        ciclos5=ciclos5-1;
        cicloscentenas5=ciclos5/100;
        ciclosdecenas5=ciclos5/10;
        ciclosunidades5=ciclos5%10;
        
        if(ciclos5<1){
          procesoled1=0;
          ciclos5=1;
          ciclosunidades5=1;
          digitalWrite(led1,LOW);
        }else{
          procesoled1=1;
          digitalWrite(led1,HIGH);
          trestanteoff5=ttotaloff5;         
        }            
        }
}

if(procesoled1==3){ /////////////////////////////////////////////// si bomba 4 está en periodo inicial Off
    tconteomillisoff5=millis();
      if(tconteomillisoff5>(tconteooff5+1000)){//ha pasado 1 segundo
        tconteooff5=millis();
        trestanteoff5=trestanteoff5-1;
      }
      
      if(trestanteoff5<1){
          procesoled1=4;
          trestanteoff5=ttotaloff5;
          digitalWrite(led1,HIGH);            
        }
}

if(procesoled1==4){ /////////////////////////////////////////////// si bomba 3 está en periodo final On
    tconteomillison5=millis();
      if(tconteomillison5>(tconteoon5+1000)){//ha pasado 1 segundo
        tconteoon5=millis();
        trestanteon5=trestanteon5-1;
      }
      
      if(trestanteon5<1){
        ciclos5=ciclos5-1;
        cicloscentenas5=ciclos5/100;
        ciclosdecenas5=ciclos5/10;
        ciclosunidades5=ciclos5%10;
        
        if(ciclos5<1){
          ciclos5=1;
          ciclosunidades5=1;
          procesoled1=0;
          digitalWrite(led1,LOW);
        }else{
          procesoled1=3;
          digitalWrite(led1,LOW);
          trestanteon5=ttotalon5;         
        }            
        }
}
//////////////////////////////////////////////////////////////////////////////// control led1


///////////////////////////////////////////////////////////////////////////////si se presiona botón para activar led1 
if(digitalRead(botonactivarparar)==LOW && elementoelegido==6){ 
  delay(antirebote);
  if(procesoled2==0 && trestanteon6>2){ //debe estar apagada y cumplir con condiciones iniciales
    switch(onoff6){

      case 0: //Si inicia Off
      procesoled2=3;
      digitalWrite(led2,LOW);
      break; //break de inicia off
      
      case 1: //Si inicia On
      procesoled2=1;
      digitalWrite(led2,HIGH);
      break; //break de inicia on
      
    }
  }
}

if(procesoled2==1){ /////////////////////////////////////////////// si led1 está en periodo inicial On
    tconteomillison6=millis();
      if(tconteomillison6>(tconteoon6+1000)){//ha pasado 1 segundo
        tconteoon6=millis();
        trestanteon6=trestanteon6-1;
      }
      
      if(trestanteon6<1){
          procesoled2=2;
          trestanteon6=ttotalon6;
          digitalWrite(led2,LOW);            
        }
}

if(procesoled2==2){ /////////////////////////////////////////////// si bomba 4 está en periodo final Off
    tconteomillisoff6=millis();
      if(tconteomillisoff6>(tconteooff6+1000)){//ha pasado 1 segundo
        tconteooff6=millis();
        trestanteoff6=trestanteoff6-1;
      }
      
      if(trestanteoff6<1){
        ciclos6=ciclos6-1;
        cicloscentenas6=ciclos6/100;
        ciclosdecenas6=ciclos6/10;
        ciclosunidades6=ciclos6%10;
        
        if(ciclos6<1){
          procesoled2=0;
          ciclos6=1;
          ciclosunidades6=1;
          digitalWrite(led2,LOW);
        }else{
          procesoled2=1;
          digitalWrite(led2,HIGH);
          trestanteoff6=ttotaloff6;         
        }            
        }
}

if(procesoled2==3){ /////////////////////////////////////////////// si bomba 4 está en periodo inicial Off
    tconteomillisoff6=millis();
      if(tconteomillisoff6>(tconteooff6+1000)){//ha pasado 1 segundo
        tconteooff6=millis();
        trestanteoff6=trestanteoff6-1;
      }
      
      if(trestanteoff6<1){
          procesoled2=4;
          trestanteoff6=ttotaloff6;
          digitalWrite(led2,HIGH);            
        }
}

if(procesoled2==4){ /////////////////////////////////////////////// si led2 está en periodo final On
    tconteomillison6=millis();
      if(tconteomillison6>(tconteoon6+1000)){//ha pasado 1 segundo
        tconteoon6=millis();
        trestanteon6=trestanteon6-1;
      }
      
      if(trestanteon6<1){
        ciclos6=ciclos6-1;
        cicloscentenas6=ciclos6/100;
        ciclosdecenas6=ciclos6/10;
        ciclosunidades6=ciclos6%10;
        
        if(ciclos6<1){
          ciclos6=1;
          ciclosunidades6=1;
          procesoled2=0;
          digitalWrite(led2,LOW);
        }else{
          procesoled2=3;
          digitalWrite(led2,LOW);
          trestanteon6=ttotalon6;         
        }            
        }
}
//////////////////////////////////////////////////////////////////////////////// control led2



//////////////////////////////////////////////////////////////////////////////////////// si se presiona boton apagar
if(digitalRead(botonapagar)==LOW){
  switch(elementoelegido){
  
    case 1:
    digitalWrite(bomba1,LOW);
    unidades1=0;
    decenas1=0;
    centenas1=0;
    unidadesdemil1=0;
    decenasdemil1=0;
    centenasdemil1=0;
    segundoson1=0;
    minutoson1=0;
    horason1=0;
    segundosunidadeson1=0;
    segundosdecenason1=0;
    minutosunidadeson1=0;
    minutosdecenason1=0;
    horasunidadeson1=0;
    horasdecenason1=0;
    segundosoff1=0;
    minutosoff1=0;
    horasoff1=0;
    segundosunidadesoff1=0;
    segundosdecenasoff1=0;
    minutosunidadesoff1=0;
    minutosdecenasoff1=0;
    horasunidadesoff1=0;
    horasdecenasoff1=0;
    ciclos1=1;
    ciclosunidades1=1;
    ciclosdecenas1=0;
    cicloscentenas1=0;
    tconteomillison1=0;
    tconteomillisoff1=0;
    tconteoon1=0;
    tconteooff1=0;
    ttotalon1=0;
    trestanteon1=0;
    ttotaloff1=0;
    trestanteoff1=0;
    onoff1=1; //periodo que inicia 0=apagado, 1=encendido
    procesobomba1=0; // 0 apagada, 1 on inicia, 2 off termina, 3 off inicia, 4 on termina
    v1=0.0;   //Voltaje bomba 1
    break; 

    case 2:
    digitalWrite(bomba2,LOW);
    unidades2=0;
    decenas2=0;
    centenas2=0;
    unidadesdemil2=0;
    decenasdemil2=0;
    centenasdemil2=0;
    segundoson2=0;
    minutoson2=0;
    horason2=0;
    segundosunidadeson2=0;
    segundosdecenason2=0;
    minutosunidadeson2=0;
    minutosdecenason2=0;
    horasunidadeson2=0;
    horasdecenason2=0;
    segundosoff2=0;
    minutosoff2=0;
    horasoff2=0;
    segundosunidadesoff2=0;
    segundosdecenasoff2=0;
    minutosunidadesoff2=0;
    minutosdecenasoff2=0;
    horasunidadesoff2=0;
    horasdecenasoff2=0;
    ciclos2=1;
    ciclosunidades2=1;
    ciclosdecenas2=0;
    cicloscentenas2=0;
    tconteomillison2=0;
    tconteomillisoff2=0;
    tconteoon2=0;
    tconteooff2=0;
    ttotalon2=0;
    trestanteon2=0;
    ttotaloff2=0;
    trestanteoff2=0;
    onoff2=1; 
    procesobomba2=0; 
    v2=0.0;
    break; 

    case 3:
    digitalWrite(bomba3,LOW);
    unidades3=0;
    decenas3=0;
    centenas3=0;
    unidadesdemil3=0;
    decenasdemil3=0;
    centenasdemil3=0;
    segundoson3=0;
    minutoson3=0;
    horason3=0;
    segundosunidadeson3=0;
    segundosdecenason3=0;
    minutosunidadeson3=0;
    minutosdecenason3=0;
    horasunidadeson3=0;
    horasdecenason3=0;
    segundosoff3=0;
    minutosoff3=0;
    horasoff3=0;
    segundosunidadesoff3=0;
    segundosdecenasoff3=0;
    minutosunidadesoff3=0;
    minutosdecenasoff3=0;
    horasunidadesoff3=0;
    horasdecenasoff3=0;
    ciclos3=1;
    ciclosunidades3=1;
    ciclosdecenas3=0;
    cicloscentenas3=0;
    tconteomillison3=0;
    tconteomillisoff3=0;
    tconteoon3=0;
    tconteooff3=0;
    ttotalon3=0;
    trestanteon3=0;
    ttotaloff3=0;
    trestanteoff3=0;
    onoff3=1; 
    procesobomba3=0; 
    v3=0.0;
    break; 

    
    case 4:
    digitalWrite(bomba4,LOW);
    unidades4=0;
    decenas4=0;
    centenas4=0;
    unidadesdemil4=0;
    decenasdemil4=0;
    centenasdemil4=0;
    segundoson4=0;
    minutoson4=0;
    horason4=0;
    segundosunidadeson4=0;
    segundosdecenason4=0;
    minutosunidadeson4=0;
    minutosdecenason4=0;
    horasunidadeson4=0;
    horasdecenason4=0;
    segundosoff4=0;
    minutosoff4=0;
    horasoff4=0;
    segundosunidadesoff4=0;
    segundosdecenasoff4=0;
    minutosunidadesoff4=0;
    minutosdecenasoff4=0;
    horasunidadesoff4=0;
    horasdecenasoff4=0;
    ciclos4=1;
    ciclosunidades4=1;
    ciclosdecenas4=0;
    cicloscentenas4=0;
    tconteomillison4=0;
    tconteomillisoff4=0;
    tconteoon4=0;
    tconteooff4=0;
    ttotalon4=0;
    trestanteon4=0;
    ttotaloff4=0;
    trestanteoff4=0;
    onoff4=1; 
    procesobomba4=0; 
    v4=0.0;
    break; 

    case 5:
    digitalWrite(led1,LOW);
    segundoson5=0;
    minutoson5=0;
    horason5=0;
    segundosunidadeson5=0;
    segundosdecenason5=0;
    minutosunidadeson5=0;
    minutosdecenason5=0;
    horasunidadeson5=0;
    horasdecenason5=0;
    segundosoff5=0;
    minutosoff5=0;
    horasoff5=0;
    segundosunidadesoff5=0;
    segundosdecenasoff5=0;
    minutosunidadesoff5=0;
    minutosdecenasoff5=0;
    horasunidadesoff5=0;
    horasdecenasoff5=0;
    ciclos5=1;
    ciclosunidades5=1;
    ciclosdecenas5=0;
    cicloscentenas5=0;
    tconteomillison5=0;
    tconteomillisoff5=0;
    tconteoon5=0;
    tconteooff5=0;
    ttotalon5=0;
    trestanteon5=0;
    ttotaloff5=0;
    trestanteoff5=0;
    onoff5=1; 
    procesoled1=0; 
    break; 

    case 6:
    digitalWrite(led2,LOW);
    segundoson6=0;
    minutoson6=0;
    horason6=0;
    segundosunidadeson6=0;
    segundosdecenason6=0;
    minutosunidadeson6=0;
    minutosdecenason6=0;
    horasunidadeson6=0;
    horasdecenason6=0;
    segundosoff6=0;
    minutosoff6=0;
    horasoff6=0;
    segundosunidadesoff6=0;
    segundosdecenasoff6=0;
    minutosunidadesoff6=0;
    minutosdecenasoff6=0;
    horasunidadesoff6=0;
    horasdecenasoff6=0;
    ciclos6=1;
    ciclosunidades6=1;
    ciclosdecenas6=0;
    cicloscentenas6=0;
    tconteomillison6=0;
    tconteomillisoff6=0;
    tconteoon6=0;
    tconteooff6=0;
    ttotalon6=0;
    trestanteon6=0;
    ttotaloff6=0;
    trestanteoff6=0;
    onoff6=1; 
    procesoled2=0; 
    break;     
    
  }
}


}
