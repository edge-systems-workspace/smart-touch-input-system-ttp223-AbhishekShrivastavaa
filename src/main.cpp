#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Touch Detection System using TTP223
 * @author Abhishek Shrivastava
 * @date 2026-02-28
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured ouput via Serial Monitor.
 */

// Define touch sensor digital pin (Use pin 2)
#define TOUCH_PIN 2

// Create variable to store touch state
int touchState = 0;

void setup() {

    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // Configure touch pin as INPUT
    pinMode(TOUCH_PIN, INPUT);

    // Print system initialization message
    Serial.println("TTP223 Touch Detection System Initialized");
}

void loop() {

    // Read digital value from touch sensor
    touchState = digitalRead(TOUCH_PIN);

    // If touch detected (HIGH)
    if (touchState == HIGH) {
        Serial.println("Touch Detected");
    } else {
        Serial.println("No Touch");
    }

    // Add small delaay (200–500ms)
    delay(300);
}
