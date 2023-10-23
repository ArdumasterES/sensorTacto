#include "CapacitiveSensor.h"

const long umbral=400;
CapacitiveSensor capSensor(2,12);

void setup() {
  Serial.begin(9600);
  capSensor.set_CS_AutocaL_Millis(0xFFFFFFFF);
}

void loop() {
  long valor=capSensor.capacitiveSensor(50);
  Serial.print("Valor: ");
  Serial.print(valor);
  Serial.print("; Activación: ");
  Serial.println(valor>umbral);
}
