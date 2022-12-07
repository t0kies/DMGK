/*
    █▀▀▀█
     ■■■
    █▄▄▄█ list.com                     notification.h            Last modified: May 28, 2022
    ----------------------------------------------------------------------------------------

    This is the firmware for the IDK first edition keyboard. Designed and built by @t0kies.

    For more information please feel free to reachout to me in github
    http://github.com/t0kies
*/

#include QMK_KEYBOARD_H   // This is needed to be able to use the keymap.
#include "pickles.h"      // This is needed to be able to use the pickles.
#include "notification.h" // This is needed to be able to use the notifications.

#define _QWERTY 0 // This is the default layer.
#define _OVERWATCH 1
#define _LEAGUEOFLEGENDS 2
#define _NUM 3

enum custom_keycodes
{
    QWERTY = SAFE_RANGE,
    OVERWATCH,
    LEAGUEOFLEGENDS,
    NUM
};

#define NUM_L MO(_NUM)
#define OW_L TG(_OVERWATCH)
#define LOL_L TG(_LEAGUEOFLEGENDS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 5X7
     *                  ┌───┐                          ┌───┐
     *              ┌───┤ E ├───┬───┐          ┌───┬───┤ I ├───┐
     *          ┌───┤ W ├───┤ R │ T │          │ Y │ U ├───┤ O ├───┐
     *          │ Q ├───┤ D ├───┼───┤          ├───┼───┤ K ├───┤ P │
     *          ├───┤ S ├───┤ F │ G │          │ H │ J ├───┤ L ├───┤
     *          │ A ├───┤ C ├───┼───┤          ├───┼───┤ , ├───┤ ; │
     *          ├───┤ X ├───┤ V │ B │          │ N │ M ├───┤ . ├───┤
     *          │ Z ├───┤   └───┴───┘          └───┴───┘   ├───┤ / │
     *          ├───┤alt│   ┌───┐                  ┌───┐   │alt├───┤
     *          │ctl├───┘   │mut│                  │P/P│   └───┤ctl│
     *          └───┘       ├───┤                  ├───┤       └───┘
     *                  ┌───┤   ├───┐          ┌───┤   ├───┐
     *                  │BKS│spc│DEL│          │BKS│ent│DEL│
     *                  ├───┤   ├───┤          ├───┤   ├───┤
     *                  │^^^├───┤SHF│          │^^^├───┤SHF│
     *                  └───┘   └───┘          └───┘   └───┘
     */
    [_QWERTY] = LAYOUT(
        KC_E, KC_I,
        KC_Q, KC_W, KC_D, KC_R, KC_T, KC_Y, KC_U, KC_K, KC_O, KC_P,
        KC_A, KC_S, KC_C, KC_F, KC_G, KC_H, KC_J, KC_COMM, KC_L, KC_SCLN,
        KC_Z, KC_X, KC_V, KC_B, KC_N, KC_M, KC_DOT, KC_SLSH,
        KC_LCTL, KC_LALT, KC_MUTE, KC_MPLY, KC_RALT, KC_RCTL,
        KC_BSPC, KC_SPC, KC_DEL, KC_BSPC, KC_ENT, KC_DEL,
        NUM_L, KC_LSFT, OW_L, KC_RSFT),
    /* 5X7 -- OVERWATCH
     *                  ┌───┐                          ┌───┐
     *              ┌───┤   ├───┬───┐          ┌───┬───┤   ├───┐
     *          ┌───┤   ├───┤   │   │          │   │   ├───┤   ├───┐
     *          │   ├───┤ W ├───┼───┤          ├───┼───┤ ↑ ├───┤   │
     *          ├───┤ Q ├───┤ E │   │          │   │   ├───┤   ├───┤
     *          │   ├───┤ S ├───┼───┤          ├───┼───┤ ↓ ├───┤   │
     *          ├───┤ A ├───┤ D │   │          │   │ ← ├───┤ → ├───┤
     *          │shf├───┤   └───┴───┘          └───┴───┘   ├───┤   │
     *          ├───┤   │   ┌───┐                  ┌───┐   │   ├───┤
     *          │   ├───┘   │mut│                  │P/P│   └───┤   │
     *          └───┘       ├───┤                  ├───┤       └───┘
     *                  ┌───┤   ├───┐          ┌───┤   ├───┐
     *                  │ X │SPC│ \ │          │VVV│SPC│VVV│
     *                  ├───┤   ├───┤          ├───┤   ├───┤
     *                  │ Z ├───┤ctl│          │VVV├───┤VVV│
     *                  └───┘   └───┘          └───┘   └───┘
     */
    [_OVERWATCH] = LAYOUT(
        XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, KC_W, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_Q, KC_S, KC_E, XXXXXXX, XXXXXXX, XXXXXXX, KC_DOWN, XXXXXXX, XXXXXXX,
        KC_LSFT, KC_A, KC_D, XXXXXXX, XXXXXXX, KC_LEFT, KC_RIGHT, XXXXXXX,
        XXXXXXX, XXXXXXX, KC_MUTE, KC_MPLY, XXXXXXX, XXXXXXX,
        KC_X, KC_BSLS, KC_SPC, LOL_L, KC_SPC, LOL_L,
        KC_Z, LCTL(KC_LSFT), OW_L, OW_L), /* 5X7 -- League of Legends
                                           *                  ┌───┐                          ┌───┐
                                           *              ┌───┤ 3 ├───┬───┐          ┌───┬───┤   ├───┐
                                           *          ┌───┤ 2 ├───┤   │   │          │   │   ├───┤   ├───┐
                                           *          │ 1 ├───┤ E ├───┼───┤          ├───┼───┤ ↑ ├───┤   │
                                           *          ├───┤ W ├───┤ R │ D │          │   │   ├───┤   ├───┤
                                           *          │ Q ├───┤   ├───┼───┤          ├───┼───┤ ↓ ├───┤   │
                                           *          ├───┤   ├───┤   │ F │          │   │ ← ├───┤ → ├───┤
                                           *          │   ├───┤   └───┴───┘          └───┴───┘   ├───┤   │
                                           *          ├───┤   │   ┌───┐                  ┌───┐   │   ├───┤
                                           *          │   ├───┘   │   │                  │P/P│   └───┤   │
                                           *          └───┘       ├───┤                  ├───┤       └───┘
                                           *                  ┌───┤   ├───┐          ┌───┤   ├───┐
                                           *                  │   │   │   │          │VVV│SPC│VVV│
                                           *                  ├───┤   ├───┤          ├───┤   ├───┤
                                           *                  │   ├───┤   │          │VVV├───┤VVV│
                                           *                  └───┘   └───┘          └───┘   └───┘
                                           */
    [_LEAGUEOFLEGENDS] = LAYOUT(
        KC_3, XXXXXXX,
        KC_1, KC_2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UP, XXXXXXX, XXXXXXX,
        KC_Q, KC_W, KC_E, KC_R, KC_D, XXXXXXX, XXXXXXX, KC_DOWN, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_F, XXXXXXX, KC_LEFT, KC_RIGHT, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_MPLY, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, LOL_L, KC_SPC, LOL_L,
        XXXXXXX, XXXXXXX, LOL_L, LOL_L),
    /* 5X7 -- Numbers/symblols
     *                  ┌───┐                          ┌───┐
     *              ┌───┤ 3 ├───┬───┐          ┌───┬───┤ 8 ├───┐
     *          ┌───┤ 2 ├───┤ 4 │ 5 │          │ 6 │ 7 ├───┤ 9 ├───┐
     *          │ 1 ├───┤ ` ├───┼───┤          ├───┼───┤ ↑ ├───┤ 0 │
     *          ├───┤ ' ├───┤ [ │ { │          │ } │ ] ├───┤VVV├───┤
     *          │ - ├───┤ & ├───┼───┤          ├───┼───┤ ↓ ├───┤VVV│
     *          ├───┤ \ ├───┤ = │ ( │          │ ) │ ← ├───┤ → ├───┤
     *          │tab├───┤   └───┴───┘          └───┴───┘   ├───┤   │
     *          ├───┤alt│   ┌───┐                  ┌───┐   │   ├───┤
     *          │esc├───┘   │mut│                  │P/P│   └───┤   │
     *          └───┘       ├───┤                  ├───┤       └───┘
     *                  ┌───┤   ├───┐          ┌───┤   ├───┐
     *                  │SHF│   │   │          │   │   │SHF│
     *                  ├───┤   ├───┤          ├───┤   ├───┤
     *                  │^^^├───┤   │          │   ├───┤WIN│
     *                  └───┘   └───┘          └───┘   └───┘
     */
    [_NUM] = LAYOUT(
        KC_3, KC_8,
        KC_1, KC_2, KC_GRV, KC_4, KC_5, KC_6, KC_7, KC_UP, KC_9, KC_0,
        KC_MINS, KC_QUOT, KC_AMPR, KC_LBRC, KC_LCBR, KC_RCBR, KC_RBRC, KC_DOWN, XXXXXXX, XXXXXXX,
        KC_TAB, KC_NUBS, KC_PEQL, KC_LPRN, KC_RPRN, KC_LEFT, KC_RIGHT, XXXXXXX,
        KC_ESC, KC_LALT, KC_MUTE, KC_MPLY, XXXXXXX, XXXXXXX,
        KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT,
        XXXXXXX, XXXXXXX, XXXXXXX, KC_RGUI)

};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation)
{
    return OLED_ROTATION_270;
}

uint8_t a = 3;
bool oled_task_user(void)
{
    print_pickles(0, 0);
    oled_set_cursor(0, 8);
    switch (get_highest_layer(layer_state))
    {
    case _NUM:
        oled_write_ln(a, false);
        break;
    case _OVERWATCH:
        oled_write_ln("OW", false);
        break;
    case _LEAGUEOFLEGENDS:
        oled_write_ln("LOL", false);
        break;
    default:
        // Or use the write_ln shortcut over adding '\n' to the end of your string
        oled_write_ln("ABC", false);
        break;
    }
    show_notifications(0, 10);
    return false;
}
#endif