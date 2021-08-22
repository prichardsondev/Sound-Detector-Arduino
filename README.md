## **IoT Server: Raspberry Pi <-Serial Cable-> Arduino**

---

<p float="left">
  <img src="./img/arduino-sound.png" width="600" /> 
</p>

---
### Raspberry Pi code link below
https://github.com/prichardsondev/Sound-Detector-RaspberryPi.git <br />
    
### Description
Communication between Raspberry Pi and Arduino using Serial Cable <br/>
- Editor used: VS Code with Platformio<br/>
- Arduino: C++ <br/>
- Serial Communication: Direct Serial Cable

Code is kept simple - no actions are taken based on sound level or temp <br/>

My initial design was to:
- Note smoke detector
  - Kill power to stove
    - https://github.com/prichardsondev/RaspberryPiServer
  - Send me text message
  - Call my loved one
  - Find out smoke detector was being used a cook timer
  - Turn stove back on

---

### Video Overview
wip

---

### Hardware:
- Arduino Uno/other
- DHT 11 temp sensor
- Sparkfun Sound Detector
- Breadboad/Wires
  
---

#### To run:
- Add PlatformIO Extension to Visual Studio Code
- PlatformIO -> Projects -> Add -> Sound-Detector-Arduino
- Install Libraries
  - Adafruit DHT
  - ArduinoJSON
- Upload
- Note connect serial cable to Rasperrry Pi USB to see graph of data. Code link top </br>
  of this file


  


