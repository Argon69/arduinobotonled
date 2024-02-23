// Definición de pines
const int botonPin = 7; // Pin del botón
const int relePin = 2;  // Pin del relé

// Variables
int estadoBotonAnterior = HIGH; // Estado anterior del botón
int estadoMotor = LOW;           // Estado del motor

void setup() {
  // Configurar el pin del botón como entrada
  pinMode(botonPin, INPUT);
  // Configurar el pin del relé como salida
  pinMode(relePin, OUTPUT);
  // Inicializar el motor apagado
  digitalWrite(relePin, LOW);
}

void loop() {
  // Leer el estado actual del botón
  int estadoBoton = digitalRead(botonPin);

  // Si el botón ha sido presionado y no estaba presionado antes
  if (estadoBoton == LOW && estadoBotonAnterior == HIGH) {
    // Cambiar el estado del motor
    estadoMotor = !estadoMotor;
    // Encender o apagar el motor según el estado actual
    digitalWrite(relePin, estadoMotor);
    delay(50); // Retardo pequeño para evitar rebotes del botón
  }

  // Actualizar el estado anterior del botón
  estadoBotonAnterior = estadoBoton;
}
