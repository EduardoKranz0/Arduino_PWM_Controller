#include <Arduino.h>

int EN1 = 9;
int IN1 = 8;
int IN2 = 7;
int botao = 2;

int velocidade = 0;

void setup() {
    pinMode(EN1, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(botao, INPUT);

    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
}

void loop() {

    if (digitalRead(botao) == HIGH) {

        velocidade += 50;

        if (velocidade > 255) {
            velocidade = 0;
        }

        analogWrite(EN1, velocidade);

        delay(300);
    }
}