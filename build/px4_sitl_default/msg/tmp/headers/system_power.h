/****************************************************************************
 *
 *   Copyright (C) 2013-2021 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file /home/grk/Desktop/PX4-Autopilot/msg/system_power.msg */


#pragma once


#include <uORB/uORB.h>


#ifndef __cplusplus
#define SYSTEM_POWER_BRICK1_VALID_SHIFTS 0
#define SYSTEM_POWER_BRICK1_VALID_MASK 1
#define SYSTEM_POWER_BRICK2_VALID_SHIFTS 1
#define SYSTEM_POWER_BRICK2_VALID_MASK 2
#define SYSTEM_POWER_BRICK3_VALID_SHIFTS 2
#define SYSTEM_POWER_BRICK3_VALID_MASK 4
#define SYSTEM_POWER_BRICK4_VALID_SHIFTS 3
#define SYSTEM_POWER_BRICK4_VALID_MASK 8

#endif


#ifdef __cplusplus
struct __EXPORT system_power_s {
#else
struct system_power_s {
#endif
	uint64_t timestamp;
	float voltage5v_v;
	float sensors3v3[4];
	uint8_t sensors3v3_valid;
	uint8_t usb_connected;
	uint8_t brick_valid;
	uint8_t usb_valid;
	uint8_t servo_valid;
	uint8_t periph_5v_oc;
	uint8_t hipower_5v_oc;
	uint8_t comp_5v_valid;
	uint8_t can1_gps1_5v_valid;
	uint8_t _padding0[3]; // required for logger


#ifdef __cplusplus
	static constexpr uint8_t BRICK1_VALID_SHIFTS = 0;
	static constexpr uint8_t BRICK1_VALID_MASK = 1;
	static constexpr uint8_t BRICK2_VALID_SHIFTS = 1;
	static constexpr uint8_t BRICK2_VALID_MASK = 2;
	static constexpr uint8_t BRICK3_VALID_SHIFTS = 2;
	static constexpr uint8_t BRICK3_VALID_MASK = 4;
	static constexpr uint8_t BRICK4_VALID_SHIFTS = 3;
	static constexpr uint8_t BRICK4_VALID_MASK = 8;

#endif
};

/* register this as object request broker structure */
ORB_DECLARE(system_power);


#ifdef __cplusplus
void print_message(const orb_metadata *meta, const system_power_s& message);
#endif
