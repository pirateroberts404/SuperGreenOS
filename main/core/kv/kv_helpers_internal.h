/*
 * Copyright (C) 2019  SuperGreenLab <towelie@supergreenlab.com>
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

#ifndef KV_HELPERS_INTERNAL_H_
#define KV_HELPERS_INTERNAL_H_

/*
 * [GENERATED]
 */

void internal_set_wifi_status(int value);
void internal_set_wifi_ssid(const char *value);
void internal_set_wifi_password(const char *value);
void internal_set_time(int value);
void internal_set_ota_timestamp(int value);
void internal_set_ota_server_ip(const char *value);
void internal_set_ota_server_hostname(const char *value);
void internal_set_ota_server_port(const char *value);
void internal_set_ota_version_filename(const char *value);
void internal_set_ota_filename(const char *value);
void internal_set_state(int value);
void internal_set_device_name(const char *value);
void internal_set_timer_type(int value);
void internal_set_timer_output(int value);
void internal_set_started_at(int value);
void internal_set_on_hour(int value);
void internal_set_on_min(int value);
void internal_set_off_hour(int value);
void internal_set_off_min(int value);
void internal_set_stretch(int value);
void internal_set_led_dim(int value);
void internal_set_blower(int value);
void internal_set_sht1x_temp_c(int value);
void internal_set_sht1x_temp_f(int value);
void internal_set_sht1x_humi(int value);
void internal_set_led_info(const char *value);
void internal_set_led_0_duty(int value);
void internal_set_led_1_duty(int value);
void internal_set_led_2_duty(int value);
void internal_set_led_3_duty(int value);
void internal_set_led_4_duty(int value);
void internal_set_led_5_duty(int value);

/*
 * [/GENERATED]
 */

#endif
