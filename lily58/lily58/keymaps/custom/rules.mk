# ============================================================
# rules.mk - Lily58 RGB PandaKB - Custom keymap
# ============================================================

# Encodeurs rotatifs
ENCODER_ENABLE      = yes
ENCODER_MAP_ENABLE  = yes    # Méthode moderne (recommandée sur QMK >= 0.18)

# Touches multimédia (volume, scroll, etc.)
EXTRAKEY_ENABLE     = yes

# Souris (KC_WH_U / KC_WH_D pour le scroll)
MOUSEKEY_ENABLE     = yes

# Vial + VIA (configuration en temps réel sans recompilation)
VIA_ENABLE          = yes
VIAL_ENABLE         = yes
VIAL_INSECURE       = yes    # permet la config sans confirmation manuelle

# RGB par touche via Vial
VIALRGB_ENABLE      = yes 

# Macros avancées
COMBO_ENABLE        = yes
KEY_OVERRIDE_ENABLE = yes
QMK_SETTINGS        = yes

# Optimisation mémoire flash (important sur Pro Micro)
LTO_ENABLE          = yes
CONSOLE_ENABLE      = no

# OLED
OLED_ENABLE         = yes
OLED_DRIVER         = ssd1306

# WPM (affiché sur l'OLED droit)
WPM_ENABLE          = yes

UNICODE_ENABLE = yes

# Tetris (OLED gauche) + OLED custom (OLED droit)
# Ces 2 fichiers doivent être dans le dossier de ta keymap
SRC += tetris.c
SRC += oled.c
