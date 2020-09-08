# LDR--Light-Depedent-Resistors
Whenever the LDR senses the light on to it the LED is off and when it does not sense the light the LED is switched on.

**Software:** Arduino IDE

**Hardware required:** <br>
 1. Node MCU <br>
 2. LDR module <br>
 3. 10k ohm Resistor <br>
 4. Jumper wires <br>
 5. Bread Board <br>

https://thingspeak.com/ - This is a website which is used for the analysis of the experiments done based on IOT(Internet of Things), Where in you can host your data or the output and examine the behaviour of the program to improve its performance.

**Steps to Execute:**

1. Thing speak account and a channel created in it

2. Open the Arduino IDE and go to Sketch >>Include library >>Manage libraries and download and install "Thingspeak" and go to Tools >>Board >>Board Manager and download the "node MCU" board if you are using it or else search for the board which you are using make sure it has  wifi module imbuilt with it

3. Set the board to "Generic ESP8266 Module" or see to which you are using

4. Go to File >>Preferences and in URL section paste the following link:
    http://arduino.esp8266.com/stable/package_esp8266com_index.json

5. When you create your channel in THINGSPEAK note your "channel number" and "API key" from your account and the channel your create and paste it in the code mentioned

6. Connect to the respective WiFi and password mentioned in the code which your are using and compile the code.

**Circuit:** <br>
![Circuit](/Assets/3.JPG) <br>

**LDR(Light Dependent Resistors):** <br>
![LDR](/Assets/2.jpg) <br>

**LED(Light Emitting Diode):** <br>
![LDR](/Assets/4.jpg)

