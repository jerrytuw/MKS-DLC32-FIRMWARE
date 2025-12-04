# 1 "C:\\Users\\jerry\\AppData\\Local\\Temp\\tmpf0zpkrqn"
#include <Arduino.h>
# 1 "E:/github/MKS-DLC32-FIRMWARE/Firmware/Grbl_Esp32/Grbl_Esp32.ino"
# 21 "E:/github/MKS-DLC32-FIRMWARE/Firmware/Grbl_Esp32/Grbl_Esp32.ino"
#include "src/Grbl.h"
void setup();
void loop();
#line 23 "E:/github/MKS-DLC32-FIRMWARE/Firmware/Grbl_Esp32/Grbl_Esp32.ino"
void setup() {
    grbl_init();
}

void loop() {
  _mc_task_init();

  while(1) {

    run_once();

  }
}