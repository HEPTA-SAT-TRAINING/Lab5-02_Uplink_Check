# Lab5-02: Uplink Check

Firmware that echoes uplink commands and downlinks a 1-second count over XBee COM.

## Web Serial Monitor

Open in **Chrome or Edge**, then **Add Port** → **Connect** (38400 baud):

**https://hepta-sat-training.github.io/hepta-serial-viewer/**

Type a character in the input bar and press **Enter** to send an uplink command. The satellite echoes `command = ...` in the output pane.

## Firmware

Open `Lab5-02_Uplink_Check.ino` in the Arduino IDE and upload to your board. For library and submodule setup, see [src/README.md](src/README.md).
