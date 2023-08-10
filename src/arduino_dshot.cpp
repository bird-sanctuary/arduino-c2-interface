#include "Arduino.h"
#include "C2.h"

/*
// When using Port B
// Port definitions for Port B
#define C2_PORT PORTB
#define C2_DDR DDRB
#define C2_PIN PINB

// Pin 0-7 for the given port
#define C2D_PIN  4 // D12
#define C2CK_PIN 3 // D11
*/

// Port definitions for Port D
#define C2_PORT PORTD
#define C2_DDR DDRD
#define C2_PIN PIND

/* Pin 0-7 for the given port */
#define C2D_PIN  2 // D2
#define C2CK_PIN 3 // D3

C2 *c2;

void setup() {
  c2 = new C2(&C2_PORT, &C2_DDR, &C2_PIN, (uint8_t) C2CK_PIN, (uint8_t) C2D_PIN, (uint8_t) LED_BUILTIN);
  c2->setup();
}

void loop() {
  c2->loop();
}
