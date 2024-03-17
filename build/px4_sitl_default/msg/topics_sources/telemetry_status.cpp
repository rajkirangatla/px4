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

/* Auto-generated by genmsg_cpp from file /home/grk/Desktop/PX4-Autopilot/msg/telemetry_status.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/telemetry_status.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>
#include <lib/matrix/matrix/math.hpp>
#include <lib/mathlib/mathlib.h>

constexpr char __orb_telemetry_status_fields[] = "\x89 timestamp;\x8a data_rate;\x8a rate_multiplier;\x8a tx_rate_avg;\x8a tx_error_rate_avg;\x88 tx_message_count;\x88 tx_buffer_overruns;\x8a rx_rate_avg;\x88 rx_message_count;\x88 rx_message_lost_count;\x88 rx_buffer_overruns;\x88 rx_parse_errors;\x88 rx_packet_drop_count;\x8a rx_message_lost_rate;\x86 type;\x86 mode;\x8c flow_control;\x8c forwarding;\x8c mavlink_v2;\x8c ftp;\x86 streams;\x8c heartbeat_type_antenna_tracker;\x8c heartbeat_type_gcs;\x8c heartbeat_type_onboard_controller;\x8c heartbeat_type_gimbal;\x8c heartbeat_type_adsb;\x8c heartbeat_type_camera;\x8c heartbeat_type_parachute;\x8c heartbeat_component_telemetry_radio;\x8c heartbeat_component_log;\x8c heartbeat_component_osd;\x8c heartbeat_component_obstacle_avoidance;\x8c heartbeat_component_vio;\x8c heartbeat_component_pairing_manager;\x8c heartbeat_component_udp_bridge;\x8c heartbeat_component_uart_bridge;\x8c avoidance_system_healthy;\x8c parachute_system_healthy;\x86[4] _padding0;";

ORB_DEFINE(telemetry_status, struct telemetry_status_s, 84, __orb_telemetry_status_fields, static_cast<uint8_t>(ORB_ID::telemetry_status));


void print_message(const orb_metadata *meta, const telemetry_status_s& message)
{
	if (sizeof(message) != meta->o_size) {
		printf("unexpected message size for %s: %zu != %i\n", meta->o_name, sizeof(message), meta->o_size);
		return;
	}
	orb_print_message_internal(meta, &message, true);
}
