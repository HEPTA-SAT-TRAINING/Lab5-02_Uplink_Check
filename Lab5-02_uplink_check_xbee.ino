#include "src/HeptaSat.h"

HeptaCdh cdh;
HeptaCom com;

uint32_t count = 0;

void setup() {
  cdh.begin();
  cdh.wait_for_serial();

  com.begin(9600);

  cdh.println("XBee uplink check started (1 second interval)");
}

void loop() {
  if (com.available()) {
    char cmd = com.get_char();
    com.printf("command = %c\n", cmd);
    cdh.printf("command = %c\n", cmd);
  } else {
    count++;

    com.printf("%lu\n", (unsigned long)count);
    cdh.printf("count = %lu\n", (unsigned long)count);
  }

  delay(1000);
}
