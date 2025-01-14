/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0001
#define MANUFACTURER    clack.ee
#define PRODUCT         saf8

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { GP2, GP7 }
#define MATRIX_COL_PINS { GP3, GP4, GP5, GP6 }

#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
