#ifndef PORTUGUESENXC__H
#define PORTUGUESENXC__H 1
#include "PortugueseNXC.nxc"

//Tarefa Principal
#define tarefa task
#define principal main()

//Argumentos Lógicos
#define verdadeiro 1
#define falso 0

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
#define LINHA_1 LCD_LINE1
#define LINHA_2 LCD_LINE2
#define LINHA_3 LCD_LINE3
#define LINHA_4 LCD_LINE4
#define LINHA_5 LCD_LINE5
#define LINHA_6 LCD_LINE6
#define LINHA_7 LCD_LINE7
#define LINHA_8 LCD_LINE8

//Tipos de Variáveis
#define funcao void
#define inteiro int
#define logico bool
#define decimal float
#define cadeia string
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
#define repita(x) for(int counter = 0; counter < x; counter++)
#define loop while(true)

//Operadores Relacionais
#define igual ==
#define maior >
#define maior_igual >=
#define menor <
#define menor_igual <=
#define diferente !=

//Operadores Lógicos
#define e &&
#define ou ||

//Radiciação
#define Raiz(num) Sqrt(num);

//---------------Comandos---------------------

//Motor
#define Parar(port) Off(port);
#define PararSuave(port) Float(port);
#define ParaTras(port, pwr) OnRev(port, pwr);
#define ParaTrasEx(port, pwr, turnpct) OnRevSync(port, pwr, turnpct);
#define ParaFrente(port, pwr) OnFwd(port, pwr);
#define ParaFrenteEx(port, pwr, turnpct) OnFwdSync(port, pwr, turnpct);
#define GirarMotor(port, pwr, degrees) RotateMotor(port, pwr, degrees);
#define GirarMotorEx(port, pwr, degrees, turnpct) RotateMotorEx(port, pwr, degrees, turnpct, true, true);

//Espere
#define Espere(time) Wait(time * 1000);
#define EsperePor(logic_op) until(logic_op);

//Display
#define LimparTela() ClearScreen();
#define ImprimirNum(x, y, num) NumOut(x, y, num);
#define ImprimirTexto(x, y, text) TextOut(x, y, text);
#define ImprimirImg(x, y, file_name) GraphicOut(x, y, file_name);

//String
#define NumParaCadeia(num) NumToStr(num);
#define TamanhoDaCadeia(str) StrLen(str);

//Sensor
#define SensorDeLuz(port) SetSensorLight(port);
#define SensorDeSom(port) SetSensorSound(port);
#define SensorDeToque(port) SetSensorTouch(port);
#define SensorUltrassonico(port) SetSensorLowspeed(port);

#endif // PORTUGUESENXC__H