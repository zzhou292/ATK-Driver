// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rosapi_msgs:srv/GetParam.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosapi_msgs/srv/detail/get_param__functions.h"
#include "rosapi_msgs/srv/detail/get_param__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetParam_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetParam_Request_type_support_ids_t;

static const _GetParam_Request_type_support_ids_t _GetParam_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetParam_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetParam_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetParam_Request_type_support_symbol_names_t _GetParam_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetParam_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, GetParam_Request)),
  }
};

typedef struct _GetParam_Request_type_support_data_t
{
  void * data[2];
} _GetParam_Request_type_support_data_t;

static _GetParam_Request_type_support_data_t _GetParam_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetParam_Request_message_typesupport_map = {
  2,
  "rosapi_msgs",
  &_GetParam_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetParam_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetParam_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetParam_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetParam_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rosapi_msgs__srv__GetParam_Request__get_type_hash,
  &rosapi_msgs__srv__GetParam_Request__get_type_description,
  &rosapi_msgs__srv__GetParam_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::GetParam_Request>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_cpp::GetParam_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosapi_msgs, srv, GetParam_Request)() {
  return get_message_type_support_handle<rosapi_msgs::srv::GetParam_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosapi_msgs/srv/detail/get_param__functions.h"
// already included above
// #include "rosapi_msgs/srv/detail/get_param__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetParam_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetParam_Response_type_support_ids_t;

static const _GetParam_Response_type_support_ids_t _GetParam_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetParam_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetParam_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetParam_Response_type_support_symbol_names_t _GetParam_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetParam_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, GetParam_Response)),
  }
};

typedef struct _GetParam_Response_type_support_data_t
{
  void * data[2];
} _GetParam_Response_type_support_data_t;

static _GetParam_Response_type_support_data_t _GetParam_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetParam_Response_message_typesupport_map = {
  2,
  "rosapi_msgs",
  &_GetParam_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetParam_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetParam_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetParam_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetParam_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rosapi_msgs__srv__GetParam_Response__get_type_hash,
  &rosapi_msgs__srv__GetParam_Response__get_type_description,
  &rosapi_msgs__srv__GetParam_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::GetParam_Response>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_cpp::GetParam_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosapi_msgs, srv, GetParam_Response)() {
  return get_message_type_support_handle<rosapi_msgs::srv::GetParam_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosapi_msgs/srv/detail/get_param__functions.h"
// already included above
// #include "rosapi_msgs/srv/detail/get_param__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetParam_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetParam_Event_type_support_ids_t;

static const _GetParam_Event_type_support_ids_t _GetParam_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetParam_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetParam_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetParam_Event_type_support_symbol_names_t _GetParam_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetParam_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, GetParam_Event)),
  }
};

typedef struct _GetParam_Event_type_support_data_t
{
  void * data[2];
} _GetParam_Event_type_support_data_t;

static _GetParam_Event_type_support_data_t _GetParam_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetParam_Event_message_typesupport_map = {
  2,
  "rosapi_msgs",
  &_GetParam_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GetParam_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GetParam_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetParam_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetParam_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &rosapi_msgs__srv__GetParam_Event__get_type_hash,
  &rosapi_msgs__srv__GetParam_Event__get_type_description,
  &rosapi_msgs__srv__GetParam_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rosapi_msgs::srv::GetParam_Event>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_cpp::GetParam_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rosapi_msgs, srv, GetParam_Event)() {
  return get_message_type_support_handle<rosapi_msgs::srv::GetParam_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosapi_msgs/srv/detail/get_param__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rosapi_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetParam_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetParam_type_support_ids_t;

static const _GetParam_type_support_ids_t _GetParam_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetParam_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetParam_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetParam_type_support_symbol_names_t _GetParam_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rosapi_msgs, srv, GetParam)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rosapi_msgs, srv, GetParam)),
  }
};

typedef struct _GetParam_type_support_data_t
{
  void * data[2];
} _GetParam_type_support_data_t;

static _GetParam_type_support_data_t _GetParam_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetParam_service_typesupport_map = {
  2,
  "rosapi_msgs",
  &_GetParam_service_typesupport_ids.typesupport_identifier[0],
  &_GetParam_service_typesupport_symbol_names.symbol_name[0],
  &_GetParam_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetParam_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetParam_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rosapi_msgs::srv::GetParam_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rosapi_msgs::srv::GetParam_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<rosapi_msgs::srv::GetParam_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<rosapi_msgs::srv::GetParam>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<rosapi_msgs::srv::GetParam>,
  &rosapi_msgs__srv__GetParam__get_type_hash,
  &rosapi_msgs__srv__GetParam__get_type_description,
  &rosapi_msgs__srv__GetParam__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rosapi_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rosapi_msgs::srv::GetParam>()
{
  return &::rosapi_msgs::srv::rosidl_typesupport_cpp::GetParam_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp