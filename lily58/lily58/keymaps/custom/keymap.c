// ============================================================
// Lily58 RGB - PandaKB - Keymap custom
// Encodeurs : Layer 0 = onglets / scroll | Layer 1 = flèches
// OLED : gauche = Tetris / droite = infos layer + WPM
// ============================================================

#include QMK_KEYBOARD_H

// Layers
#define _MAIN  0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

// Raccourcis lisibles
#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)

// ============================================================
// MACROS PERSONNALISÉES
// ============================================================
enum custom_keycodes {
    // Alphabet grec minuscule
    GR_A = SAFE_RANGE,  // α
    GR_B,               // β
    GR_G,               // γ
    GR_D,               // δ
    GR_E,               // ε
    GR_Z,               // ζ
    GR_H,               // η
    GR_TH,              // θ
    GR_I,               // ι
    GR_K,               // κ
    GR_L,               // λ
    GR_M,               // μ
    GR_N,               // ν
    GR_X,               // ξ
    GR_O,               // ο
    GR_P,               // π
    GR_R,               // ρ
    GR_S,               // σ
    GR_T,               // τ
    GR_U,               // υ
    GR_PHI,             // φ
    GR_KH,              // χ
    GR_PS,              // ψ
    GR_W,               // ω
    // Symboles mathématiques
    MA_PLMN,            // ±
    MA_MUL,             // ×
    MA_DIV,             // ÷
    MA_SUP2,            // ²
    MA_SUP3,            // ³
    MA_INEG,            // ≠
    MA_INF,             // ≤
    MA_SUP,             // ≥
    MA_PI,              // π (raccourci direct)
    MA_INFIN,           // ∞
};

// ============================================================
// KEYMAPS
// ============================================================
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// ┌──────┬──────┬──────┬──────┬──────┬──────┐                    ┌──────┬──────┬──────┬──────┬──────┬──────┐
// │  ESC │  1 & │  2 é │  3 " │  4 ' │  5 ( │                    │  6 - │  7 è │  8 _ │  9 ç │  0 à │ BSPC │
// ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
// │  TAB │  A   │  Z   │  E   │  R   │  T   │                    │  Y   │  U   │  I   │  O   │  P   │  ^¨  │
// ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
// │ LSFT │  Q   │  S   │  D   │  F   │  G   │                    │  H   │  J   │  K   │  L   │  M   │  ù   │
// ├──────┼──────┼──────┼──────┼──────┼──────┼──────┐    ┌────────┼──────┼──────┼──────┼──────┼──────┼──────┤
// │ LCTL │  W   │  X   │  C   │  V   │  B   │  [   │    │   ]    │  N   │ ,?   │ ;.   │ :/   │  !§  │ RSFT │
// └──────┴──────┴──────┼──────┼──────┼──────┼──────┤    ├────────┼──────┼──────┼──────┼──────┴──────┴──────┘
//                      │ LGUI │ LALT │LOWER │ SPC  │    │ ENTER  │RAISE │RALT  │ RGUI │
//                      └──────┴──────┴──────┴──────┘    └────────┴──────┴──────┴──────┘

[_MAIN] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_RBRC,   KC_BSLS, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                               KC_LGUI, KC_LALT, LOWER,   KC_SPC,    KC_ENT,  RAISE,   KC_RALT, KC_RGUI
),

// ┌──────┬──────┬──────┬──────┬──────┬──────┐                    ┌──────┬──────┬──────┬──────┬──────┬──────┐
// │      │  F1  │  F2  │  F3  │  F4  │  F5  │                    │  F6  │  F7  │  F8  │  F9  │  F10 │ DEL  │
// ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
// │      │  !   │  @   │  #   │  $   │  %   │                    │  ^   │  &   │  *   │  (   │  )   │      │
// ├──────┼──────┼──────┼──────┼──────┼──────┤                    ├──────┼──────┼──────┼──────┼──────┼──────┤
// │      │      │      │      │      │      │                    │ HOME │  ←   │  ↑   │  ↓   │  →   │  END │
// ├──────┼──────┼──────┼──────┼──────┼──────┼──────┐    ┌────────┼──────┼──────┼──────┼──────┼──────┼──────┤
// │      │      │      │      │      │      │      │    │        │      │      │ PGUP │ PGDN │      │      │
// └──────┴──────┴──────┼──────┼──────┼──────┼──────┤    ├────────┼──────┼──────┼──────┼──────┴──────┴──────┘
//                      │      │      │      │      │    │        │      │      │      │
//                      └──────┴──────┴──────┴──────┘    └────────┴──────┴──────┴──────┘

[_LOWER] = LAYOUT(
    KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_DEL,
    KC_TRNS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_HOME, KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, KC_END,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_PGDN, KC_TRNS, KC_TRNS,
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

// ┌────────┬──────┬──────┬──────┬──────┬──────┐                      ┌──────┬──────┬──────┬──────┬──────┬────────┐
// │        │  ψ   │  κ   │  λ   │  μ   │  ν   │                      │  7   │  8   │  9   │  =   │  ≠   │ PRTSC  │
// ├────────┼──────┼──────┼──────┼──────┼──────┤                      ├──────┼──────┼──────┼──────┼──────┼────────┤
// │        │ α/Α A│ β/Β B│ ε/Ε E│ ρ/Ρ R│ τ/Τ T│                      │  4   │  5   │  6   │  /÷  │  π   │   ^    │
// ├────────┼──────┼──────┼──────┼──────┼──────┤                      ├──────┼──────┼──────┼──────┼──────┼────────┤
// │  LSFT  │ θ/Θ Q│ σ/Σ S│ δ/Δ D│ φ/Φ F│ γ/Γ G│                      │  1   │  2   │  3   │  *×  │  ²   │   ∞    │
// ├────────┼──────┼──────┼──────┼──────┼──────┼────────┐  ┌──────────┼──────┼──────┼──────┼──────┼──────┼────────┤
// │        │ ω/Ω W│ ξ/Ξ X│ χ/Χ C│ υ/Υ V│ ζ/Ζ Z│        │  │          │  η   │  0   │  .   │  ≤   │  ≥   │   ±    │
// └────────┴──────┴──────┼──────┼──────┼──────┼────────┤  ├──────────┼──────┼──────┼──────┼──────┴──────┴────────┘
//                        │      │      │      │        │  │  ENTER   │      │  -   │  +   │
//                        └──────┴──────┴──────┴────────┘  └──────────┴──────┴──────┴──────┘
// Note : Shift + lettre grecque → majuscule grecque (Α Β Γ Δ...)
// Note : /÷  = KC_SLSH seul / MA_DIV avec Shift  |  *× = KC_ASTR seul / MA_MUL avec Shift
 
[_RAISE] = LAYOUT(
    KC_TRNS, GR_PS,   GR_K,    GR_L,    GR_M,    GR_N,                          KC_P7,   KC_P8,   KC_P9,   KC_EQL,  MA_INEG,  KC_PSCR,
    KC_TRNS, GR_A,    GR_B,    GR_E,    GR_R,    GR_T,                          KC_P4,   KC_P5,   KC_P6,   MA_DIV,  MA_PI,    KC_LBRC,
    KC_LSFT, GR_TH,   GR_S,    GR_D,    GR_PHI,  GR_G,                          KC_P1,   KC_P2,   KC_P3,   KC_ASTR, MA_SUP2,  MA_INFIN,
    KC_TRNS, GR_W,    GR_X,    GR_KH,   GR_U,    GR_Z,    KC_TRNS,   KC_TRNS,  GR_H,    KC_P0,   KC_PDOT, MA_INF,  MA_SUP,   MA_PLMN,
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_ENT,   KC_TRNS, KC_PMNS, KC_PPLS
),

// ┌────────┬──────┬──────┬──────┬──────┬──────┐                      ┌──────┬──────┬──────┬──────┬──────┬────────┐
// │ RESET  │      │      │      │      │      │                      │      │      │      │      │      │        │
// ├────────┼──────┼──────┼──────┼──────┼──────┤                      ├──────┼──────┼──────┼──────┼──────┼────────┤
// │RGB TOG │RGB HU│RGB SA│RGB VA│      │      │                      │      │      │      │      │      │        │
// ├────────┼──────┼──────┼──────┼──────┼──────┤                      ├──────┼──────┼──────┼──────┼──────┼────────┤
// │RGB MOD │RGB HD│RGB SD│RGB VD│      │      │                      │      │      │      │      │      │        │
// ├────────┼──────┼──────┼──────┼──────┼──────┼────────┐  ┌──────────┼──────┼──────┼──────┼──────┼──────┼────────┤
// │        │      │      │      │      │      │        │  │          │      │OLED+ │OLED- │      │      │        │
// └────────┴──────┴──────┼──────┼──────┼──────┼────────┤  ├──────────┼──────┼──────┼──────┼──────┴──────┴────────┘
//                        │      │      │      │        │  │          │      │      │      │
//                        └──────┴──────┴──────┴────────┘  └──────────┴──────┴──────┴──────┘


[_ADJUST] = LAYOUT(
    QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS, OLED_LU, OLED_LD, KC_TRNS, KC_TRNS, KC_TRNS,
                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
),
};

// ============================================================
// LAYER COMBOS : LOWER + RAISE = ADJUST
// ============================================================
layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}



// ============================================================
// MACROS : alphabet grec + symboles mathématiques
// Mode Unicode : à configurer selon l'OS dans config.h
//   Windows  → UNICODE_MODE_WINCOMPOSE
//   macOS    → UNICODE_MODE_MACOS
//   Linux    → UNICODE_MODE_LINUX
// ============================================================
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        // Détection du Shift : on le retire temporairement pour éviter
        // qu'il interfère avec l'envoi Unicode
        bool shifted = get_mods() & MOD_MASK_SHIFT;
        if (shifted) del_mods(MOD_MASK_SHIFT);
 
        switch (keycode) {
            // -------------------------------------------------------
            // Alphabet grec : minuscule / MAJUSCULE avec Shift
            // -------------------------------------------------------
            case GR_A:   send_unicode_string(shifted ? "Α" : "α"); break;
            case GR_B:   send_unicode_string(shifted ? "Β" : "β"); break;
            case GR_G:   send_unicode_string(shifted ? "Γ" : "γ"); break;
            case GR_D:   send_unicode_string(shifted ? "Δ" : "δ"); break;
            case GR_E:   send_unicode_string(shifted ? "Ε" : "ε"); break;
            case GR_Z:   send_unicode_string(shifted ? "Ζ" : "ζ"); break;
            case GR_H:   send_unicode_string(shifted ? "Η" : "η"); break;
            case GR_TH:  send_unicode_string(shifted ? "Θ" : "θ"); break;
            case GR_I:   send_unicode_string(shifted ? "Ι" : "ι"); break;
            case GR_K:   send_unicode_string(shifted ? "Κ" : "κ"); break;
            case GR_L:   send_unicode_string(shifted ? "Λ" : "λ"); break;
            case GR_M:   send_unicode_string(shifted ? "Μ" : "μ"); break;
            case GR_N:   send_unicode_string(shifted ? "Ν" : "ν"); break;
            case GR_X:   send_unicode_string(shifted ? "Ξ" : "ξ"); break;
            case GR_O:   send_unicode_string(shifted ? "Ο" : "ο"); break;
            case GR_P:   send_unicode_string(shifted ? "Π" : "π"); break;
            case GR_R:   send_unicode_string(shifted ? "Ρ" : "ρ"); break;
            case GR_S:   send_unicode_string(shifted ? "Σ" : "σ"); break;
            case GR_T:   send_unicode_string(shifted ? "Τ" : "τ"); break;
            case GR_U:   send_unicode_string(shifted ? "Υ" : "υ"); break;
            case GR_PHI: send_unicode_string(shifted ? "Φ" : "φ"); break;
            case GR_KH:  send_unicode_string(shifted ? "Χ" : "χ"); break;
            case GR_PS:  send_unicode_string(shifted ? "Ψ" : "ψ"); break;
            case GR_W:   send_unicode_string(shifted ? "Ω" : "ω"); break;
            // -------------------------------------------------------
            // Symboles mathématiques (pas de variante Shift)
            // -------------------------------------------------------
            case MA_PLMN:  send_unicode_string("±"); break;
            case MA_MUL:   send_unicode_string(shifted ? "×" : "*"); break;  // * seul / × avec Shift
            case MA_DIV:   send_unicode_string(shifted ? "÷" : "/"); break;  // / seul / ÷ avec Shift
            case MA_SUP2:  send_unicode_string("²"); break;
            case MA_SUP3:  send_unicode_string("³"); break;
            case MA_INEG:  send_unicode_string("≠"); break;
            case MA_INF:   send_unicode_string("≤"); break;
            case MA_SUP:   send_unicode_string("≥"); break;
            case MA_PI:    send_unicode_string("π"); break;
            case MA_INFIN: send_unicode_string("∞"); break;
            default:
                // Touche non gérée : on remet Shift et on laisse QMK traiter
                if (shifted) add_mods(MOD_MASK_SHIFT);
                return true;
        }
 
        // Remet Shift après envoi Unicode si nécessaire
        if (shifted) add_mods(MOD_MASK_SHIFT);
        return false;
    }
    return true;
}




// ============================================================
// ENCODEURS ROTATIFS
// Encodeur 0 = GAUCHE | Encodeur 1 = DROIT
//
// Layer 0 (_MAIN) :
//   Gauche CCW/CW : Ctrl+Shift+Tab / Ctrl+Tab  (navigation onglets)
//   Droit  CCW/CW : KC_WH_D / KC_WH_U          (scroll)
//
// Layer 1 (_LOWER) :
//   Gauche CCW/CW : Flèche Haut / Flèche Bas
//   Droit  CCW/CW : Ctrl+Gauche / Ctrl+Droite  (navigation par mot)
// ============================================================

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

    [_MAIN] = {
        ENCODER_CCW_CW(C(S(KC_TAB)), C(KC_TAB)),  // Gauche : onglets navigateur
        ENCODER_CCW_CW(KC_WH_D,      KC_WH_U)     // Droit  : scroll
    },
    [_LOWER] = {
        ENCODER_CCW_CW(KC_UP,        KC_DOWN),     // Gauche : flèche haut/bas
        ENCODER_CCW_CW(C(KC_LEFT),   C(KC_RGHT))   // Droit  : Ctrl+flèche (navigation mot)
    },
    [_RAISE] = {
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS)
    },
    [_ADJUST] = {
        ENCODER_CCW_CW(RGB_VAD, RGB_VAI),          // Gauche : luminosité RGB
        ENCODER_CCW_CW(RGB_HUD, RGB_HUI)           // Droit  : teinte RGB
    },
};
#endif

// ============================================================
// OLED
// Gauche (master) : Tetris via le module inclus
// Droite (slave)  : Nom du layer actif + WPM
// ============================================================

#ifdef OLED_ENABLE

// --- Affichage du layer actif (écran droit) ---
static void render_status(void) {
    // Logo ou titre
    oled_write_P(PSTR("Lily58\n"), false);
    oled_write_P(PSTR("------\n"), false);

    // Layer courant
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _MAIN:
            oled_write_P(PSTR("MAIN  \n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("LOWER \n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("RAISE \n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("ADJUST\n"), false);
            break;
        default:
            oled_write_P(PSTR("??    \n"), false);
    }

    // WPM
    oled_write_P(PSTR("WPM: "), false);
    oled_write(get_u8_str(get_current_wpm(), ' '), false);
    oled_write_P(PSTR("\n"), false);

    // Encodeurs : rappel visuel du mode actif
    oled_write_P(PSTR("------\n"), false);
    if (get_highest_layer(layer_state) == _LOWER) {
        oled_write_P(PSTR("ENC: Fleches\n"), false);
    } else {
        oled_write_P(PSTR("ENC: Tab/Scrl\n"), false);
    }
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        // Écran gauche : Tetris
        // Le module Tetris utilise oled_write_raw_P et gère son propre rendu
        // Assurez-vous que tetris.c est présent dans le dossier keymap
        render_tetris();
    } else {
        // Écran droit : statut
        render_status();
    }
    return false;
}

#endif // OLED_ENABLE
