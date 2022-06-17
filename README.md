# Platformio Arduino on the MCH2022 badge

This repo contains instructions and code to run Arduino code via platformio on the MCH2022 badge.

## Installing the toolchains
Install platformio via VScode or via command line on Linux.

```
https://docs.platformio.org/en/latest//core/installation/methods/installer-script.html
```

Make sure that the udev knows how to access the badge. (https://github.com/badgeteam/mch2022-firmware-esp32#linux-permissions) 

Install the python3-usb package for webusb to work. 

## Running the code

Change directory to this repository

### Building

Build this project with: 
```
pio run 
```

### Uploading and running

```
./tools/webusb_push.py hello_pio .pio/build/esp32dev/firmware.bin
```
Do not use the regular upload command because it will overwrite the MCH
launcher. Therefore it is disabled in the `platformio.ini`
Connect a serial terminal emulation program with 115200 baud to `/dev/ttyACM0`
or run:

```
pio run -t monitor 
```
Then select the app from the launcher. 

## Resources
You can find the latest webusb tools in the [mch2022-firmware/tools](https://github.com/badgeteam/mch2022-firmware-esp32/tree/master/tools) directory. 

