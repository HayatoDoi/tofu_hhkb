# TOFU_HHKB

## build
```bash
git clone https://github.com/qmk/qmk_firmware
git clone https://github.com/HayatoDoi/tofu_hhkb keyboards/tofu_hhkb

make tofu_hhkb:default
```

## install
```bash
dfu-programmer atmega32u4 erase
sudo dfu-programmer atmega32u4 flash ./tofu_hhkb_default.hex
```