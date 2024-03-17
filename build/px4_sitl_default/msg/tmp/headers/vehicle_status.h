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

/* Auto-generated by genmsg_cpp from file /home/grk/Desktop/PX4-Autopilot/msg/vehicle_status.msg */


#pragma once


#include <uORB/uORB.h>


#ifndef __cplusplus
#define VEHICLE_STATUS_ARMING_STATE_INIT 0
#define VEHICLE_STATUS_ARMING_STATE_STANDBY 1
#define VEHICLE_STATUS_ARMING_STATE_ARMED 2
#define VEHICLE_STATUS_ARMING_STATE_STANDBY_ERROR 3
#define VEHICLE_STATUS_ARMING_STATE_SHUTDOWN 4
#define VEHICLE_STATUS_ARMING_STATE_IN_AIR_RESTORE 5
#define VEHICLE_STATUS_ARMING_STATE_MAX 6
#define VEHICLE_STATUS_FAILURE_NONE 0
#define VEHICLE_STATUS_FAILURE_ROLL 1
#define VEHICLE_STATUS_FAILURE_PITCH 2
#define VEHICLE_STATUS_FAILURE_ALT 4
#define VEHICLE_STATUS_FAILURE_EXT 8
#define VEHICLE_STATUS_FAILURE_ARM_ESC 16
#define VEHICLE_STATUS_FAILURE_HIGH_WIND 32
#define VEHICLE_STATUS_FAILURE_BATTERY 64
#define VEHICLE_STATUS_FAILURE_IMBALANCED_PROP 128
#define VEHICLE_STATUS_HIL_STATE_OFF 0
#define VEHICLE_STATUS_HIL_STATE_ON 1
#define VEHICLE_STATUS_NAVIGATION_STATE_MANUAL 0
#define VEHICLE_STATUS_NAVIGATION_STATE_ALTCTL 1
#define VEHICLE_STATUS_NAVIGATION_STATE_POSCTL 2
#define VEHICLE_STATUS_NAVIGATION_STATE_AUTO_MISSION 3
#define VEHICLE_STATUS_NAVIGATION_STATE_AUTO_LOITER 4
#define VEHICLE_STATUS_NAVIGATION_STATE_AUTO_RTL 5
#define VEHICLE_STATUS_NAVIGATION_STATE_AUTO_LANDENGFAIL 8
#define VEHICLE_STATUS_NAVIGATION_STATE_UNUSED 9
#define VEHICLE_STATUS_NAVIGATION_STATE_ACRO 10
#define VEHICLE_STATUS_NAVIGATION_STATE_UNUSED1 11
#define VEHICLE_STATUS_NAVIGATION_STATE_DESCEND 12
#define VEHICLE_STATUS_NAVIGATION_STATE_TERMINATION 13
#define VEHICLE_STATUS_NAVIGATION_STATE_OFFBOARD 14
#define VEHICLE_STATUS_NAVIGATION_STATE_STAB 15
#define VEHICLE_STATUS_NAVIGATION_STATE_UNUSED2 16
#define VEHICLE_STATUS_NAVIGATION_STATE_AUTO_TAKEOFF 17
#define VEHICLE_STATUS_NAVIGATION_STATE_AUTO_LAND 18
#define VEHICLE_STATUS_NAVIGATION_STATE_AUTO_FOLLOW_TARGET 19
#define VEHICLE_STATUS_NAVIGATION_STATE_AUTO_PRECLAND 20
#define VEHICLE_STATUS_NAVIGATION_STATE_ORBIT 21
#define VEHICLE_STATUS_NAVIGATION_STATE_AUTO_VTOL_TAKEOFF 22
#define VEHICLE_STATUS_NAVIGATION_STATE_MAX 23
#define VEHICLE_STATUS_VEHICLE_TYPE_UNKNOWN 0
#define VEHICLE_STATUS_VEHICLE_TYPE_ROTARY_WING 1
#define VEHICLE_STATUS_VEHICLE_TYPE_FIXED_WING 2
#define VEHICLE_STATUS_VEHICLE_TYPE_ROVER 3
#define VEHICLE_STATUS_VEHICLE_TYPE_AIRSHIP 4
#define VEHICLE_STATUS_ARM_DISARM_REASON_TRANSITION_TO_STANDBY 0
#define VEHICLE_STATUS_ARM_DISARM_REASON_RC_STICK 1
#define VEHICLE_STATUS_ARM_DISARM_REASON_RC_SWITCH 2
#define VEHICLE_STATUS_ARM_DISARM_REASON_COMMAND_INTERNAL 3
#define VEHICLE_STATUS_ARM_DISARM_REASON_COMMAND_EXTERNAL 4
#define VEHICLE_STATUS_ARM_DISARM_REASON_MISSION_START 5
#define VEHICLE_STATUS_ARM_DISARM_REASON_SAFETY_BUTTON 6
#define VEHICLE_STATUS_ARM_DISARM_REASON_AUTO_DISARM_LAND 7
#define VEHICLE_STATUS_ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT 8
#define VEHICLE_STATUS_ARM_DISARM_REASON_KILL_SWITCH 9
#define VEHICLE_STATUS_ARM_DISARM_REASON_LOCKDOWN 10
#define VEHICLE_STATUS_ARM_DISARM_REASON_FAILURE_DETECTOR 11
#define VEHICLE_STATUS_ARM_DISARM_REASON_SHUTDOWN 12
#define VEHICLE_STATUS_ARM_DISARM_REASON_UNIT_TEST 13

#endif


#ifdef __cplusplus
struct __EXPORT vehicle_status_s {
#else
struct vehicle_status_s {
#endif
	uint64_t timestamp;
	uint64_t nav_state_timestamp;
	uint64_t failsafe_timestamp;
	uint64_t onboard_control_sensors_present;
	uint64_t onboard_control_sensors_enabled;
	uint64_t onboard_control_sensors_health;
	uint64_t armed_time;
	uint64_t takeoff_time;
	uint8_t nav_state;
	uint8_t arming_state;
	uint8_t hil_state;
	bool failsafe;
	uint8_t system_type;
	uint8_t system_id;
	uint8_t component_id;
	uint8_t vehicle_type;
	bool is_vtol;
	bool is_vtol_tailsitter;
	bool vtol_fw_permanent_stab;
	bool in_transition_mode;
	bool in_transition_to_fw;
	bool rc_signal_lost;
	bool data_link_lost;
	uint8_t data_link_lost_counter;
	bool high_latency_data_link_lost;
	bool engine_failure;
	bool mission_failure;
	bool geofence_violated;
	uint8_t failure_detector_status;
	uint8_t latest_arming_reason;
	uint8_t latest_disarming_reason;
	uint8_t _padding0[1]; // required for logger


#ifdef __cplusplus
	static constexpr uint8_t ARMING_STATE_INIT = 0;
	static constexpr uint8_t ARMING_STATE_STANDBY = 1;
	static constexpr uint8_t ARMING_STATE_ARMED = 2;
	static constexpr uint8_t ARMING_STATE_STANDBY_ERROR = 3;
	static constexpr uint8_t ARMING_STATE_SHUTDOWN = 4;
	static constexpr uint8_t ARMING_STATE_IN_AIR_RESTORE = 5;
	static constexpr uint8_t ARMING_STATE_MAX = 6;
	static constexpr uint8_t FAILURE_NONE = 0;
	static constexpr uint8_t FAILURE_ROLL = 1;
	static constexpr uint8_t FAILURE_PITCH = 2;
	static constexpr uint8_t FAILURE_ALT = 4;
	static constexpr uint8_t FAILURE_EXT = 8;
	static constexpr uint8_t FAILURE_ARM_ESC = 16;
	static constexpr uint8_t FAILURE_HIGH_WIND = 32;
	static constexpr uint8_t FAILURE_BATTERY = 64;
	static constexpr uint8_t FAILURE_IMBALANCED_PROP = 128;
	static constexpr uint8_t HIL_STATE_OFF = 0;
	static constexpr uint8_t HIL_STATE_ON = 1;
	static constexpr uint8_t NAVIGATION_STATE_MANUAL = 0;
	static constexpr uint8_t NAVIGATION_STATE_ALTCTL = 1;
	static constexpr uint8_t NAVIGATION_STATE_POSCTL = 2;
	static constexpr uint8_t NAVIGATION_STATE_AUTO_MISSION = 3;
	static constexpr uint8_t NAVIGATION_STATE_AUTO_LOITER = 4;
	static constexpr uint8_t NAVIGATION_STATE_AUTO_RTL = 5;
	static constexpr uint8_t NAVIGATION_STATE_AUTO_LANDENGFAIL = 8;
	static constexpr uint8_t NAVIGATION_STATE_UNUSED = 9;
	static constexpr uint8_t NAVIGATION_STATE_ACRO = 10;
	static constexpr uint8_t NAVIGATION_STATE_UNUSED1 = 11;
	static constexpr uint8_t NAVIGATION_STATE_DESCEND = 12;
	static constexpr uint8_t NAVIGATION_STATE_TERMINATION = 13;
	static constexpr uint8_t NAVIGATION_STATE_OFFBOARD = 14;
	static constexpr uint8_t NAVIGATION_STATE_STAB = 15;
	static constexpr uint8_t NAVIGATION_STATE_UNUSED2 = 16;
	static constexpr uint8_t NAVIGATION_STATE_AUTO_TAKEOFF = 17;
	static constexpr uint8_t NAVIGATION_STATE_AUTO_LAND = 18;
	static constexpr uint8_t NAVIGATION_STATE_AUTO_FOLLOW_TARGET = 19;
	static constexpr uint8_t NAVIGATION_STATE_AUTO_PRECLAND = 20;
	static constexpr uint8_t NAVIGATION_STATE_ORBIT = 21;
	static constexpr uint8_t NAVIGATION_STATE_AUTO_VTOL_TAKEOFF = 22;
	static constexpr uint8_t NAVIGATION_STATE_MAX = 23;
	static constexpr uint8_t VEHICLE_TYPE_UNKNOWN = 0;
	static constexpr uint8_t VEHICLE_TYPE_ROTARY_WING = 1;
	static constexpr uint8_t VEHICLE_TYPE_FIXED_WING = 2;
	static constexpr uint8_t VEHICLE_TYPE_ROVER = 3;
	static constexpr uint8_t VEHICLE_TYPE_AIRSHIP = 4;
	static constexpr uint8_t ARM_DISARM_REASON_TRANSITION_TO_STANDBY = 0;
	static constexpr uint8_t ARM_DISARM_REASON_RC_STICK = 1;
	static constexpr uint8_t ARM_DISARM_REASON_RC_SWITCH = 2;
	static constexpr uint8_t ARM_DISARM_REASON_COMMAND_INTERNAL = 3;
	static constexpr uint8_t ARM_DISARM_REASON_COMMAND_EXTERNAL = 4;
	static constexpr uint8_t ARM_DISARM_REASON_MISSION_START = 5;
	static constexpr uint8_t ARM_DISARM_REASON_SAFETY_BUTTON = 6;
	static constexpr uint8_t ARM_DISARM_REASON_AUTO_DISARM_LAND = 7;
	static constexpr uint8_t ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT = 8;
	static constexpr uint8_t ARM_DISARM_REASON_KILL_SWITCH = 9;
	static constexpr uint8_t ARM_DISARM_REASON_LOCKDOWN = 10;
	static constexpr uint8_t ARM_DISARM_REASON_FAILURE_DETECTOR = 11;
	static constexpr uint8_t ARM_DISARM_REASON_SHUTDOWN = 12;
	static constexpr uint8_t ARM_DISARM_REASON_UNIT_TEST = 13;

#endif
};

/* register this as object request broker structure */
ORB_DECLARE(vehicle_status);


#ifdef __cplusplus
void print_message(const orb_metadata *meta, const vehicle_status_s& message);
#endif
