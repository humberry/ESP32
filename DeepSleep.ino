#include "esp_deep_sleep.h"

void setup(){
  //do something important
  
  //goto sleep until GPIO39 or GPIO34 change from low to high
  const uint64_t mask = (1ULL << 39) | (1ULL << 34);
  esp_deep_sleep_enable_ext1_wakeup(mask, ESP_EXT1_WAKEUP_ANY_HIGH);
  esp_deep_sleep_start();
}

void loop(){
  //will never be executed
}

//Hint: I had to unsolder the CP2102, LED and AMS1117 to get a sleep current < 25uA
