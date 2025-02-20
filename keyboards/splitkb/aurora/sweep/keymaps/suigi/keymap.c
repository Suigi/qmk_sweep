#include QMK_KEYBOARD_H
#include "i18n.h"
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

enum tap_dance_codes {
    DANCE_OE,
    DANCE_AE,
    DANCE_UE,
};

const uint16_t PROGMEM esc_combo[] = {KC_BSPC, KC_SPC, COMBO_END};
combo_t key_combos[] = {
    COMBO(esc_combo, KC_ESC)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// === BASE LAYER ===
    [0] = LAYOUT(
// ------------ ------------ ------------ ------------ ------------   |   ------------ ------------ ------------ ------------ ------------
   KC_Q ,       KC_W,        KC_E,        KC_R,        KC_T,              KC_Y,        KC_U,        KC_I,        TD(DANCE_OE),        KC_P,
// ------------ ------------ ------------ ------------ ------------   |   ------------ ------------ ------------ ------------ ------------
  TD(DANCE_AE), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G,         KC_H,        LGUI_T(KC_J), LALT_T(KC_K), LCTL_T(KC_L), LSFT_T(KC_TRANS),
// K), LCTL_T(KC_L), LSFT_T(KC_TRNS),
// ------------ ------------ ------------ ------------ ------------   |   ------------ ------------ ------------ ------------ ------------
   KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,              KC_N,        KC_M,        KC_COMM,     KC_DOT,      KC_TRNS,
// ------------ ------------ ------------ ------------ ------------   |   ------------ ------------ ------------ ------------ ------------
                                          KC_TRNS,     KC_BSPC,           KC_SPC,      TO(1)
//                                        ------------ ------------   |   ------------ ------------
    ),
// === SYMBOLS LAYER ===
    [1] = LAYOUT(RM_TOGG, RM_NEXT, RM_HUEU, RM_SATU, RM_VALU, RM_SPDU, KC_BTN1, KC_WH_U, KC_BTN2, KC_TRNS, KC_TRNS, KC_BTN2, KC_NO, KC_BTN1, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TRNS, RM_PREV, RM_HUED, RM_SATD, RM_VALD, RM_SPDD, KC_WH_L, KC_WH_D, KC_WH_R, KC_TRNS, TO(0), KC_TRNS, KC_TRNS, KC_TRNS),
    [2] = LAYOUT(KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_LGUI, KC_NO, LCTL(KC_LALT), LCA(KC_LSFT), KC_TRNS, KC_HOME, KC_PGDN, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [3] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_PIPE, KC_QUOT, KC_TRNS, KC_CIRC, KC_ASTR, KC_AMPR, KC_NO, KC_TRNS, KC_HASH, KC_TILD, KC_SLSH, KC_DQUO, KC_DLR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_BSLS, KC_GRV, KC_TRNS, RM_PREV, KC_TRNS, KC_TRNS, RM_NEXT),
    [4] = LAYOUT(KC_TRNS, KC_COLN, KC_LT, KC_GT, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_AT, KC_TRNS, KC_NO, KC_EQL, KC_PLUS, KC_PERC, KC_TRNS, KC_EXLM, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_TRNS, KC_TRNS, KC_VOLU),
    [5] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_NO, LCTL(KC_LALT), KC_TRNS, KC_TRNS, KC_TRNS, KC_F4, KC_F5, KC_F6, KC_F11, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [6] = LAYOUT(KC_PSLS, KC_7, KC_8, KC_9, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_1, KC_2, KC_3, KC_PMNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_PAST, KC_4, KC_5, KC_6, KC_PEQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [7] = LAYOUT(KC_TRNS, KC_TRNS, KC_COLN, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_PERC, KC_SLSH, KC_ENT, KC_TRNS, DF(1), KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_EXLM, KC_TRNS, DF(0), KC_TRNS, RALT_T(KC_COMM), RCTL_T(KC_DOT), QK_BOOT, KC_TRNS, KC_TAB, KC_NO, KC_TRNS)
};

#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[4];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_oe(tap_dance_state_t *state, void *user_data);
void dance_oe_finished(tap_dance_state_t *state, void *user_data);
void dance_oe_reset(tap_dance_state_t *state, void *user_data);

void on_dance_oe(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_O);
        tap_code16(KC_O);
        tap_code16(KC_O);
    }
    if(state->count > 3) {
        tap_code16(KC_O);
    }
}

void dance_oe_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_O); break;
        case DOUBLE_TAP: register_code16(KC_O); register_code16(KC_O); break;
        case DOUBLE_HOLD: register_code16(DE_OE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_O); register_code16(KC_O);
    }
}

void dance_oe_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_O); break;
        case DOUBLE_TAP: unregister_code16(KC_O); break;
        case DOUBLE_HOLD: unregister_code16(DE_OE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_O); break;
    }
    dance_state[0].step = 0;
}

void on_dance_ae(tap_dance_state_t *state, void *user_data);
void on_dance_ae_finished(tap_dance_state_t *state, void *user_data);
void on_dance_ae_reset(tap_dance_state_t *state, void *user_data);

void on_dance_ae(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_A);
        tap_code16(KC_A);
        tap_code16(KC_A);
    }
    if(state->count > 3) {
        tap_code16(KC_A);
    }
}

void dance_ae_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_A); break;
        case DOUBLE_TAP: register_code16(KC_A); register_code16(KC_A); break;
        case SINGLE_HOLD: register_mods(MOD_BIT(KC_LSFT)); break;
        case DOUBLE_HOLD: register_code16(DE_AE); break;
        // case DOUBLE_SINGLE_TAP: tap_code16(KC_A); register_code16(KC_A);
    }
}

void dance_ae_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_A); break;
        case DOUBLE_TAP: unregister_code16(KC_A); break;
        case SINGLE_HOLD: unregister_mods(MOD_BIT(KC_LSFT)); break;
        case DOUBLE_HOLD: unregister_code16(DE_AE); break;
        // case DOUBLE_SINGLE_TAP: unregister_code16(KC_A); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_OE] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_oe, dance_oe_finished, dance_oe_reset),
        [DANCE_AE] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_ae, dance_ae_finished, dance_ae_reset),
};
