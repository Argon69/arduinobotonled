# Control de Motor con Botón y Relé

Este proyecto consiste en un sistema que permite controlar el encendido y apagado de un motor utilizando un botón y un relé. Cuando se presiona el botón, el motor cambia su estado de encendido a apagado o viceversa.

## Componentes necesarios

- Arduino Uno (u otro modelo compatible)
- Botón pulsador
- Relé
- Motor
- Resistencias y cables de conexión

## Instalación y configuración

1. Conecta el botón pulsador al pin designado en el código como `botonPin` (por ejemplo, pin 7 en este caso).
2. Conecta el relé al pin designado como `relePin` (por ejemplo, pin 2 en este caso).
3. Conecta el motor al relé.
4. Sube el código proporcionado al Arduino utilizando el IDE de Arduino.

## Uso

- Al presionar el botón, el motor cambiará su estado de encendido a apagado o viceversa.
- Se utiliza un pequeño retardo para evitar rebotes del botón al cambiar el estado del motor.

## Personalización

- Puedes cambiar los pines asignados para el botón y el relé modificando las constantes `botonPin` y `relePin` en el código según sea necesario.
- Ajusta el retardo utilizado para evitar rebotes del botón modificando el valor en la función `delay()`.

## Contribuciones

¡Las contribuciones son bienvenidas! Si deseas mejorar este proyecto, por favor, siéntete libre de enviar pull requests o abrir issues para discutir nuevas ideas.

## Licencia

Este proyecto está bajo la Licencia [MIT](LICENSE).
