#include <Arduino.h>
#include <esp_system.h>
#include "soc/rtc.h"
#include "soc/rtc_cntl_reg.h"

void return_to_launcher() {
  REG_WRITE(RTC_CNTL_STORE0_REG, 0);
  esp_restart();
}

void setup() {
  Serial.begin(115200);
  Serial.println("Hello MCH2022!");

}


void loop() {
  static int i=0;
  
  delay(700);
  Serial.print("period no.: ");
  Serial.println(i++);
  if (i > 10)
  {
    return_to_launcher();
  }
}
