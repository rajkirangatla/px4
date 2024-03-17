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

/* Auto-generated by genmsg_cpp from file /home/grk/Desktop/PX4-Autopilot/msg/autotune_attitude_control_status.msg */


#pragma once


#include <uORB/uORB.h>


#ifndef __cplusplus
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_IDLE 0
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_INIT 1
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_ROLL 2
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_ROLL_PAUSE 3
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_PITCH 4
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_PITCH_PAUSE 5
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_YAW 6
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_YAW_PAUSE 7
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_VERIFICATION 8
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_APPLY 9
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_TEST 10
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_COMPLETE 11
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_FAIL 12
#define AUTOTUNE_ATTITUDE_CONTROL_STATUS_STATE_WAIT_FOR_DISARM 13

#endif


#ifdef __cplusplus
struct __EXPORT autotune_attitude_control_status_s {
#else
struct autotune_attitude_control_status_s {
#endif
	uint64_t timestamp;
	float coeff[5];
	float coeff_var[5];
	float fitness;
	float innov;
	float dt_model;
	float kc;
	float ki;
	float kd;
	float kff;
	float att_p;
	float rate_sp[3];
	float u_filt;
	float y_filt;
	uint8_t state;
	uint8_t _padding0[3]; // required for logger


#ifdef __cplusplus
	static constexpr uint8_t STATE_IDLE = 0;
	static constexpr uint8_t STATE_INIT = 1;
	static constexpr uint8_t STATE_ROLL = 2;
	static constexpr uint8_t STATE_ROLL_PAUSE = 3;
	static constexpr uint8_t STATE_PITCH = 4;
	static constexpr uint8_t STATE_PITCH_PAUSE = 5;
	static constexpr uint8_t STATE_YAW = 6;
	static constexpr uint8_t STATE_YAW_PAUSE = 7;
	static constexpr uint8_t STATE_VERIFICATION = 8;
	static constexpr uint8_t STATE_APPLY = 9;
	static constexpr uint8_t STATE_TEST = 10;
	static constexpr uint8_t STATE_COMPLETE = 11;
	static constexpr uint8_t STATE_FAIL = 12;
	static constexpr uint8_t STATE_WAIT_FOR_DISARM = 13;

#endif
};

/* register this as object request broker structure */
ORB_DECLARE(autotune_attitude_control_status);


#ifdef __cplusplus
void print_message(const orb_metadata *meta, const autotune_attitude_control_status_s& message);
#endif
