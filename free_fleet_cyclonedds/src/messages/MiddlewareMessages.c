/****************************************************************

  Generated by Eclipse Cyclone DDS IDL to C Translator
  File name: MiddlewareMessages.c
  Source: MiddlewareMessages.idl
  Cyclone DDS: V0.7.0

*****************************************************************/
#include "MiddlewareMessages.h"


static const uint32_t MiddlewareMessages_Location_ops [] =
{
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MiddlewareMessages_Location, sec),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_Location, nanosec),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Location, x),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Location, y),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Location, yaw),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_Location, level_name),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MiddlewareMessages_Location_desc =
{
  sizeof (MiddlewareMessages_Location),
  8u,
  DDS_TOPIC_NO_OPTIMIZE,
  0u,
  "MiddlewareMessages::Location",
  NULL,
  7,
  MiddlewareMessages_Location_ops,
  "<MetaData version=\"1.0.0\"><Module name=\"MiddlewareMessages\"><Struct name=\"Location\"><Member name=\"sec\"><Long/></Member><Member name=\"nanosec\"><ULong/></Member><Member name=\"x\"><Double/></Member><Member name=\"y\"><Double/></Member><Member name=\"yaw\"><Double/></Member><Member name=\"level_name\"><String/></Member></Struct></Module></MetaData>"
};


static const uint32_t MiddlewareMessages_ModeParameter_ops [] =
{
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_ModeParameter, name),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_ModeParameter, value),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MiddlewareMessages_ModeParameter_desc =
{
  sizeof (MiddlewareMessages_ModeParameter),
  sizeof (char *),
  DDS_TOPIC_NO_OPTIMIZE,
  0u,
  "MiddlewareMessages::ModeParameter",
  NULL,
  3,
  MiddlewareMessages_ModeParameter_ops,
  "<MetaData version=\"1.0.0\"><Module name=\"MiddlewareMessages\"><Struct name=\"ModeParameter\"><Member name=\"name\"><String/></Member><Member name=\"value\"><String/></Member></Struct></Module></MetaData>"
};



static const uint32_t MiddlewareMessages_RobotMode_ops [] =
{
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_RobotMode, mode),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_RobotMode, info),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MiddlewareMessages_RobotMode_desc =
{
  sizeof (MiddlewareMessages_RobotMode),
  sizeof (char *),
  DDS_TOPIC_NO_OPTIMIZE,
  0u,
  "MiddlewareMessages::RobotMode",
  NULL,
  3,
  MiddlewareMessages_RobotMode_ops,
  "<MetaData version=\"1.0.0\"><Module name=\"MiddlewareMessages\"><Struct name=\"RobotMode\"><Member name=\"mode\"><ULong/></Member><Member name=\"info\"><String/></Member></Struct></Module></MetaData>"
};


static const uint32_t MiddlewareMessages_ModeRequest_ops [] =
{
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_ModeRequest, robot_name),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_ModeRequest, task_id),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_ModeRequest, mode.mode),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_ModeRequest, mode.info),
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_STU, offsetof (MiddlewareMessages_ModeRequest, parameters),
  sizeof (MiddlewareMessages_ModeParameter), (9u << 16u) + 4u,
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_ModeParameter, name),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_ModeParameter, value),
  DDS_OP_RTS,
  DDS_OP_RTS
};

const dds_topic_descriptor_t MiddlewareMessages_ModeRequest_desc =
{
  sizeof (MiddlewareMessages_ModeRequest),
  sizeof (char *),
  DDS_TOPIC_NO_OPTIMIZE,
  0u,
  "MiddlewareMessages::ModeRequest",
  NULL,
  10,
  MiddlewareMessages_ModeRequest_ops,
  "<MetaData version=\"1.0.0\"><Module name=\"MiddlewareMessages\"><Struct name=\"RobotMode\"><Member name=\"mode\"><ULong/></Member><Member name=\"info\"><String/></Member></Struct><Struct name=\"ModeParameter\"><Member name=\"name\"><String/></Member><Member name=\"value\"><String/></Member></Struct><Struct name=\"ModeRequest\"><Member name=\"robot_name\"><String/></Member><Member name=\"task_id\"><String/></Member><Member name=\"mode\"><Type name=\"RobotMode\"/></Member><Member name=\"parameters\"><Sequence><Type name=\"ModeParameter\"/></Sequence></Member></Struct></Module></MetaData>"
};


static const uint32_t MiddlewareMessages_NavigationRequest_ops [] =
{
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_NavigationRequest, robot_name),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_NavigationRequest, task_id),
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_STU, offsetof (MiddlewareMessages_NavigationRequest, path),
  sizeof (MiddlewareMessages_Location), (17u << 16u) + 4u,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MiddlewareMessages_Location, sec),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_Location, nanosec),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Location, x),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Location, y),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Location, yaw),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_Location, level_name),
  DDS_OP_RTS,
  DDS_OP_RTS
};

const dds_topic_descriptor_t MiddlewareMessages_NavigationRequest_desc =
{
  sizeof (MiddlewareMessages_NavigationRequest),
  sizeof (char *),
  DDS_TOPIC_NO_OPTIMIZE,
  0u,
  "MiddlewareMessages::NavigationRequest",
  NULL,
  12,
  MiddlewareMessages_NavigationRequest_ops,
  "<MetaData version=\"1.0.0\"><Module name=\"MiddlewareMessages\"><Struct name=\"Location\"><Member name=\"sec\"><Long/></Member><Member name=\"nanosec\"><ULong/></Member><Member name=\"x\"><Double/></Member><Member name=\"y\"><Double/></Member><Member name=\"yaw\"><Double/></Member><Member name=\"level_name\"><String/></Member></Struct><Struct name=\"NavigationRequest\"><Member name=\"robot_name\"><String/></Member><Member name=\"task_id\"><String/></Member><Member name=\"path\"><Sequence><Type name=\"Location\"/></Sequence></Member></Struct></Module></MetaData>"
};


static const uint32_t MiddlewareMessages_RobotState_ops [] =
{
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_RobotState, name),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_RobotState, model),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_RobotState, task_id),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_RobotState, mode.mode),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_RobotState, mode.info),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_RobotState, battery_percent),
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MiddlewareMessages_RobotState, location.sec),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_RobotState, location.nanosec),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_RobotState, location.x),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_RobotState, location.y),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_RobotState, location.yaw),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_RobotState, location.level_name),
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_STU, offsetof (MiddlewareMessages_RobotState, path),
  sizeof (MiddlewareMessages_Location), (17u << 16u) + 4u,
  DDS_OP_ADR | DDS_OP_TYPE_4BY | DDS_OP_FLAG_SGN, offsetof (MiddlewareMessages_Location, sec),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_Location, nanosec),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Location, x),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Location, y),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Location, yaw),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_Location, level_name),
  DDS_OP_RTS,
  DDS_OP_RTS
};

const dds_topic_descriptor_t MiddlewareMessages_RobotState_desc =
{
  sizeof (MiddlewareMessages_RobotState),
  8u,
  DDS_TOPIC_NO_OPTIMIZE,
  0u,
  "MiddlewareMessages::RobotState",
  NULL,
  22,
  MiddlewareMessages_RobotState_ops,
  "<MetaData version=\"1.0.0\"><Module name=\"MiddlewareMessages\"><Struct name=\"RobotMode\"><Member name=\"mode\"><ULong/></Member><Member name=\"info\"><String/></Member></Struct><Struct name=\"Location\"><Member name=\"sec\"><Long/></Member><Member name=\"nanosec\"><ULong/></Member><Member name=\"x\"><Double/></Member><Member name=\"y\"><Double/></Member><Member name=\"yaw\"><Double/></Member><Member name=\"level_name\"><String/></Member></Struct><Struct name=\"RobotState\"><Member name=\"name\"><String/></Member><Member name=\"model\"><String/></Member><Member name=\"task_id\"><String/></Member><Member name=\"mode\"><Type name=\"RobotMode\"/></Member><Member name=\"battery_percent\"><Double/></Member><Member name=\"location\"><Type name=\"Location\"/></Member><Member name=\"path\"><Sequence><Type name=\"Location\"/></Sequence></Member></Struct></Module></MetaData>"
};


static const uint32_t MiddlewareMessages_GraphRequest_ops [] =
{
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_GraphRequest, version),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MiddlewareMessages_GraphRequest_desc =
{
  sizeof (MiddlewareMessages_GraphRequest),
  4u,
  0u,
  0u,
  "MiddlewareMessages::GraphRequest",
  NULL,
  2,
  MiddlewareMessages_GraphRequest_ops,
  "<MetaData version=\"1.0.0\"><Module name=\"MiddlewareMessages\"><Struct name=\"GraphRequest\"><Member name=\"version\"><ULong/></Member></Struct></Module></MetaData>"
};


static const uint32_t MiddlewareMessages_Waypoint_ops [] =
{
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_Waypoint, map_name),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Waypoint, x),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Waypoint, y),
  DDS_OP_ADR | DDS_OP_TYPE_BOO, offsetof (MiddlewareMessages_Waypoint, is_holding_point),
  DDS_OP_ADR | DDS_OP_TYPE_BOO, offsetof (MiddlewareMessages_Waypoint, is_passthrough_point),
  DDS_OP_ADR | DDS_OP_TYPE_BOO, offsetof (MiddlewareMessages_Waypoint, is_parking_spot),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_Waypoint, index),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_Waypoint, name),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MiddlewareMessages_Waypoint_desc =
{
  sizeof (MiddlewareMessages_Waypoint),
  8u,
  DDS_TOPIC_NO_OPTIMIZE,
  0u,
  "MiddlewareMessages::Waypoint",
  NULL,
  9,
  MiddlewareMessages_Waypoint_ops,
  "<MetaData version=\"1.0.0\"><Module name=\"MiddlewareMessages\"><Struct name=\"Waypoint\"><Member name=\"map_name\"><String/></Member><Member name=\"x\"><Double/></Member><Member name=\"y\"><Double/></Member><Member name=\"is_holding_point\"><Boolean/></Member><Member name=\"is_passthrough_point\"><Boolean/></Member><Member name=\"is_parking_spot\"><Boolean/></Member><Member name=\"index\"><ULong/></Member><Member name=\"name\"><String/></Member></Struct></Module></MetaData>"
};


static const uint32_t MiddlewareMessages_Lane_ops [] =
{
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_Lane, entry),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_Lane, exit),
  DDS_OP_RTS
};

const dds_topic_descriptor_t MiddlewareMessages_Lane_desc =
{
  sizeof (MiddlewareMessages_Lane),
  4u,
  0u,
  0u,
  "MiddlewareMessages::Lane",
  NULL,
  3,
  MiddlewareMessages_Lane_ops,
  "<MetaData version=\"1.0.0\"><Module name=\"MiddlewareMessages\"><Struct name=\"Lane\"><Member name=\"entry\"><ULong/></Member><Member name=\"exit\"><ULong/></Member></Struct></Module></MetaData>"
};


static const uint32_t MiddlewareMessages_Graph_ops [] =
{
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_STU, offsetof (MiddlewareMessages_Graph, waypoints),
  sizeof (MiddlewareMessages_Waypoint), (21u << 16u) + 4u,
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_Waypoint, map_name),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Waypoint, x),
  DDS_OP_ADR | DDS_OP_TYPE_8BY | DDS_OP_FLAG_FP, offsetof (MiddlewareMessages_Waypoint, y),
  DDS_OP_ADR | DDS_OP_TYPE_BOO, offsetof (MiddlewareMessages_Waypoint, is_holding_point),
  DDS_OP_ADR | DDS_OP_TYPE_BOO, offsetof (MiddlewareMessages_Waypoint, is_passthrough_point),
  DDS_OP_ADR | DDS_OP_TYPE_BOO, offsetof (MiddlewareMessages_Waypoint, is_parking_spot),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_Waypoint, index),
  DDS_OP_ADR | DDS_OP_TYPE_STR, offsetof (MiddlewareMessages_Waypoint, name),
  DDS_OP_RTS,
  DDS_OP_ADR | DDS_OP_TYPE_SEQ | DDS_OP_SUBTYPE_STU, offsetof (MiddlewareMessages_Graph, lanes),
  sizeof (MiddlewareMessages_Lane), (9u << 16u) + 4u,
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_Lane, entry),
  DDS_OP_ADR | DDS_OP_TYPE_4BY, offsetof (MiddlewareMessages_Lane, exit),
  DDS_OP_RTS,
  DDS_OP_RTS
};

const dds_topic_descriptor_t MiddlewareMessages_Graph_desc =
{
  sizeof (MiddlewareMessages_Graph),
  sizeof (char *),
  DDS_TOPIC_NO_OPTIMIZE,
  0u,
  "MiddlewareMessages::Graph",
  NULL,
  17,
  MiddlewareMessages_Graph_ops,
  "<MetaData version=\"1.0.0\"><Module name=\"MiddlewareMessages\"><Struct name=\"Waypoint\"><Member name=\"map_name\"><String/></Member><Member name=\"x\"><Double/></Member><Member name=\"y\"><Double/></Member><Member name=\"is_holding_point\"><Boolean/></Member><Member name=\"is_passthrough_point\"><Boolean/></Member><Member name=\"is_parking_spot\"><Boolean/></Member><Member name=\"index\"><ULong/></Member><Member name=\"name\"><String/></Member></Struct><Struct name=\"Lane\"><Member name=\"entry\"><ULong/></Member><Member name=\"exit\"><ULong/></Member></Struct><Struct name=\"Graph\"><Member name=\"waypoints\"><Sequence><Type name=\"Waypoint\"/></Sequence></Member><Member name=\"lanes\"><Sequence><Type name=\"Lane\"/></Sequence></Member></Struct></Module></MetaData>"
};
