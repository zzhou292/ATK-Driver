// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rosapi_msgs:srv/MessageDetails.idl
// generated code does not contain a copyright notice

#include "rosapi_msgs/srv/detail/message_details__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__MessageDetails__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0xfc, 0xd7, 0x82, 0x97, 0xd2, 0x3c, 0x60,
      0x56, 0x80, 0x94, 0xc4, 0x3c, 0xe5, 0x11, 0xa7,
      0xc1, 0x05, 0x9e, 0x80, 0x30, 0x89, 0x69, 0x47,
      0xb4, 0x03, 0xc7, 0x43, 0xf5, 0x4d, 0xa2, 0x0a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__MessageDetails_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0xa4, 0x0a, 0x19, 0x3d, 0xa6, 0x57, 0x41,
      0x6e, 0xf2, 0x43, 0x7f, 0xdf, 0x98, 0x28, 0x8d,
      0x56, 0x4c, 0x3e, 0xfc, 0x09, 0x84, 0x19, 0x1a,
      0xf1, 0xdf, 0x98, 0xb8, 0x81, 0xcf, 0x37, 0xc8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__MessageDetails_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x87, 0x3f, 0x74, 0xfc, 0xb9, 0x82, 0x36, 0x77,
      0xca, 0x1d, 0xa7, 0xa2, 0x02, 0x7c, 0xb7, 0x3f,
      0x6a, 0xa8, 0x14, 0xf5, 0x61, 0xfb, 0xf9, 0x04,
      0x48, 0x46, 0xfb, 0x7a, 0x49, 0x71, 0x5b, 0xc8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_rosapi_msgs
const rosidl_type_hash_t *
rosapi_msgs__srv__MessageDetails_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbb, 0x69, 0x11, 0x5b, 0xfc, 0x99, 0x05, 0x22,
      0xdc, 0xb4, 0xce, 0x05, 0xf4, 0xae, 0x53, 0x8b,
      0xdf, 0x82, 0xdb, 0x38, 0x38, 0xc8, 0xf0, 0x0b,
      0x43, 0x33, 0xc0, 0xe6, 0xb8, 0x8f, 0xaa, 0xdd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "rosapi_msgs/msg/detail/type_def__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t rosapi_msgs__msg__TypeDef__EXPECTED_HASH = {1, {
    0xdc, 0xd2, 0x54, 0x91, 0x39, 0xd3, 0xfd, 0xb4,
    0x32, 0xe7, 0xf9, 0x25, 0xfe, 0x79, 0xe9, 0xfb,
    0x4f, 0x02, 0x88, 0x9c, 0x79, 0xbe, 0x45, 0xf7,
    0x48, 0x2c, 0x34, 0x67, 0x06, 0x73, 0x49, 0x28,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char rosapi_msgs__srv__MessageDetails__TYPE_NAME[] = "rosapi_msgs/srv/MessageDetails";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char rosapi_msgs__msg__TypeDef__TYPE_NAME[] = "rosapi_msgs/msg/TypeDef";
static char rosapi_msgs__srv__MessageDetails_Event__TYPE_NAME[] = "rosapi_msgs/srv/MessageDetails_Event";
static char rosapi_msgs__srv__MessageDetails_Request__TYPE_NAME[] = "rosapi_msgs/srv/MessageDetails_Request";
static char rosapi_msgs__srv__MessageDetails_Response__TYPE_NAME[] = "rosapi_msgs/srv/MessageDetails_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char rosapi_msgs__srv__MessageDetails__FIELD_NAME__request_message[] = "request_message";
static char rosapi_msgs__srv__MessageDetails__FIELD_NAME__response_message[] = "response_message";
static char rosapi_msgs__srv__MessageDetails__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__MessageDetails__FIELDS[] = {
  {
    {rosapi_msgs__srv__MessageDetails__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__MessageDetails_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__MessageDetails__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__MessageDetails_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__MessageDetails__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {rosapi_msgs__srv__MessageDetails_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosapi_msgs__srv__MessageDetails__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__msg__TypeDef__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__MessageDetails_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__MessageDetails_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__MessageDetails_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__MessageDetails__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__MessageDetails__TYPE_NAME, 30, 30},
      {rosapi_msgs__srv__MessageDetails__FIELDS, 3, 3},
    },
    {rosapi_msgs__srv__MessageDetails__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rosapi_msgs__msg__TypeDef__EXPECTED_HASH, rosapi_msgs__msg__TypeDef__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rosapi_msgs__msg__TypeDef__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosapi_msgs__srv__MessageDetails_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rosapi_msgs__srv__MessageDetails_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = rosapi_msgs__srv__MessageDetails_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__MessageDetails_Request__FIELD_NAME__type[] = "type";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__MessageDetails_Request__FIELDS[] = {
  {
    {rosapi_msgs__srv__MessageDetails_Request__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__MessageDetails_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__MessageDetails_Request__TYPE_NAME, 38, 38},
      {rosapi_msgs__srv__MessageDetails_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__MessageDetails_Response__FIELD_NAME__typedefs[] = "typedefs";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__MessageDetails_Response__FIELDS[] = {
  {
    {rosapi_msgs__srv__MessageDetails_Response__FIELD_NAME__typedefs, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {rosapi_msgs__msg__TypeDef__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosapi_msgs__srv__MessageDetails_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {rosapi_msgs__msg__TypeDef__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__MessageDetails_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__MessageDetails_Response__TYPE_NAME, 39, 39},
      {rosapi_msgs__srv__MessageDetails_Response__FIELDS, 1, 1},
    },
    {rosapi_msgs__srv__MessageDetails_Response__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&rosapi_msgs__msg__TypeDef__EXPECTED_HASH, rosapi_msgs__msg__TypeDef__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = rosapi_msgs__msg__TypeDef__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char rosapi_msgs__srv__MessageDetails_Event__FIELD_NAME__info[] = "info";
static char rosapi_msgs__srv__MessageDetails_Event__FIELD_NAME__request[] = "request";
static char rosapi_msgs__srv__MessageDetails_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field rosapi_msgs__srv__MessageDetails_Event__FIELDS[] = {
  {
    {rosapi_msgs__srv__MessageDetails_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__MessageDetails_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosapi_msgs__srv__MessageDetails_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__MessageDetails_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {rosapi_msgs__srv__MessageDetails_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription rosapi_msgs__srv__MessageDetails_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__msg__TypeDef__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__MessageDetails_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {rosapi_msgs__srv__MessageDetails_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rosapi_msgs__srv__MessageDetails_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rosapi_msgs__srv__MessageDetails_Event__TYPE_NAME, 36, 36},
      {rosapi_msgs__srv__MessageDetails_Event__FIELDS, 3, 3},
    },
    {rosapi_msgs__srv__MessageDetails_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&rosapi_msgs__msg__TypeDef__EXPECTED_HASH, rosapi_msgs__msg__TypeDef__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = rosapi_msgs__msg__TypeDef__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = rosapi_msgs__srv__MessageDetails_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = rosapi_msgs__srv__MessageDetails_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string type\n"
  "---\n"
  "TypeDef[] typedefs";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__MessageDetails__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__MessageDetails__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 35, 35},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__MessageDetails_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__MessageDetails_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__MessageDetails_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__MessageDetails_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
rosapi_msgs__srv__MessageDetails_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rosapi_msgs__srv__MessageDetails_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__MessageDetails__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__MessageDetails__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosapi_msgs__msg__TypeDef__get_individual_type_description_source(NULL);
    sources[3] = *rosapi_msgs__srv__MessageDetails_Event__get_individual_type_description_source(NULL);
    sources[4] = *rosapi_msgs__srv__MessageDetails_Request__get_individual_type_description_source(NULL);
    sources[5] = *rosapi_msgs__srv__MessageDetails_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__MessageDetails_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__MessageDetails_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__MessageDetails_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__MessageDetails_Response__get_individual_type_description_source(NULL),
    sources[1] = *rosapi_msgs__msg__TypeDef__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rosapi_msgs__srv__MessageDetails_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rosapi_msgs__srv__MessageDetails_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *rosapi_msgs__msg__TypeDef__get_individual_type_description_source(NULL);
    sources[3] = *rosapi_msgs__srv__MessageDetails_Request__get_individual_type_description_source(NULL);
    sources[4] = *rosapi_msgs__srv__MessageDetails_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}