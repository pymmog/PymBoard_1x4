#pragma once

/* Vial configuration */
#define VIAL_KEYBOARD_UID {0x50, 0x59, 0x4D, 0x42, 0x4F, 0x41, 0x52, 0x44}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 3}

/* RP2040 specific settings */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

/* USB polling rate */
#define USB_POLLING_INTERVAL_MS 1

/* Debounce setting */
#define DEBOUNCE 5
