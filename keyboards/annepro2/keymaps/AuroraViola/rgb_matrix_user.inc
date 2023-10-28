// Step 1.
// Declare custom effects using the RGB_MATRIX_EFFECT macro
// (note the lack of semicolon after the macro!)
RGB_MATRIX_EFFECT(gay_flag)
RGB_MATRIX_EFFECT(lesbian_flag)
RGB_MATRIX_EFFECT(bisexual_flag)
RGB_MATRIX_EFFECT(trans_flag)
RGB_MATRIX_EFFECT(pan_flag)
RGB_MATRIX_EFFECT(SNAKE)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

#define SNAKE_FPS 12

#include "snake.h"

uint32_t timer = 0;
uint32_t last_updated = 0;

RGB bitmap[53];

static void clear_bitmap(void) {
  for (uint8_t i = 0; i < 53; i++) {
    bitmap[i].r = 0;
    bitmap[i].g = 0;
    bitmap[i].b = 0;
  }
}

static void render(uint8_t led_min, uint8_t led_max) {
  for (uint8_t i = led_min; i < led_max; i++) {
      if (i < 53) {
          RGB rgb = bitmap[i];
          rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
      } else {
          rgb_matrix_set_color(i, 0x00, 0x00, 0x00);
      }
  }
}

static bool SNAKE(effect_params_t* params) {
  if (timer > g_rgb_timer) {
    return false;
  }

  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  render(led_min, led_max);

  if (led_max == 61) {
    clear_bitmap();
    uint32_t delta_time = timer_elapsed32(last_updated);
    snake_update(delta_time, bitmap);
    last_updated = timer_read32();

    timer = g_rgb_timer + (1000 / SNAKE_FPS);
  }

  return led_max < 61;
}

static bool gay_flag(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  for (uint8_t i = 0; i <= 13; i++) {
    rgb_matrix_set_color(i, 0xff, 0x00, 0x00);
  }
  for (uint8_t i = 14; i <= 27; i++) {
    rgb_matrix_set_color(i, 0xff, 0xff, 0x00);
  }
  for (uint8_t i = 28; i <= 40; i++) {
    rgb_matrix_set_color(i, 0x00, 0xff, 0x00);
  }
  for (uint8_t i = 41; i <= 52; i++) {
    rgb_matrix_set_color(i, 0x00, 0x00, 0xff);
  }
  for (uint8_t i = 53; i <= 60; i++) {
    rgb_matrix_set_color(i, 0xff, 0x00, 0xff);
  }
  return rgb_matrix_check_finished_leds(led_max);
}

static bool lesbian_flag(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  for (uint8_t i = 0; i <= 13; i++) {
    rgb_matrix_set_color(i, 0xff, 0x11, 0x00);
  }
  for (uint8_t i = 14; i <= 27; i++) {
    rgb_matrix_set_color(i, 0xff, 0x6f, 0x00);
  }
  for (uint8_t i = 28; i <= 40; i++) {
    rgb_matrix_set_color(i, 0xff, 0xff, 0xff);
  }
  for (uint8_t i = 41; i <= 52; i++) {
    rgb_matrix_set_color(i, 0xff, 0x1f, 0xff);
  }
  for (uint8_t i = 53; i <= 60; i++) {
    rgb_matrix_set_color(i, 0x7f, 0x00, 0xff);
  }
  return rgb_matrix_check_finished_leds(led_max);
}

static bool bisexual_flag(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  for (uint8_t i = 0; i <= 13; i++) {
    rgb_matrix_set_color(i, 0xff, 0x00, 0x40);
  }
  for (uint8_t i = 14; i <= 27; i++) {
    rgb_matrix_set_color(i, 0xff, 0x00, 0x40);
  }
  for (uint8_t i = 28; i <= 40; i++) {
    rgb_matrix_set_color(i, 0xff, 0x00, 0xff);
  }
  for (uint8_t i = 41; i <= 52; i++) {
    rgb_matrix_set_color(i, 0x00, 0x00, 0xff);
  }
  for (uint8_t i = 53; i <= 60; i++) {
    rgb_matrix_set_color(i, 0x00, 0x00, 0xff);
  }
  return rgb_matrix_check_finished_leds(led_max);
}

static bool trans_flag(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  for (uint8_t i = 0; i <= 13; i++) {
    rgb_matrix_set_color(i, 0x00, 0x7f, 0xff);
  }
  for (uint8_t i = 14; i <= 27; i++) {
    rgb_matrix_set_color(i, 0xff, 0x00, 0x46);
  }
  for (uint8_t i = 28; i <= 40; i++) {
    rgb_matrix_set_color(i, 0xff, 0xff, 0xff);
  }
  for (uint8_t i = 41; i <= 52; i++) {
    rgb_matrix_set_color(i, 0xff, 0x00, 0x46);
  }
  for (uint8_t i = 53; i <= 60; i++) {
    rgb_matrix_set_color(i, 0x00, 0x7f, 0xff);
  }
  return rgb_matrix_check_finished_leds(led_max);
}

static bool pan_flag(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  for (uint8_t i = 0; i <= 13; i++) {
    rgb_matrix_set_color(i, 0xff, 0x00, 0x46);
  }
  for (uint8_t i = 14; i <= 27; i++) {
    rgb_matrix_set_color(i, 0xff, 0x00, 0x46);
  }
  for (uint8_t i = 28; i <= 40; i++) {
    rgb_matrix_set_color(i, 0xcc, 0xcc, 0x00);
  }
  for (uint8_t i = 41; i <= 52; i++) {
    rgb_matrix_set_color(i, 0x00, 0xc4, 0xff);
  }
  for (uint8_t i = 53; i <= 60; i++) {
    rgb_matrix_set_color(i, 0x00, 0xc4, 0xff);
  }
  return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS