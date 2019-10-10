/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev */

#include "openxc.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

PB_BIND(openxc_VehicleMessage, openxc_VehicleMessage, 2)


PB_BIND(openxc_CanMessage, openxc_CanMessage, AUTO)


PB_BIND(openxc_ControlCommand, openxc_ControlCommand, 2)


PB_BIND(openxc_DiagnosticControlCommand, openxc_DiagnosticControlCommand, AUTO)


PB_BIND(openxc_PassthroughModeControlCommand, openxc_PassthroughModeControlCommand, AUTO)


PB_BIND(openxc_AcceptanceFilterBypassCommand, openxc_AcceptanceFilterBypassCommand, AUTO)


PB_BIND(openxc_PayloadFormatCommand, openxc_PayloadFormatCommand, AUTO)


PB_BIND(openxc_PredefinedObd2RequestsCommand, openxc_PredefinedObd2RequestsCommand, AUTO)


PB_BIND(openxc_NetworkOperatorSettings, openxc_NetworkOperatorSettings, AUTO)


PB_BIND(openxc_NetworkOperatorSettings_NetworkDescriptor, openxc_NetworkOperatorSettings_NetworkDescriptor, AUTO)


PB_BIND(openxc_NetworkDataSettings, openxc_NetworkDataSettings, AUTO)


PB_BIND(openxc_ServerConnectSettings, openxc_ServerConnectSettings, AUTO)


PB_BIND(openxc_ModemConfigurationCommand, openxc_ModemConfigurationCommand, AUTO)


PB_BIND(openxc_RTCConfigurationCommand, openxc_RTCConfigurationCommand, AUTO)


PB_BIND(openxc_CommandResponse, openxc_CommandResponse, AUTO)


PB_BIND(openxc_DiagnosticRequest, openxc_DiagnosticRequest, AUTO)


PB_BIND(openxc_DiagnosticResponse, openxc_DiagnosticResponse, 2)


PB_BIND(openxc_DynamicField, openxc_DynamicField, AUTO)


PB_BIND(openxc_SimpleMessage, openxc_SimpleMessage, 2)












/* On some platforms (such as AVR), double is really float.
 * Using double on these platforms is not directly supported
 * by nanopb, but see example_avr_double.
 * To get rid of this error, remove any double fields from your .proto.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)

/* @@protoc_insertion_point(eof) */
