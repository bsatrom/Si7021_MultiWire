// Example usage for Si7021_MultiWire library by Brandon Satorm <brandon@particle.io>.

#include "Si7021_MultiWire.h"

// Initialize objects from the lib
Si7021_MultiWire sensor = Si7021_MultiWire(Wire1);

// Connect Vin to 3-5VDC
// Connect GND to ground
// Connect SCL to I2C clock pin (D1 on Photon/Electron)
// Connect SDA to I2C data pin  (D0 on Photon/Electron)

void setup()
{
    Serial.begin(115200);

    // pinMode(C5, INPUT);
    Serial.println("Si7021 test");
    Serial.println(sensor.begin());
}

void loop()
{
    Serial.print("Humidity:    ");
    Serial.print(sensor.getRH(), 2);
    Serial.print("\tTemperature: ");
    Serial.println(sensor.readTempF(), 2);
    delay(100);
}
