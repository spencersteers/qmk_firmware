VIA_ENABLE = no
MOUSEKEY_ENABLE = yes
ENCODER_ENABLE = yes
TAP_DANCE_ENABLE = yes
COMMAND_ENABLE = yes
CONSOLE_ENABLE = no

ifeq ($(strip $(RGB_MATRIX_ENABLE)), yes)
    SRC += rgb_matrix_user.c
endif