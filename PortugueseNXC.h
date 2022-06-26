#ifndef PORTUGUESENXC__H
#define PORTUGUESENXC__H 1

//Tarefa Principal
#define tarefa task
#define principal main

//Argumentos Lógicos
#define verdadeiro true
#define falso true

//Constantes
#define PORTA_1 IN_1
#define PORTA_2 IN_2
#define PORTA_3 IN_3
#define PORTA_4 IN_4
#define PORTA_A OUT_A
#define PORTA_B OUT_B
#define PORTA_C OUT_C
#define PORTA_AB OUT_AB
#define PORTA_AC OUT_AC
#define PORTA_BC OUT_BC
#define LINHA1 LCD_LINE1
#define LINHA2 LCD_LINE2
#define LINHA3 LCD_LINE3
#define LINHA4 LCD_LINE4

//Tipos de Variáveis
#define funcao void
#define inteiro int
#define logico bool
#define decimal float
#define caractere char
#define constante const

//Estruturas Condicionais
#define se if
#define senao else
#define comparar switch
#define caso case

//Estruturas de Repetição
#define enquanto while
#define fazer do	
#define para for
#define sair break
#define repita(x) for(int counter = 0; counter < x; counter++);
#define loop() while(true);

//Operadores Relacionais
#define igual ==
#define maior >
#define maior_igual >=
#define menor <
#define menor_igual <=

//Operadores Lógicos
#define e &&
#define ou ||

//---------------Comandos---------------------

//Motor
#define Parar(port) Off(port);
#define PararSuave(port) Float(port);
#define ParaTras(port, pwr) OnRev(port, pwr);
#define ParaFrente(port, pwr) OnFwd(port, pwr);
#define ParaFrenteSinc(port, pwr, turnpct) OnFwdSync(port, pwr, turnpct);
#define ParaTrasSinc(port, pwr, turnpct) OnRevSync(port, pwr, turnpct);
#define GirarMotor(port, pwr, degrees) RotateMotor(port, pwr, degrees);
#define GirarMotorEx(port, pwr, degrees, turnpct) RotateMotorEx(port, pwr, degrees, turnpct, true, true);

//Espere
#define Espere(time) Wait(time * 1000);
#define EsperePor(logic_op) until(logic_op);

//Display
#define LimparTela() ClearScreen();
#define ImprimirNum(x, y, num) TextNum(x, y, num);
#define ImprimirTexto(x, y, text) TextOut(x, y, text);
#define ImprimirImg(x, y, file_name) GraphicOut(x, y, file_name);

//Sensor
#define SensorDeLuz(port) SetSensorLight(port);
#define SensorDeSom(port) SetSensorSound(port);
#define SensorDeToque(port) SetSensorTouch(port);
#define SensorUltrassonico(port) SetSensorLowspeed(port);

#endif // PORTUGUESENXC__H