// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_model_bridge.h"
#include "ui_to_if.h"

extern uint32_t LV_EVENT_CAN_RECV;

void clickme_fn(lv_event_t * e)
{
	static uint32_t id = 0x123;
	uint8_t data[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	ui_send_can_message(id++, data, 8, e);
}