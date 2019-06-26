# costycnc-esp8255-grbl
continuare da https://github.com/costycnc/costycnc-esp8285-esp8266-gcode-interpreter

esp8266 grbl only serial https://www.thingiverse.com/thing:2974763

gcode interpreter simple https://github.com/MarginallyClever/GcodeCNCDemo


Interacting with Grbl's Systems
Along with streaming a G-code program, there a few more things to consider when writing a GUI for Grbl, such as how to use status reporting, real-time control commands, dealing with EEPROM, and general message handling.

Status Reporting
When a ? character is sent to Grbl (no additional line feed or carriage return character required), it will immediately respond with something like <Idle,MPos:0.000,0.000,0.000,WPos:0.000,0.000,0.000> to report its state and current position. The ? is always picked-off and removed from the serial receive buffer whenever Grbl detects one. So, these can be sent at any time. Also, to make it a little easier for GUIs to pick up on status reports, they are always encased by <> chevrons.
