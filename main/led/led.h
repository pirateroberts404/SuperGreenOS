/*
 * Copyright (C) 2018  SuperGreenLab <towelie@supergreenlab.com>
 * Author: Constantin Clauzel <constantin.clauzel@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LED_H_
#define LED_H_

#include "../core/ble/ble_db.h"
#include "driver/ledc.h"

typedef struct led_config {
  enum idx       duty_val_idx;

  int x;
  int y;
  int z;

  ledc_channel_config_t channel_config;
  int (*setter)(int);
} led_config_t;

extern int min_x;
extern int max_x;

extern int min_y;
extern int max_y;

extern int min_z;
extern int max_z;

extern led_config_t ledc_channels[];

#define CHANNEL(i, lx, ly, lz, gpio, timer, chan) { \
    duty_val_idx: IDX_VALUE(LED_##i##_DUTY), \
    \
    x: lx, \
    y: ly, \
    z: lz, \
    \
    channel_config: { \
      gpio_num:    gpio, \
      speed_mode:  LEDC_LOW_SPEED_MODE, \
      channel:     LEDC_CHANNEL_##chan, \
      intr_type:   LEDC_INTR_FADE_END, \
      timer_sel:   LEDC_TIMER_##timer, \
      duty:        0, \
    }, \
    setter: on_set_led_##i##_duty, \
  }

extern const unsigned int N_LEDS;

void init_led();
void refresh_led(int i);

int set_led_duty(int i, int value);
int get_led_duty(int i);

/* BLE Callbacks */

int on_set_led_0_duty(int value);
int on_set_led_1_duty(int value);
int on_set_led_2_duty(int value);
int on_set_led_3_duty(int value);
int on_set_led_4_duty(int value);
int on_set_led_5_duty(int value);

#endif
