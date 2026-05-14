# Arduino PWM Controller

## Introdução ao PWM

PWM (Pulse Width Modulation) é uma técnica utilizada para controlar potência média aplicada em dispositivos eletrônicos através de sinais digitais.

Neste projeto, o PWM é utilizado para controlar a velocidade de um motor DC utilizando Arduino Nano e o CI L293D.

---

## Componentes necessários

- Arduino Nano
- CI L293D
- Motor DC
- Botão Push Button
- Resistor 10kΩ
- Fonte 5V
- Jumpers
- Protoboard

---

## Esquemático

O circuito foi desenvolvido no Proteus utilizando:
- Arduino Nano
- Driver L293D
- Motor DC
- Botão para controle de velocidade

Os arquivos do projeto estão na pasta:

```text
schematics/
```

---

## Código-fonte

O código-fonte do projeto está localizado em:

```text
src/main.cpp
```

O Arduino utiliza PWM para controlar a velocidade do motor através da função:

```cpp
analogWrite()
```

---

## Instruções de montagem

1. Conectar o Arduino Nano ao L293D
2. Ligar o motor nas saídas OUT1 e OUT2
3. Alimentar o circuito com 5V
4. Conectar o botão ao pino D2
5. Compilar o código no PlatformIO
6. Carregar o arquivo firmware.hex no Proteus
7. Executar a simulação

---

## Funcionamento do projeto

O Arduino envia um sinal PWM para o pino EN1 do L293D.

Quando o botão é pressionado:
- a velocidade do motor aumenta gradativamente

O controle ocorre através da variação do duty cycle do PWM.

O motor pode operar em diferentes velocidades de acordo com o valor enviado pela função:

```cpp
analogWrite(EN1, velocidade);
```

O L293D atua como uma ponte H, permitindo que o Arduino controle o motor DC de forma segura.
