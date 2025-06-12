#ifndef WHALE_RTC_H
#define WHALE_RTC_H

#include <stdint.h>

#define RTC_24H_MODE 1
#define RTC_12H_MODE 0

typedef struct w_rtc_datetime_t {
	uint8_t years;
	uint8_t months;
	uint8_t days;
	uint8_t hours;
	uint8_t minutes;
	uint8_t seconds;
}



int w_rtc_init(void) { 
	return UNIMPLEMENTED; 
} //init i2c, default settings (cap, ampm, bat switchover, etc)

int w_rtc_hw_rst(void) {
	return UNIMPLEMENTED; 
} //hardware FULL reset - see datasheet for initial condx

int w_rtc_hour_format_set(bool timeformat) {
	return UNIMPLEMENTED; 
} //24hr or 12hr am/pm (ew)

int w_rtc_hour_format_get(bool *timeformat) {
	return UNIMPLEMENTED; 
}

int w_rtc_datetime_set(w_rtc_datetime_t *datetime) {
	return UNIMPLEMENTED; 
} //just all at once

int w_rtc_datetime_get(w_rtc_datetime_t *datetime) {
	return UNIMPLEMENTED; 
}
