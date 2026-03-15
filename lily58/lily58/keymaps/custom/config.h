// config.h - Lily58 RGB PandaKB - Custom keymap
// ============================================================

#pragma once

// ------------------------------------------------------------
// Split
// EE_HANDS : détection automatique du maître via EEPROM
// USE_SERIAL_PD2 : communication entre les deux moitiés
// ------------------------------------------------------------
#define EE_HANDS

// ------------------------------------------------------------
// Vial — conserver le même UID que l'original PandaKB
// ------------------------------------------------------------
#define VIAL_KEYBOARD_UID { 0x8F, 0xB8, 0x47, 0xEA, 0xA3, 0x5A, 0x5B, 0xDB }
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define VIAL_COMBO_ENTRIES 64
#define VIAL_KEY_OVERRIDE_ENTRIES 64
#define VIAL_TAP_DANCE_ENTRIES 64
#define DYNAMIC_KEYMAP_MACRO_COUNT 32
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 20480

// ------------------------------------------------------------
// Encodeurs rotatifs
// MCU : RP2040 — pins confirmées depuis le config.h PandaKB
// Gauche : GP29 (A) / GP28 (B)
// Droit  : GP28 (A) / GP29 (B)  ← inversé intentionnellement
// ------------------------------------------------------------
#define ENCODER_A_PINS        { GP29 }
#define ENCODER_B_PINS        { GP28 }
#define ENCODER_A_PINS_RIGHT  { GP28 }
#define ENCODER_B_PINS_RIGHT  { GP29 }
#define ENCODER_RESOLUTION    4

// ------------------------------------------------------------
// OLED
// ------------------------------------------------------------
#define OLED_TIMEOUT    60000   // extinction après 60s (ms)
#define OLED_BRIGHTNESS 128

// ------------------------------------------------------------
// Unicode — alphabet grec et symboles mathématiques
// Décommenter selon ton OS :
// ------------------------------------------------------------
//#define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE  // Windows + WinCompose
// #define UNICODE_SELECTED_MODES UNICODE_MODE_MACOS    // macOS
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX    // Linux (IBus/GTK)

// ------------------------------------------------------------
// RGB Matrix — paramètres de base (effets définis dans keyboard config.h)
// ------------------------------------------------------------
#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_TIMEOUT            300000  // extinction après 5min
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
    #define RGB_MATRIX_DEFAULT_VAL        128
#endif

// ------------------------------------------------------------
// Divers
// ------------------------------------------------------------
#define TAPPING_TERM 200
