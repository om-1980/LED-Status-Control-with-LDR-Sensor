An LDR sensor (Light Dependent Resistor) is a device that is used to detect light. It detects the light intensity. We use it to control the lights, when it is dark it detects light intensity and blows the lights. It is mainly used in mobiles for auto-brightness and smart street lights.

# Requirement
    * Arduino UNO / NODEMCU
    * LDR Sensor
    * LED
    * Jumper Wire
    * Breadboard

# Steps for LED Status Control with LDR Sensor
To control the status of an LED with an LDR sensor, follow these steps:
1. Connect the LDR (Light Dependent Resistor) sensor to an analog input pin of the microcontroller.
2. Connect the LED to a digital output pin of the microcontroller.
3. Read the analog value from the LDR sensor using the analog input pin.
4. Determine a threshold value based on the desired light intensity for LED activation.
5. Compare the analog value from the LDR sensor with the threshold value.
6. If the analog value is above the threshold, set the digital output pin to HIGH to turn on the LED. Otherwise, set it to LOW to turn off the LED.
7. Repeat this process in a loop to continuously monitor the light intensity and control the LED status according to the LDR sensor readings.

# Circuit Diagram
![Circuit](https://github.com/om-1980/LED-Status-Control-with-LDR-Sensor/assets/111452597/9ab875c7-1bd3-4e93-9c84-f97fefd456e5)
![Circuit1](https://github.com/om-1980/LED-Status-Control-with-LDR-Sensor/assets/111452597/cb3744a8-72d6-4e6a-93b1-16df6a6d1d80)


# Demo Link
https://www.tinkercad.com/things/l2zDMpdgSFL-led-status-control-with-ldr-sensor
