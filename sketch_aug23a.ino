int contador = 0;
bool dato = LOW;
bool datoAnterior = LOW;
float tiempoAnterior = 0;
float tiempo = 0;
float diferencia = 0;

void setup() {
pinMode(2,INPUT);
Serial.begin(9600);
}

void loop() {
 dato = digitalRead(2);
 if (dato == HIGH && datoAnterior == LOW)
 {
  tiempo=millis();
  contador++;
  diferencia = tiempo-tiempoAnterior;
  Serial.println(diferencia);
  tiempoAnterior=tiempo;
  
 }
 datoAnterior = dato;
}
