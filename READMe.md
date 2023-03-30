
MANIFESTO
The project deals with monitoring of variables of a farm using arguing that iot.
Primarily the working basis is that the farm is divided into portions and uses an irrigation system for this case we are using a drip system

The project includes five parts:
      i) Water tank level control
     ii) Soil moisture regulation individual to each plot.
    iii) Gate valve open regulation
     iv) Battery voltage level indicator
      v) IOT overall control system

WATER TANK LEVEL CONTROL
In this part a USS is attached to the top of the tank and standard measurements are taken for when the tank is empty and when full which will be used as a reference to know how full the tank is. The USS uses relative humidity of the environment to measure the distance, thus the need for the DHT sensor.
This variable will be used to either turn on/off the gate valve to fill the tank.
The components to be used are
     1) Ultra sonic sensor
     2) DHT temperature humidity sensor
     3) Stepping motor
     4) Gear shaft
     5) Arduino uno
     6) LIPO batteries 

SOIL MOISTURE REGULATION
A soil moisture sensor is connected to the arduino board.The desired soil moisture level are first predetermined then used as reference points. The data is the sent to the  gate valve regulation module
The components are
     1) Arduino uno
     2) Soil moisture sensor
     3) LIPO batteries

GATE VALVE REGULATION
In this module it receives data from the soil  moisture from its respective plot
The components are
     1) Arduino uno
     2) Stepper motor
     3) Gear shaft
     4) LIPO batteries

BATTERY VOLTAGE LEVEL INDICATOR 
This is a side component ro be integrated into the other parts of the project to monitor the Battery level.
Components required are
     1) 5 Leds
     2) 5 transistors
     3) resistors