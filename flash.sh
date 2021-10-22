#!/bin/bash

# st-flash write build/usb_audio_i2s.bin 0x8000000
openocd -s "/Applications/ARM dev/xpack-openocd" -f interface/stlink.cfg -f target/stm32f4x.cfg -c "program build/usb_audio_i2s.bin verify reset exit 0x8000000"
