/*
 *    Copyright (c) 2024 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
#pragma once

#include <matter/tracing/build_config.h>

namespace chip {
namespace Tracing {

/**
 * Defines the key type use to identity a specific metric
 */
typedef const char * MetricKey;

/**
 * List of supported metric keys
 */
constexpr MetricKey kMetricWiFiRSSI = "wifi_rssi";

// Overall PASE session est in device commissioner
constexpr MetricKey kMetricDeviceCommissionerPASESession = "core_dcm_pase_session";

// Overall commissioning into a fabric
constexpr MetricKey kMetricDeviceCommissionerCommission = "core_dcm_commission_device";

constexpr MetricKey kMetricDeviceCommissionerCommissionStage = "core_dcm_commission_stage";

// Setup Code Pairer
constexpr MetricKey kMetricSetupCodePairerPairDevice = "core_setup_code_pairer_pair_dev";

// Commissioning Operational Setup (Discovery + CASE)
constexpr MetricKey kMetricDeviceCommissioningOperationalSetup = "core_dcm_operational_setup";

// Operational Discovery
constexpr MetricKey kMetricDeviceOperationalDiscovery = "core_dev_operational_discovery";

// Operational Discovery Attempt Count
constexpr MetricKey kMetricDeviceOperationalDiscoveryAttemptCount = "core_dev_operational_discovery_attempt_ctr";

// CASE Session
constexpr MetricKey kMetricDeviceCASESession = "core_dev_case_session";

} // namespace Tracing
} // namespace chip
