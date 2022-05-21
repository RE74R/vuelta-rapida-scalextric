unsigned long tiempoTotal, ultimoPaso, tiempoVuelta;
unsigned long vueltaRapida = 190000;

void setup() {
Serial.begin (9600);
pinMode (10, INPUT);
pinMode (6,INPUT);
}
void muestra(){
  tiempoTotal = millis();
  tiempoVuelta = tiempoTotal-ultimoPaso;
  ultimoPaso = millis();
  if (tiempoVuelta<vueltaRapida){
    vueltaRapida=tiempoVuelta;
  }
  Serial.print ("paso: ");
  Serial.println(ultimoPaso);
  Serial.print ("tempo vuelta: ");
  Serial.println (tiempoVuelta);
  Serial.print ("Vuelta rápida: ");
  Serial.println(vueltaRapida);
  Serial.println ("*****************");
}
void loop() {
 if (digitalRead (10) == HIGH){
  muestra();
  delay (200);
 }
}
