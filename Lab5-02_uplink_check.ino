#include "src/HeptaSat.h"

HeptaCdh cdh;
HeptaCom com;

uint32_t count = 0;

void setup() {
  cdh.begin();

  com.begin();

  cdh.println("XBee uplink check started (1 second interval)");
}

void loop() {
  if (com.available()) {
    char cmd = com.get_char();
    com.printf("command = %c\r\n", cmd);
    cdh.printf("command = %c\r\n", cmd);
  } else {
    count++;

    com.printf("count from COM = %lu\r\n", (unsigned long)count);
    cdh.printf("count from CDH = %lu\r\n", (unsigned long)count);
  }

  delay(1000);
}
