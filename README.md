```
██████╗ ██╗   ██╗███╗   ███╗██████╗  ██████╗  █████╗ ██████╗ ██████╗ 
██╔══██╗╚██╗ ██╔╝████╗ ████║██╔══██╗██╔═══██╗██╔══██╗██╔══██╗██╔══██╗
██████╔╝ ╚████╔╝ ██╔████╔██║██████╔╝██║   ██║███████║██████╔╝██║  ██║
██╔═══╝   ╚██╔╝  ██║╚██╔╝██║██╔══██╗██║   ██║██╔══██║██╔══██╗██║  ██║
██║        ██║   ██║ ╚═╝ ██║██████╔╝╚██████╔╝██║  ██║██║  ██║██████╔╝
╚═╝        ╚═╝   ╚═╝     ╚═╝╚═════╝  ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ 
                                                                        
                         ██╗██╗  ██╗██╗  ██╗
                        ███║╚██╗██╔╝██║  ██║
                        ╚██║ ╚███╔╝ ███████║
                         ██║ ██╔██╗ ╚════██║
                         ██║██╔╝ ██╗     ██║
                         ╚═╝╚═╝  ╚═╝     ╚═╝
```

A 4-key macropad using the Seeed XIAO RP2040 with VIAL support.

**Website:** https://pymmog.com

## Pinout

| Key | GPIO Pin | XIAO Pin Label |
|-----|----------|----------------|
| 1   | GP1      | D7 / SCK       |
| 2   | GP2      | D8 / MISO      |
| 3   | GP4      | D10 / CS       |
| 4   | GP3      | D9 / MOSI      |

<img width="2178" height="873" alt="Image" src="https://github.com/user-attachments/assets/09a9de56-1b5e-4301-b923-fd0e8e227156" />

**Note:** Connect one terminal of each switch to the GPIO pin and the other terminal to GND.

## 3D Printed Case

The case for this project is a 3D printed enclosure designed by **[@CopyRited](https://www.github.com/CopyRited)** on **[Printables](https://www.printables.com/@CopyRited)**.

## Installation

### Pre-compiled Firmware (Recommended)

The easiest way to get your PymBoard 1x4 running is to use the pre-compiled firmware file.

1. Download the pre-compiled firmware: `pymboard_1x4.uf2`
2. Skip to the flashing instructions below

### Building from Source

If you prefer to build the firmware yourself:

1. Clone vial-qmk repository:
   ```bash
   git clone https://github.com/vial-kb/vial-qmk.git
   cd vial-qmk
   git submodule update --init --recursive
   ```

2. Set up QMK environment:
   ```bash
   qmk setup
   ```

3. Copy the `pymboard_1x4` folder to `vial-qmk/keyboards/`

4. Build the firmware:
   ```bash
   qmk compile -kb pymboard_1x4 -km vial
   ```

5. The output file will be: `pymboard_1x4.uf2`

### Flashing
1. Enter bootloader mode on the XIAO RP2040:
   - Hold the **BOOT** button
   - While holding BOOT, press and release the **RESET** button
   - Release the BOOT button
   - A USB drive named "RPI-RP2" will appear

2. Copy the `.uf2` file to the RPI-RP2 drive

3. The XIAO will automatically reboot with the new firmware

## Using VIAL

<img width="1127" height="768" alt="Image" src="https://github.com/user-attachments/assets/3e8427c9-9d38-4d18-97fb-af6b80414904" />

1. Download VIAL from https://get.vial.today
2. Connect your macropad
3. VIAL should automatically detect the keyboard
4. Customize your keys, macros, and layers!

## Unlock Combo

To unlock VIAL for sensitive operations, press **Key 1 + Key 4** simultaneously.

## Default Keymap

| Key 1    | Key 2      | Key 3      | Key 4    |
|----------|------------|------------|----------|
| Mute     | Vol Down   | Vol Up     | Play     |

## Features
- 4 configurable layers
- Full VIAL support (no JSON sideloading needed)
- Real-time key remapping
- Macro support

---

**Disclaimer:** This README.md was partially generated with AI assistance.
