[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/KzqfxGd5)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=22820226&assignment_repo_type=AssignmentRepo)
# Lab02 - Caracterización de osciladores (externo vs. interno)


## 1. Integrantes
* Joused Danilo Forero Rodriguez
* Laura Ximena Rojas Pachon
## 1.2 Materiales
* Microcontrolador PIC18F45K22
* Cristal de Cuarzo 16Mhz
* Capacitor de 22pF
* Led+Resistencia de 330Ω
* Entorno de programacion "MPLAB X IDE"
* Osciloscopio
* Protoboard
## 1.3 Introduccion
En este documento se vera reflejada la practica realizada sobre las distintas configuraciones que tiene la PIC18F45K22,donde se abordan diferentes configuraciones para seleccionar cada tipo de oscilador dentro del mismo modulo ya anteriormente nombrado el cual nos permitira elejir y configurar la frecuencia con distintos tipos de circuitos.

## 2. Documentación
# PACTICA:Oscilador Interno:
En esta practica se configuro la PIC18F45K22 mediante el programa de "MPLAB X IDE" para poder lograr que funcione el oscilador interno con una frecuencia de 16Mhz asi mismo se visualizo dicha frecuancia en relacion habilidando una salida del modulo para poder ver el resultado en un led acompañado de una resisitencia de 330Ω.
# Montaje:
* Se Utilizo el oscilador interno del modulo para asi mismo habilitar una salida para un led y una resistencia de 330Ω para limitar la corriente.
* Se Utilizo como simulacion el programa de proteus y Mplab para poder configurar el modulo.
# PRACTICA:Oscilador Externo(Cristal de Cuarzo):
En esta practica se configuro la PIC18F45K22 mediante el programa de "MPLAB X IDE" para poder lograr que funcione el oscilador externo es decir se utilizo un oscilador externo ya que utilizamos un "Cristal de cuarzo" de 16Mhz y asi mismo poder comprender como el modulo puede interpretar un oscilador interno y uno externo.
# Montaje:
* Se Utilizo el oscilador externo de 16Mhz de cristal de caurzo para asi el modulo pueda interpretar el oscilador externo ademas de eso habilitamos una salida para poder visualizar el resutaldo con un led y resistencia de 330Ω para limitar la corriente.
* Se Utilizo como simulacion el programa de proteus y Mplab para poder configurar el modulo.
# PACTICA:Oscilador RC:
En esta practica se configuro la PIC18F45K22 mediante el programa de "MPLAB X IDE" para que el Microcontrolador pueda recibir las oscilaciones gracias al circuito rc donde logramos poder tener una frecuencia y asi mismo poder visualizarla en el led
# Montaje:
* Se Utilizo el oscilador rc realizado un una resistencia y un capacitor de 27pF ademas de eso la visualizacion de la frecuencia estaba en un led junto a una resistencia de 330Ω para limitar la corriente
* Se Utilizo como simulacion el programa de proteus y Mplab para poder configurar el Microcontrolador.

### 2.1 Descripción del laboratorio
Se debio configurar el Microcontrolador PIC18K45K22 de tal manera que se puedieran cambiar los modos del oscilador es decir se pudieran cambiar los modos de oscilador interno y esterno ademas de eso en la programacion adecuar el programa de tal manera que tambien habilite una salida el cual sera conectada junto aun led y resistencia poder visualizar la frecuencia que esta entregando junto a todo esto tomar varias mediciones tales como la del oscilador interno oscilado externo y oscilador rc toamr medidas con el oscilador y tener en cuenta las simulaciones para poder ver el resultado esperado.

### 2.2 Explicación del código implementado
Se configuraba el OSCCON: OSCILLATOR CONTROL REGISTER de tal manera que dependiendo de los bits determinabamos como el Microcontrolador iba a interpretar las diferentes configuraciones es decir en el primer codigo se configuraba de tal manera que puediera utilizar el interno despues el externo y asi sucecivamente todo estba incorporado a un ciclo while el cual siempre estaba activo ademas de eso habilitabamos un pin de salida el cual posteriormente seria conectado junto a un red y resistencia claramente el pin de salida estaba en cooreclacon a la frecuencia que estuviera entregando el oscilador de las diferentes configuraciones

### 2.3 Análisis y comparación

#### Tabla 1: Medición en frío

| Modo de oscilador | Freq. teórica Fosc | RA6 medible (CLKO)? | Freq. medida RA6 (Hz) | Freq. teórica RC0 (Hz)| Freq. medida RC0 (Hz) | Error RC0 (%) |  
|------------------|------------------|---------------------|---------------|---------------------|---------------|---------------|
| INTOSC (interno) | 16,000,000       | Sí                 |                     |                500                 |              |               | |
| HS (cristal externo 16 MHz) | 16,000,000 | No |     NA      |               500                 |               |        499.93       | 0.014%
| RC externo       | ~16,000,000*     | No                                    |       N/A        | 500                 |               |               | |

#### Tabla 2: Medición con calor

| Modo de oscilador | Freq. teórica Fosc | RA6 medible (CLKO)? | Freq. medida RA6 (Hz) | Freq. teórica RC0 (Hz)| Freq. medida RC0 (Hz) | Error RC0 (%) |  
|------------------|------------------|---------------------|---------------|---------------------|---------------|---------------|
| INTOSC (interno) | 16,000,000       | Sí                 |                     |                500                 |              |               | |
| HS (cristal externo 16 MHz) | 16,000,000 | No |     NA      |               500                 |               |      500.58         |  0.116%
| RC externo       | ~16,000,000*     | No                                    |       N/A        | 500                 |               |               | |

#### Tabla 3: Deriva

| Modo de oscilador |RC0 deriva (Hz) |
|------------------|--------------------|
| INTOSC (interno) |                    |                
| HS (cristal externo 16 MHz) |                |                |
| RC externo       |                 |                


<!-- Agregar tablas para valores usando PLL -->

<!-- Complemente con análisis de lo registrado en tablas -->

## 2.4 Diagramas

## 2.5 Formas de onda

### INTOSC (interno) 


### HS

## RC

## 3. Evidencias de implementación

## 4. Preguntas

* ¿En qué modo se obtuvo la medición más cercana a la frecuencia teórica?

* ¿Fue posible evidenciar el fenómeno de deriva? ¿Qué factores podrían explicar la variación de frecuencia al calentar el PIC?

* ¿Cuál es más preciso en cuanto a frecuencia teórica vs. medida?


* Explique cómo usar RC0 para estimar la frecuencia del oscilador cuando RA6 no está disponible.

* Si se quisiera duplicar la frecuencia del PIC usando PLL, ¿en qué modos se podría aplicar?

* Enliste ventajas y desventajas de cada modo.

## 5. Referencias
