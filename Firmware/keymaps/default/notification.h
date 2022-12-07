/*
    █▀▀▀█
     ■■■
    █▄▄▄█ list.com                     notification.h            Last modified: May 28, 2022
    ----------------------------------------------------------------------------------------

    This is the firmware for the IDK first edition keyboard. Designed and built by @t0kies.

    For more information please feel free to reachout to me in github
    http://github.com/t0kies
*/ 


// #define logo_frame_width 128    // bytes per frame

// static const char PROGMEM mail_logo[] = /* 12 * 8 logo */
//     {0x00, 0x7e, 0x46, 0x4a, 0x52, 0x52, 0x52, 0x52, 0x4a, 0x46, 0x7e, 0x00};
// static const char PROGMEM whatsapp_logo[] = /* 12 * 8 logo */
//     {0x00, 0x00, 0x00, 0x06, 0x0f, 0x1b, 0x30, 0x60, 0x70, 0x30, 0x00, 0x00};
// static const char PROGMEM messenger_logo[] = /* 12 * 8 logo */
//     {0x00, 0x00, 0x00, 0x10, 0x08, 0x10, 0x10, 0x20, 0x10, 0x08, 0x00, 0x00};
// static const char PROGMEM fi_logo[] = /* 12 * 8 logo */
//     {0x00, 0x00, 0x00, 0x7e, 0x12, 0x02, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x00};
// static const char PROGMEM gmail_logo[] = /* 12 * 8 logo */
//     {0x00, 0x00, 0x00, 0x3c, 0x42, 0x42, 0x52, 0x52, 0x30, 0x00, 0x00, 0x00};

static const char PROGMEM logos_not[5][48] = {/* 12 * 8 logo */
                                              {0x00, 0x7e, 0x46, 0x4a, 0x52, 0x52, 0x52, 0x52, 0x4a, 0x46, 0x7e, 0x00},
                                              {0x00, 0x00, 0x00, 0x06, 0x0f, 0x1b, 0x30, 0x60, 0x70, 0x30, 0x00, 0x00},
                                              {0x00, 0x00, 0x00, 0x10, 0x08, 0x10, 0x10, 0x20, 0x10, 0x08, 0x00, 0x00},
                                              {0x00, 0x00, 0x00, 0x7e, 0x12, 0x02, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x00},
                                              {0x00, 0x00, 0x00, 0x3c, 0x42, 0x42, 0x52, 0x52, 0x30, 0x00, 0x00, 0x00}};
// static const char PROGMEM num_not[5]    = {/* 12 * 8 logo */
//                                            "99", "99", "99", "99", "99"};

void print_notifications(int NOT_X, int NOT_Y) {
    oled_set_cursor(NOT_X, NOT_Y);
    for (uint8_t i = 0; i < 5; i++) {
        {
            oled_write_raw_P(logos_not[i], sizeof(logos_not[i]));
            oled_set_cursor(NOT_X + 2, NOT_Y);
            oled_write_ln("XXX", false);
            oled_set_cursor(NOT_X, ++NOT_Y);
        }
    }
}

static void show_notifications(int NOT_X, int NOT_Y) {
    // oled_set_cursor(NOT_X, NOT_Y);

    // oled_write_raw_P(mail_logo, sizeof(mail_logo));
    // oled_set_cursor(NOT_X + 2, NOT_Y);
    // oled_write_ln(" 99", false);

    print_notifications(NOT_X, NOT_Y);
};
