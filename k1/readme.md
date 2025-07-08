# Shorty K1

![Shorty K1 by hawtkeys.com](https://hawtkeys.com/wp-content/uploads/2025/06/12-crop2.png)

The Shorty K1 is a 3x1 customizable macropad designed for productivity, gaming, and creative workflows, featuring programmable keys and rotary knobs.

* Keyboard Maintainer: [Hawtkeys](https://github.com/hawtkeys)
* Hardware Supported: Raspberry Pi Pico, Hawtkeys Shorty Zero PCB
* Hardware Availability: [Available @ hawtkeys.com](https://hawtkeys.com)

Make example for this keyboard (after setting up your build environment):

    make shorty:default

Flashing example for this keyboard:

    make shorty:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Remap Config

* JSON schema reference: https://github.com/remap-keys/remap/blob/c0ef7ca3242883733b7c0a1b63a7b5407e16b62a/src/services/storage/assets/keyboard-definition-schema.json#L15

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available