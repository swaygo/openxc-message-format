/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev */

#ifndef PB_OPENXC_OPENXC_PB_H_INCLUDED
#define PB_OPENXC_OPENXC_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _openxc_VehicleMessage_Type {
    openxc_VehicleMessage_Type_UNUSED = 0,
    openxc_VehicleMessage_Type_CAN = 1,
    openxc_VehicleMessage_Type_SIMPLE = 2,
    openxc_VehicleMessage_Type_DIAGNOSTIC = 3,
    openxc_VehicleMessage_Type_CONTROL_COMMAND = 4,
    openxc_VehicleMessage_Type_COMMAND_RESPONSE = 5,
    openxc_VehicleMessage_Type_DIAGNOSTIC_STITCH = 6
} openxc_VehicleMessage_Type;
#define _openxc_VehicleMessage_Type_MIN openxc_VehicleMessage_Type_UNUSED
#define _openxc_VehicleMessage_Type_MAX openxc_VehicleMessage_Type_DIAGNOSTIC_STITCH
#define _openxc_VehicleMessage_Type_ARRAYSIZE ((openxc_VehicleMessage_Type)(openxc_VehicleMessage_Type_DIAGNOSTIC_STITCH+1))

typedef enum _openxc_CanMessage_FrameFormat {
    openxc_CanMessage_FrameFormat_UNUSED = 0,
    openxc_CanMessage_FrameFormat_STANDARD = 1,
    openxc_CanMessage_FrameFormat_EXTENDED = 2
} openxc_CanMessage_FrameFormat;
#define _openxc_CanMessage_FrameFormat_MIN openxc_CanMessage_FrameFormat_UNUSED
#define _openxc_CanMessage_FrameFormat_MAX openxc_CanMessage_FrameFormat_EXTENDED
#define _openxc_CanMessage_FrameFormat_ARRAYSIZE ((openxc_CanMessage_FrameFormat)(openxc_CanMessage_FrameFormat_EXTENDED+1))

typedef enum _openxc_ControlCommand_Type {
    openxc_ControlCommand_Type_UNUSED = 0,
    openxc_ControlCommand_Type_VERSION = 1,
    openxc_ControlCommand_Type_DEVICE_ID = 2,
    openxc_ControlCommand_Type_DIAGNOSTIC = 3,
    openxc_ControlCommand_Type_PASSTHROUGH = 4,
    openxc_ControlCommand_Type_ACCEPTANCE_FILTER_BYPASS = 5,
    openxc_ControlCommand_Type_PAYLOAD_FORMAT = 6,
    openxc_ControlCommand_Type_PREDEFINED_OBD2_REQUESTS = 7,
    openxc_ControlCommand_Type_MODEM_CONFIGURATION = 8,
    openxc_ControlCommand_Type_RTC_CONFIGURATION = 9,
    openxc_ControlCommand_Type_SD_MOUNT_STATUS = 10,
    openxc_ControlCommand_Type_PLATFORM = 11
} openxc_ControlCommand_Type;
#define _openxc_ControlCommand_Type_MIN openxc_ControlCommand_Type_UNUSED
#define _openxc_ControlCommand_Type_MAX openxc_ControlCommand_Type_PLATFORM
#define _openxc_ControlCommand_Type_ARRAYSIZE ((openxc_ControlCommand_Type)(openxc_ControlCommand_Type_PLATFORM+1))

typedef enum _openxc_DiagnosticControlCommand_Action {
    openxc_DiagnosticControlCommand_Action_UNUSED = 0,
    openxc_DiagnosticControlCommand_Action_ADD = 1,
    openxc_DiagnosticControlCommand_Action_CANCEL = 2
} openxc_DiagnosticControlCommand_Action;
#define _openxc_DiagnosticControlCommand_Action_MIN openxc_DiagnosticControlCommand_Action_UNUSED
#define _openxc_DiagnosticControlCommand_Action_MAX openxc_DiagnosticControlCommand_Action_CANCEL
#define _openxc_DiagnosticControlCommand_Action_ARRAYSIZE ((openxc_DiagnosticControlCommand_Action)(openxc_DiagnosticControlCommand_Action_CANCEL+1))

typedef enum _openxc_PayloadFormatCommand_PayloadFormat {
    openxc_PayloadFormatCommand_PayloadFormat_UNUSED = 0,
    openxc_PayloadFormatCommand_PayloadFormat_JSON = 1,
    openxc_PayloadFormatCommand_PayloadFormat_PROTOBUF = 2,
    openxc_PayloadFormatCommand_PayloadFormat_MESSAGEPACK = 3
} openxc_PayloadFormatCommand_PayloadFormat;
#define _openxc_PayloadFormatCommand_PayloadFormat_MIN openxc_PayloadFormatCommand_PayloadFormat_UNUSED
#define _openxc_PayloadFormatCommand_PayloadFormat_MAX openxc_PayloadFormatCommand_PayloadFormat_MESSAGEPACK
#define _openxc_PayloadFormatCommand_PayloadFormat_ARRAYSIZE ((openxc_PayloadFormatCommand_PayloadFormat)(openxc_PayloadFormatCommand_PayloadFormat_MESSAGEPACK+1))

typedef enum _openxc_NetworkOperatorSettings_OperatorSelectMode {
    openxc_NetworkOperatorSettings_OperatorSelectMode_AUTOMATIC = 0,
    openxc_NetworkOperatorSettings_OperatorSelectMode_MANUAL = 1,
    openxc_NetworkOperatorSettings_OperatorSelectMode_DEREGISTER = 2,
    openxc_NetworkOperatorSettings_OperatorSelectMode_SET_ONLY = 3,
    openxc_NetworkOperatorSettings_OperatorSelectMode_MANUAL_AUTOMATIC = 4
} openxc_NetworkOperatorSettings_OperatorSelectMode;
#define _openxc_NetworkOperatorSettings_OperatorSelectMode_MIN openxc_NetworkOperatorSettings_OperatorSelectMode_AUTOMATIC
#define _openxc_NetworkOperatorSettings_OperatorSelectMode_MAX openxc_NetworkOperatorSettings_OperatorSelectMode_MANUAL_AUTOMATIC
#define _openxc_NetworkOperatorSettings_OperatorSelectMode_ARRAYSIZE ((openxc_NetworkOperatorSettings_OperatorSelectMode)(openxc_NetworkOperatorSettings_OperatorSelectMode_MANUAL_AUTOMATIC+1))

typedef enum _openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType {
    openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType_GSM = 0,
    openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType_UTRAN = 2
} openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType;
#define _openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType_MIN openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType_GSM
#define _openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType_MAX openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType_UTRAN
#define _openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType_ARRAYSIZE ((openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType)(openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType_UTRAN+1))

typedef enum _openxc_DiagnosticRequest_DecodedType {
    openxc_DiagnosticRequest_DecodedType_UNUSED = 0,
    openxc_DiagnosticRequest_DecodedType_NONE = 1,
    openxc_DiagnosticRequest_DecodedType_OBD2 = 2
} openxc_DiagnosticRequest_DecodedType;
#define _openxc_DiagnosticRequest_DecodedType_MIN openxc_DiagnosticRequest_DecodedType_UNUSED
#define _openxc_DiagnosticRequest_DecodedType_MAX openxc_DiagnosticRequest_DecodedType_OBD2
#define _openxc_DiagnosticRequest_DecodedType_ARRAYSIZE ((openxc_DiagnosticRequest_DecodedType)(openxc_DiagnosticRequest_DecodedType_OBD2+1))

typedef enum _openxc_DynamicField_Type {
    openxc_DynamicField_Type_UNUSED = 0,
    openxc_DynamicField_Type_STRING = 1,
    openxc_DynamicField_Type_NUM = 2,
    openxc_DynamicField_Type_BOOL = 3
} openxc_DynamicField_Type;
#define _openxc_DynamicField_Type_MIN openxc_DynamicField_Type_UNUSED
#define _openxc_DynamicField_Type_MAX openxc_DynamicField_Type_BOOL
#define _openxc_DynamicField_Type_ARRAYSIZE ((openxc_DynamicField_Type)(openxc_DynamicField_Type_BOOL+1))

/* Struct definitions */
typedef struct _openxc_AcceptanceFilterBypassCommand {
    int32_t bus;
    bool bypass;
/* @@protoc_insertion_point(struct:openxc_AcceptanceFilterBypassCommand) */
} openxc_AcceptanceFilterBypassCommand;


typedef PB_BYTES_ARRAY_T(8) openxc_CanMessage_data_t;
typedef struct _openxc_CanMessage {
    int32_t bus;
    uint32_t id;
    openxc_CanMessage_data_t data;
    openxc_CanMessage_FrameFormat frame_format;
/* @@protoc_insertion_point(struct:openxc_CanMessage) */
} openxc_CanMessage;


typedef struct _openxc_CommandResponse {
    openxc_ControlCommand_Type type;
    char message[128];
    bool status;
/* @@protoc_insertion_point(struct:openxc_CommandResponse) */
} openxc_CommandResponse;


typedef PB_BYTES_ARRAY_T(8) openxc_DiagnosticRequest_payload_t;
typedef struct _openxc_DiagnosticRequest {
    int32_t bus;
    uint32_t message_id;
    uint32_t mode;
    uint32_t pid;
    openxc_DiagnosticRequest_payload_t payload;
    bool multiple_responses;
    double frequency;
    char name[10];
    openxc_DiagnosticRequest_DecodedType decoded_type;
/* @@protoc_insertion_point(struct:openxc_DiagnosticRequest) */
} openxc_DiagnosticRequest;


typedef struct _openxc_DynamicField {
    openxc_DynamicField_Type type;
    char string_value[128];
    double numeric_value;
    bool boolean_value;
/* @@protoc_insertion_point(struct:openxc_DynamicField) */
} openxc_DynamicField;


typedef struct _openxc_NetworkDataSettings {
    char apn[64];
/* @@protoc_insertion_point(struct:openxc_NetworkDataSettings) */
} openxc_NetworkDataSettings;


typedef struct _openxc_NetworkOperatorSettings_NetworkDescriptor {
    uint32_t PLMN;
    openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType networkType;
/* @@protoc_insertion_point(struct:openxc_NetworkOperatorSettings_NetworkDescriptor) */
} openxc_NetworkOperatorSettings_NetworkDescriptor;


typedef struct _openxc_PassthroughModeControlCommand {
    int32_t bus;
    bool enabled;
/* @@protoc_insertion_point(struct:openxc_PassthroughModeControlCommand) */
} openxc_PassthroughModeControlCommand;


typedef struct _openxc_PayloadFormatCommand {
    openxc_PayloadFormatCommand_PayloadFormat format;
/* @@protoc_insertion_point(struct:openxc_PayloadFormatCommand) */
} openxc_PayloadFormatCommand;


typedef struct _openxc_PredefinedObd2RequestsCommand {
    bool enabled;
/* @@protoc_insertion_point(struct:openxc_PredefinedObd2RequestsCommand) */
} openxc_PredefinedObd2RequestsCommand;


typedef struct _openxc_RTCConfigurationCommand {
    uint32_t unix_time;
/* @@protoc_insertion_point(struct:openxc_RTCConfigurationCommand) */
} openxc_RTCConfigurationCommand;


typedef struct _openxc_ServerConnectSettings {
    char host[128];
    uint32_t port;
/* @@protoc_insertion_point(struct:openxc_ServerConnectSettings) */
} openxc_ServerConnectSettings;


typedef struct _openxc_DiagnosticControlCommand {
    openxc_DiagnosticRequest request;
    openxc_DiagnosticControlCommand_Action action;
/* @@protoc_insertion_point(struct:openxc_DiagnosticControlCommand) */
} openxc_DiagnosticControlCommand;


typedef PB_BYTES_ARRAY_T(255) openxc_DiagnosticResponse_payload_t;
typedef struct _openxc_DiagnosticResponse {
    int32_t bus;
    uint32_t message_id;
    uint32_t mode;
    uint32_t pid;
    bool success;
    uint32_t negative_response_code;
    openxc_DiagnosticResponse_payload_t payload;
    openxc_DynamicField value;
/* @@protoc_insertion_point(struct:openxc_DiagnosticResponse) */
} openxc_DiagnosticResponse;


typedef struct _openxc_DiagnosticStitchResponse {
    int32_t bus;
    uint32_t message_id;
    uint32_t mode;
    uint32_t pid;
    bool success;
    uint32_t negative_response_code;
    pb_callback_t payload;
    openxc_DynamicField value;
    int32_t frame;
    uint32_t total_size;
/* @@protoc_insertion_point(struct:openxc_DiagnosticStitchResponse) */
} openxc_DiagnosticStitchResponse;


typedef struct _openxc_NetworkOperatorSettings {
    bool allowDataRoaming;
    openxc_NetworkOperatorSettings_OperatorSelectMode operatorSelectMode;
    openxc_NetworkOperatorSettings_NetworkDescriptor networkDescriptor;
/* @@protoc_insertion_point(struct:openxc_NetworkOperatorSettings) */
} openxc_NetworkOperatorSettings;


typedef struct _openxc_SimpleMessage {
    char name[100];
    openxc_DynamicField value;
    openxc_DynamicField event;
/* @@protoc_insertion_point(struct:openxc_SimpleMessage) */
} openxc_SimpleMessage;


typedef struct _openxc_ModemConfigurationCommand {
    openxc_NetworkOperatorSettings networkOperatorSettings;
    openxc_NetworkDataSettings networkDataSettings;
    openxc_ServerConnectSettings serverConnectSettings;
/* @@protoc_insertion_point(struct:openxc_ModemConfigurationCommand) */
} openxc_ModemConfigurationCommand;


typedef struct _openxc_ControlCommand {
    openxc_ControlCommand_Type type;
    openxc_DiagnosticControlCommand diagnostic_request;
    openxc_PassthroughModeControlCommand passthrough_mode_request;
    openxc_AcceptanceFilterBypassCommand acceptance_filter_bypass_command;
    openxc_PayloadFormatCommand payload_format_command;
    openxc_PredefinedObd2RequestsCommand predefined_obd2_requests_command;
    openxc_ModemConfigurationCommand modem_configuration_command;
    openxc_RTCConfigurationCommand rtc_configuration_command;
/* @@protoc_insertion_point(struct:openxc_ControlCommand) */
} openxc_ControlCommand;


typedef struct _openxc_VehicleMessage {
    openxc_VehicleMessage_Type type;
    openxc_CanMessage can_message;
    openxc_SimpleMessage simple_message;
    openxc_DiagnosticResponse diagnostic_response;
    openxc_ControlCommand control_command;
    openxc_CommandResponse command_response;
    openxc_DiagnosticStitchResponse diagnostic_stitch_response;
    uint64_t timestamp;
/* @@protoc_insertion_point(struct:openxc_VehicleMessage) */
} openxc_VehicleMessage;


/* Initializer values for message structs */
#define openxc_VehicleMessage_init_default       {_openxc_VehicleMessage_Type_MIN, openxc_CanMessage_init_default, openxc_SimpleMessage_init_default, openxc_DiagnosticResponse_init_default, openxc_ControlCommand_init_default, openxc_CommandResponse_init_default, openxc_DiagnosticStitchResponse_init_default, 0}
#define openxc_CanMessage_init_default           {0, 0, {0, {0}}, _openxc_CanMessage_FrameFormat_MIN}
#define openxc_ControlCommand_init_default       {_openxc_ControlCommand_Type_MIN, openxc_DiagnosticControlCommand_init_default, openxc_PassthroughModeControlCommand_init_default, openxc_AcceptanceFilterBypassCommand_init_default, openxc_PayloadFormatCommand_init_default, openxc_PredefinedObd2RequestsCommand_init_default, openxc_ModemConfigurationCommand_init_default, openxc_RTCConfigurationCommand_init_default}
#define openxc_DiagnosticControlCommand_init_default {openxc_DiagnosticRequest_init_default, _openxc_DiagnosticControlCommand_Action_MIN}
#define openxc_PassthroughModeControlCommand_init_default {0, 0}
#define openxc_AcceptanceFilterBypassCommand_init_default {0, 0}
#define openxc_PayloadFormatCommand_init_default {_openxc_PayloadFormatCommand_PayloadFormat_MIN}
#define openxc_PredefinedObd2RequestsCommand_init_default {0}
#define openxc_NetworkOperatorSettings_init_default {0, _openxc_NetworkOperatorSettings_OperatorSelectMode_MIN, openxc_NetworkOperatorSettings_NetworkDescriptor_init_default}
#define openxc_NetworkOperatorSettings_NetworkDescriptor_init_default {0, _openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType_MIN}
#define openxc_NetworkDataSettings_init_default  {""}
#define openxc_ServerConnectSettings_init_default {"", 0}
#define openxc_ModemConfigurationCommand_init_default {openxc_NetworkOperatorSettings_init_default, openxc_NetworkDataSettings_init_default, openxc_ServerConnectSettings_init_default}
#define openxc_RTCConfigurationCommand_init_default {0}
#define openxc_CommandResponse_init_default      {_openxc_ControlCommand_Type_MIN, "", 0}
#define openxc_DiagnosticRequest_init_default    {0, 0, 0, 0, {0, {0}}, 0, 0, "", _openxc_DiagnosticRequest_DecodedType_MIN}
#define openxc_DiagnosticResponse_init_default   {0, 0, 0, 0, 0, 0, {0, {0}}, openxc_DynamicField_init_default}
#define openxc_DiagnosticStitchResponse_init_default {0, 0, 0, 0, 0, 0, {{NULL}, NULL}, openxc_DynamicField_init_default, 0, 0}
#define openxc_DynamicField_init_default         {_openxc_DynamicField_Type_MIN, "", 0, 0}
#define openxc_SimpleMessage_init_default        {"", openxc_DynamicField_init_default, openxc_DynamicField_init_default}
#define openxc_VehicleMessage_init_zero          {_openxc_VehicleMessage_Type_MIN, openxc_CanMessage_init_zero, openxc_SimpleMessage_init_zero, openxc_DiagnosticResponse_init_zero, openxc_ControlCommand_init_zero, openxc_CommandResponse_init_zero, openxc_DiagnosticStitchResponse_init_zero, 0}
#define openxc_CanMessage_init_zero              {0, 0, {0, {0}}, _openxc_CanMessage_FrameFormat_MIN}
#define openxc_ControlCommand_init_zero          {_openxc_ControlCommand_Type_MIN, openxc_DiagnosticControlCommand_init_zero, openxc_PassthroughModeControlCommand_init_zero, openxc_AcceptanceFilterBypassCommand_init_zero, openxc_PayloadFormatCommand_init_zero, openxc_PredefinedObd2RequestsCommand_init_zero, openxc_ModemConfigurationCommand_init_zero, openxc_RTCConfigurationCommand_init_zero}
#define openxc_DiagnosticControlCommand_init_zero {openxc_DiagnosticRequest_init_zero, _openxc_DiagnosticControlCommand_Action_MIN}
#define openxc_PassthroughModeControlCommand_init_zero {0, 0}
#define openxc_AcceptanceFilterBypassCommand_init_zero {0, 0}
#define openxc_PayloadFormatCommand_init_zero    {_openxc_PayloadFormatCommand_PayloadFormat_MIN}
#define openxc_PredefinedObd2RequestsCommand_init_zero {0}
#define openxc_NetworkOperatorSettings_init_zero {0, _openxc_NetworkOperatorSettings_OperatorSelectMode_MIN, openxc_NetworkOperatorSettings_NetworkDescriptor_init_zero}
#define openxc_NetworkOperatorSettings_NetworkDescriptor_init_zero {0, _openxc_NetworkOperatorSettings_NetworkDescriptor_NetworkType_MIN}
#define openxc_NetworkDataSettings_init_zero     {""}
#define openxc_ServerConnectSettings_init_zero   {"", 0}
#define openxc_ModemConfigurationCommand_init_zero {openxc_NetworkOperatorSettings_init_zero, openxc_NetworkDataSettings_init_zero, openxc_ServerConnectSettings_init_zero}
#define openxc_RTCConfigurationCommand_init_zero {0}
#define openxc_CommandResponse_init_zero         {_openxc_ControlCommand_Type_MIN, "", 0}
#define openxc_DiagnosticRequest_init_zero       {0, 0, 0, 0, {0, {0}}, 0, 0, "", _openxc_DiagnosticRequest_DecodedType_MIN}
#define openxc_DiagnosticResponse_init_zero      {0, 0, 0, 0, 0, 0, {0, {0}}, openxc_DynamicField_init_zero}
#define openxc_DiagnosticStitchResponse_init_zero {0, 0, 0, 0, 0, 0, {{NULL}, NULL}, openxc_DynamicField_init_zero, 0, 0}
#define openxc_DynamicField_init_zero            {_openxc_DynamicField_Type_MIN, "", 0, 0}
#define openxc_SimpleMessage_init_zero           {"", openxc_DynamicField_init_zero, openxc_DynamicField_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define openxc_AcceptanceFilterBypassCommand_bus_tag 1
#define openxc_AcceptanceFilterBypassCommand_bypass_tag 2
#define openxc_CanMessage_bus_tag                1
#define openxc_CanMessage_id_tag                 2
#define openxc_CanMessage_data_tag               3
#define openxc_CanMessage_frame_format_tag       4
#define openxc_CommandResponse_type_tag          1
#define openxc_CommandResponse_message_tag       2
#define openxc_CommandResponse_status_tag        3
#define openxc_DiagnosticRequest_bus_tag         1
#define openxc_DiagnosticRequest_message_id_tag  2
#define openxc_DiagnosticRequest_mode_tag        3
#define openxc_DiagnosticRequest_pid_tag         4
#define openxc_DiagnosticRequest_payload_tag     5
#define openxc_DiagnosticRequest_multiple_responses_tag 6
#define openxc_DiagnosticRequest_frequency_tag   7
#define openxc_DiagnosticRequest_name_tag        8
#define openxc_DiagnosticRequest_decoded_type_tag 9
#define openxc_DynamicField_type_tag             1
#define openxc_DynamicField_string_value_tag     2
#define openxc_DynamicField_numeric_value_tag    3
#define openxc_DynamicField_boolean_value_tag    4
#define openxc_NetworkDataSettings_apn_tag       1
#define openxc_NetworkOperatorSettings_NetworkDescriptor_PLMN_tag 1
#define openxc_NetworkOperatorSettings_NetworkDescriptor_networkType_tag 2
#define openxc_PassthroughModeControlCommand_bus_tag 1
#define openxc_PassthroughModeControlCommand_enabled_tag 2
#define openxc_PayloadFormatCommand_format_tag   1
#define openxc_PredefinedObd2RequestsCommand_enabled_tag 1
#define openxc_RTCConfigurationCommand_unix_time_tag 1
#define openxc_ServerConnectSettings_host_tag    1
#define openxc_ServerConnectSettings_port_tag    2
#define openxc_DiagnosticControlCommand_request_tag 1
#define openxc_DiagnosticControlCommand_action_tag 2
#define openxc_DiagnosticResponse_bus_tag        1
#define openxc_DiagnosticResponse_message_id_tag 2
#define openxc_DiagnosticResponse_mode_tag       3
#define openxc_DiagnosticResponse_pid_tag        4
#define openxc_DiagnosticResponse_success_tag    5
#define openxc_DiagnosticResponse_negative_response_code_tag 6
#define openxc_DiagnosticResponse_payload_tag    7
#define openxc_DiagnosticResponse_value_tag      8
#define openxc_DiagnosticStitchResponse_bus_tag  1
#define openxc_DiagnosticStitchResponse_message_id_tag 2
#define openxc_DiagnosticStitchResponse_mode_tag 3
#define openxc_DiagnosticStitchResponse_pid_tag  4
#define openxc_DiagnosticStitchResponse_success_tag 5
#define openxc_DiagnosticStitchResponse_negative_response_code_tag 6
#define openxc_DiagnosticStitchResponse_payload_tag 7
#define openxc_DiagnosticStitchResponse_value_tag 8
#define openxc_DiagnosticStitchResponse_frame_tag 9
#define openxc_DiagnosticStitchResponse_total_size_tag 10
#define openxc_NetworkOperatorSettings_allowDataRoaming_tag 1
#define openxc_NetworkOperatorSettings_operatorSelectMode_tag 2
#define openxc_NetworkOperatorSettings_networkDescriptor_tag 3
#define openxc_SimpleMessage_name_tag            1
#define openxc_SimpleMessage_value_tag           2
#define openxc_SimpleMessage_event_tag           3
#define openxc_ModemConfigurationCommand_networkOperatorSettings_tag 1
#define openxc_ModemConfigurationCommand_networkDataSettings_tag 2
#define openxc_ModemConfigurationCommand_serverConnectSettings_tag 3
#define openxc_ControlCommand_type_tag           1
#define openxc_ControlCommand_diagnostic_request_tag 2
#define openxc_ControlCommand_passthrough_mode_request_tag 3
#define openxc_ControlCommand_acceptance_filter_bypass_command_tag 4
#define openxc_ControlCommand_payload_format_command_tag 5
#define openxc_ControlCommand_predefined_obd2_requests_command_tag 6
#define openxc_ControlCommand_modem_configuration_command_tag 7
#define openxc_ControlCommand_rtc_configuration_command_tag 8
#define openxc_VehicleMessage_type_tag           1
#define openxc_VehicleMessage_can_message_tag    2
#define openxc_VehicleMessage_simple_message_tag 3
#define openxc_VehicleMessage_diagnostic_response_tag 4
#define openxc_VehicleMessage_control_command_tag 5
#define openxc_VehicleMessage_command_response_tag 6
#define openxc_VehicleMessage_diagnostic_stitch_response_tag 7
#define openxc_VehicleMessage_timestamp_tag      8

/* Struct field encoding specification for nanopb */
#define openxc_VehicleMessage_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, UENUM, type, 1) \
X(a, STATIC, SINGULAR, MESSAGE, can_message, 2) \
X(a, STATIC, SINGULAR, MESSAGE, simple_message, 3) \
X(a, STATIC, SINGULAR, MESSAGE, diagnostic_response, 4) \
X(a, STATIC, SINGULAR, MESSAGE, control_command, 5) \
X(a, STATIC, SINGULAR, MESSAGE, command_response, 6) \
X(a, STATIC, SINGULAR, MESSAGE, diagnostic_stitch_response, 7) \
X(a, STATIC, SINGULAR, UINT64, timestamp, 8)
#define openxc_VehicleMessage_CALLBACK NULL
#define openxc_VehicleMessage_DEFAULT NULL
#define openxc_VehicleMessage_can_message_MSGTYPE openxc_CanMessage
#define openxc_VehicleMessage_simple_message_MSGTYPE openxc_SimpleMessage
#define openxc_VehicleMessage_diagnostic_response_MSGTYPE openxc_DiagnosticResponse
#define openxc_VehicleMessage_control_command_MSGTYPE openxc_ControlCommand
#define openxc_VehicleMessage_command_response_MSGTYPE openxc_CommandResponse
#define openxc_VehicleMessage_diagnostic_stitch_response_MSGTYPE openxc_DiagnosticStitchResponse

#define openxc_CanMessage_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, bus, 1) \
X(a, STATIC, SINGULAR, UINT32, id, 2) \
X(a, STATIC, SINGULAR, BYTES, data, 3) \
X(a, STATIC, SINGULAR, UENUM, frame_format, 4)
#define openxc_CanMessage_CALLBACK NULL
#define openxc_CanMessage_DEFAULT NULL

#define openxc_ControlCommand_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, UENUM, type, 1) \
X(a, STATIC, SINGULAR, MESSAGE, diagnostic_request, 2) \
X(a, STATIC, SINGULAR, MESSAGE, passthrough_mode_request, 3) \
X(a, STATIC, SINGULAR, MESSAGE, acceptance_filter_bypass_command, 4) \
X(a, STATIC, SINGULAR, MESSAGE, payload_format_command, 5) \
X(a, STATIC, SINGULAR, MESSAGE, predefined_obd2_requests_command, 6) \
X(a, STATIC, SINGULAR, MESSAGE, modem_configuration_command, 7) \
X(a, STATIC, SINGULAR, MESSAGE, rtc_configuration_command, 8)
#define openxc_ControlCommand_CALLBACK NULL
#define openxc_ControlCommand_DEFAULT NULL
#define openxc_ControlCommand_diagnostic_request_MSGTYPE openxc_DiagnosticControlCommand
#define openxc_ControlCommand_passthrough_mode_request_MSGTYPE openxc_PassthroughModeControlCommand
#define openxc_ControlCommand_acceptance_filter_bypass_command_MSGTYPE openxc_AcceptanceFilterBypassCommand
#define openxc_ControlCommand_payload_format_command_MSGTYPE openxc_PayloadFormatCommand
#define openxc_ControlCommand_predefined_obd2_requests_command_MSGTYPE openxc_PredefinedObd2RequestsCommand
#define openxc_ControlCommand_modem_configuration_command_MSGTYPE openxc_ModemConfigurationCommand
#define openxc_ControlCommand_rtc_configuration_command_MSGTYPE openxc_RTCConfigurationCommand

#define openxc_DiagnosticControlCommand_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, MESSAGE, request, 1) \
X(a, STATIC, SINGULAR, UENUM, action, 2)
#define openxc_DiagnosticControlCommand_CALLBACK NULL
#define openxc_DiagnosticControlCommand_DEFAULT NULL
#define openxc_DiagnosticControlCommand_request_MSGTYPE openxc_DiagnosticRequest

#define openxc_PassthroughModeControlCommand_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, bus, 1) \
X(a, STATIC, SINGULAR, BOOL, enabled, 2)
#define openxc_PassthroughModeControlCommand_CALLBACK NULL
#define openxc_PassthroughModeControlCommand_DEFAULT NULL

#define openxc_AcceptanceFilterBypassCommand_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, bus, 1) \
X(a, STATIC, SINGULAR, BOOL, bypass, 2)
#define openxc_AcceptanceFilterBypassCommand_CALLBACK NULL
#define openxc_AcceptanceFilterBypassCommand_DEFAULT NULL

#define openxc_PayloadFormatCommand_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, UENUM, format, 1)
#define openxc_PayloadFormatCommand_CALLBACK NULL
#define openxc_PayloadFormatCommand_DEFAULT NULL

#define openxc_PredefinedObd2RequestsCommand_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, BOOL, enabled, 1)
#define openxc_PredefinedObd2RequestsCommand_CALLBACK NULL
#define openxc_PredefinedObd2RequestsCommand_DEFAULT NULL

#define openxc_NetworkOperatorSettings_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, BOOL, allowDataRoaming, 1) \
X(a, STATIC, SINGULAR, UENUM, operatorSelectMode, 2) \
X(a, STATIC, SINGULAR, MESSAGE, networkDescriptor, 3)
#define openxc_NetworkOperatorSettings_CALLBACK NULL
#define openxc_NetworkOperatorSettings_DEFAULT NULL
#define openxc_NetworkOperatorSettings_networkDescriptor_MSGTYPE openxc_NetworkOperatorSettings_NetworkDescriptor

#define openxc_NetworkOperatorSettings_NetworkDescriptor_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, UINT32, PLMN, 1) \
X(a, STATIC, SINGULAR, UENUM, networkType, 2)
#define openxc_NetworkOperatorSettings_NetworkDescriptor_CALLBACK NULL
#define openxc_NetworkOperatorSettings_NetworkDescriptor_DEFAULT NULL

#define openxc_NetworkDataSettings_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, STRING, apn, 1)
#define openxc_NetworkDataSettings_CALLBACK NULL
#define openxc_NetworkDataSettings_DEFAULT NULL

#define openxc_ServerConnectSettings_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, STRING, host, 1) \
X(a, STATIC, SINGULAR, UINT32, port, 2)
#define openxc_ServerConnectSettings_CALLBACK NULL
#define openxc_ServerConnectSettings_DEFAULT NULL

#define openxc_ModemConfigurationCommand_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, MESSAGE, networkOperatorSettings, 1) \
X(a, STATIC, SINGULAR, MESSAGE, networkDataSettings, 2) \
X(a, STATIC, SINGULAR, MESSAGE, serverConnectSettings, 3)
#define openxc_ModemConfigurationCommand_CALLBACK NULL
#define openxc_ModemConfigurationCommand_DEFAULT NULL
#define openxc_ModemConfigurationCommand_networkOperatorSettings_MSGTYPE openxc_NetworkOperatorSettings
#define openxc_ModemConfigurationCommand_networkDataSettings_MSGTYPE openxc_NetworkDataSettings
#define openxc_ModemConfigurationCommand_serverConnectSettings_MSGTYPE openxc_ServerConnectSettings

#define openxc_RTCConfigurationCommand_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, UINT32, unix_time, 1)
#define openxc_RTCConfigurationCommand_CALLBACK NULL
#define openxc_RTCConfigurationCommand_DEFAULT NULL

#define openxc_CommandResponse_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, UENUM, type, 1) \
X(a, STATIC, SINGULAR, STRING, message, 2) \
X(a, STATIC, SINGULAR, BOOL, status, 3)
#define openxc_CommandResponse_CALLBACK NULL
#define openxc_CommandResponse_DEFAULT NULL

#define openxc_DiagnosticRequest_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, bus, 1) \
X(a, STATIC, SINGULAR, UINT32, message_id, 2) \
X(a, STATIC, SINGULAR, UINT32, mode, 3) \
X(a, STATIC, SINGULAR, UINT32, pid, 4) \
X(a, STATIC, SINGULAR, BYTES, payload, 5) \
X(a, STATIC, SINGULAR, BOOL, multiple_responses, 6) \
X(a, STATIC, SINGULAR, DOUBLE, frequency, 7) \
X(a, STATIC, SINGULAR, STRING, name, 8) \
X(a, STATIC, SINGULAR, UENUM, decoded_type, 9)
#define openxc_DiagnosticRequest_CALLBACK NULL
#define openxc_DiagnosticRequest_DEFAULT NULL

#define openxc_DiagnosticResponse_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, bus, 1) \
X(a, STATIC, SINGULAR, UINT32, message_id, 2) \
X(a, STATIC, SINGULAR, UINT32, mode, 3) \
X(a, STATIC, SINGULAR, UINT32, pid, 4) \
X(a, STATIC, SINGULAR, BOOL, success, 5) \
X(a, STATIC, SINGULAR, UINT32, negative_response_code, 6) \
X(a, STATIC, SINGULAR, BYTES, payload, 7) \
X(a, STATIC, SINGULAR, MESSAGE, value, 8)
#define openxc_DiagnosticResponse_CALLBACK NULL
#define openxc_DiagnosticResponse_DEFAULT NULL
#define openxc_DiagnosticResponse_value_MSGTYPE openxc_DynamicField

#define openxc_DiagnosticStitchResponse_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, INT32, bus, 1) \
X(a, STATIC, SINGULAR, UINT32, message_id, 2) \
X(a, STATIC, SINGULAR, UINT32, mode, 3) \
X(a, STATIC, SINGULAR, UINT32, pid, 4) \
X(a, STATIC, SINGULAR, BOOL, success, 5) \
X(a, STATIC, SINGULAR, UINT32, negative_response_code, 6) \
X(a, CALLBACK, SINGULAR, BYTES, payload, 7) \
X(a, STATIC, SINGULAR, MESSAGE, value, 8) \
X(a, STATIC, SINGULAR, INT32, frame, 9) \
X(a, STATIC, SINGULAR, UINT32, total_size, 10)
#define openxc_DiagnosticStitchResponse_CALLBACK pb_default_field_callback
#define openxc_DiagnosticStitchResponse_DEFAULT NULL
#define openxc_DiagnosticStitchResponse_value_MSGTYPE openxc_DynamicField

#define openxc_DynamicField_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, UENUM, type, 1) \
X(a, STATIC, SINGULAR, STRING, string_value, 2) \
X(a, STATIC, SINGULAR, DOUBLE, numeric_value, 3) \
X(a, STATIC, SINGULAR, BOOL, boolean_value, 4)
#define openxc_DynamicField_CALLBACK NULL
#define openxc_DynamicField_DEFAULT NULL

#define openxc_SimpleMessage_FIELDLIST(X, a) \
X(a, STATIC, SINGULAR, STRING, name, 1) \
X(a, STATIC, SINGULAR, MESSAGE, value, 2) \
X(a, STATIC, SINGULAR, MESSAGE, event, 3)
#define openxc_SimpleMessage_CALLBACK NULL
#define openxc_SimpleMessage_DEFAULT NULL
#define openxc_SimpleMessage_value_MSGTYPE openxc_DynamicField
#define openxc_SimpleMessage_event_MSGTYPE openxc_DynamicField

extern const pb_msgdesc_t openxc_VehicleMessage_msg;
extern const pb_msgdesc_t openxc_CanMessage_msg;
extern const pb_msgdesc_t openxc_ControlCommand_msg;
extern const pb_msgdesc_t openxc_DiagnosticControlCommand_msg;
extern const pb_msgdesc_t openxc_PassthroughModeControlCommand_msg;
extern const pb_msgdesc_t openxc_AcceptanceFilterBypassCommand_msg;
extern const pb_msgdesc_t openxc_PayloadFormatCommand_msg;
extern const pb_msgdesc_t openxc_PredefinedObd2RequestsCommand_msg;
extern const pb_msgdesc_t openxc_NetworkOperatorSettings_msg;
extern const pb_msgdesc_t openxc_NetworkOperatorSettings_NetworkDescriptor_msg;
extern const pb_msgdesc_t openxc_NetworkDataSettings_msg;
extern const pb_msgdesc_t openxc_ServerConnectSettings_msg;
extern const pb_msgdesc_t openxc_ModemConfigurationCommand_msg;
extern const pb_msgdesc_t openxc_RTCConfigurationCommand_msg;
extern const pb_msgdesc_t openxc_CommandResponse_msg;
extern const pb_msgdesc_t openxc_DiagnosticRequest_msg;
extern const pb_msgdesc_t openxc_DiagnosticResponse_msg;
extern const pb_msgdesc_t openxc_DiagnosticStitchResponse_msg;
extern const pb_msgdesc_t openxc_DynamicField_msg;
extern const pb_msgdesc_t openxc_SimpleMessage_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define openxc_VehicleMessage_fields &openxc_VehicleMessage_msg
#define openxc_CanMessage_fields &openxc_CanMessage_msg
#define openxc_ControlCommand_fields &openxc_ControlCommand_msg
#define openxc_DiagnosticControlCommand_fields &openxc_DiagnosticControlCommand_msg
#define openxc_PassthroughModeControlCommand_fields &openxc_PassthroughModeControlCommand_msg
#define openxc_AcceptanceFilterBypassCommand_fields &openxc_AcceptanceFilterBypassCommand_msg
#define openxc_PayloadFormatCommand_fields &openxc_PayloadFormatCommand_msg
#define openxc_PredefinedObd2RequestsCommand_fields &openxc_PredefinedObd2RequestsCommand_msg
#define openxc_NetworkOperatorSettings_fields &openxc_NetworkOperatorSettings_msg
#define openxc_NetworkOperatorSettings_NetworkDescriptor_fields &openxc_NetworkOperatorSettings_NetworkDescriptor_msg
#define openxc_NetworkDataSettings_fields &openxc_NetworkDataSettings_msg
#define openxc_ServerConnectSettings_fields &openxc_ServerConnectSettings_msg
#define openxc_ModemConfigurationCommand_fields &openxc_ModemConfigurationCommand_msg
#define openxc_RTCConfigurationCommand_fields &openxc_RTCConfigurationCommand_msg
#define openxc_CommandResponse_fields &openxc_CommandResponse_msg
#define openxc_DiagnosticRequest_fields &openxc_DiagnosticRequest_msg
#define openxc_DiagnosticResponse_fields &openxc_DiagnosticResponse_msg
#define openxc_DiagnosticStitchResponse_fields &openxc_DiagnosticStitchResponse_msg
#define openxc_DynamicField_fields &openxc_DynamicField_msg
#define openxc_SimpleMessage_fields &openxc_SimpleMessage_msg

/* Maximum encoded size of messages (where known) */
/* openxc_VehicleMessage_size depends on runtime parameters */
#define openxc_CanMessage_size                   29
#define openxc_ControlCommand_size               342
#define openxc_DiagnosticControlCommand_size     67
#define openxc_PassthroughModeControlCommand_size 13
#define openxc_AcceptanceFilterBypassCommand_size 13
#define openxc_PayloadFormatCommand_size         2
#define openxc_PredefinedObd2RequestsCommand_size 2
#define openxc_NetworkOperatorSettings_size      14
#define openxc_NetworkOperatorSettings_NetworkDescriptor_size 8
#define openxc_NetworkDataSettings_size          65
#define openxc_ServerConnectSettings_size        136
#define openxc_ModemConfigurationCommand_size    222
#define openxc_RTCConfigurationCommand_size      6
#define openxc_CommandResponse_size              134
#define openxc_DiagnosticRequest_size            63
#define openxc_DiagnosticResponse_size           441
/* openxc_DiagnosticStitchResponse_size depends on runtime parameters */
#define openxc_DynamicField_size                 143
#define openxc_SimpleMessage_size                393

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
