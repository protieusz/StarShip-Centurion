# MCU name
#MCU = RP2040

# Bootloader selection
#BOOTLOADER = rp2040

# Build Options
#   change yes to no to disable
#
#ENCODER_ENABLE = yes
#BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
#MOUSEKEY_ENABLE = yes       # Mouse keys
#EXTRAKEY_ENABLE = yes       # Audio control and System control
#CONSOLE_ENABLE = no         # Console for debug
#COMMAND_ENABLE = no         # Commands for debug and configuration
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no            # USB Nkey Rollover
#BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
#RGBLIGHT_ENABLE = no       # Enable keyboard RGB underglow
WS2812_DRIVER = vendor
#RGB_MATRIX_ENABLE = no
#RGB_MATRIX_DRIVER = WS2812
AUDIO_ENABLE = no           # Audio output
ENCODER_MAP_ENABLE = no
COMBO_ENABLE = yes
#LTO_ENABLE = no
# CUSTOM_MATRIX = lite
# SRC += matrix.c

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360
