/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: aesm.proto */

#ifndef PROTOBUF_C_aesm_2eproto__INCLUDED
#define PROTOBUF_C_aesm_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _AesmServiceRequest AesmServiceRequest;
typedef struct _AesmServiceRequest__GetLaunchToken AesmServiceRequest__GetLaunchToken;
typedef struct _AesmServiceResponse AesmServiceResponse;
typedef struct _AesmServiceResponse__GetLaunchToken AesmServiceResponse__GetLaunchToken;


/* --- enums --- */


/* --- messages --- */

struct  _AesmServiceRequest__GetLaunchToken
{
  ProtobufCMessage base;
  ProtobufCBinaryData enclavehash;
  ProtobufCBinaryData modulus;
  ProtobufCBinaryData attributes;
  uint32_t timeout;
};
#define AESM_SERVICE_REQUEST__GET_LAUNCH_TOKEN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&aesm_service_request__get_launch_token__descriptor) \
    , {0,NULL}, {0,NULL}, {0,NULL}, 0 }


struct  _AesmServiceRequest
{
  ProtobufCMessage base;
  AesmServiceRequest__GetLaunchToken *getlaunchtoken;
};
#define AESM_SERVICE_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&aesm_service_request__descriptor) \
    , NULL }


struct  _AesmServiceResponse__GetLaunchToken
{
  ProtobufCMessage base;
  uint32_t error;
  ProtobufCBinaryData token;
};
#define AESM_SERVICE_RESPONSE__GET_LAUNCH_TOKEN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&aesm_service_response__get_launch_token__descriptor) \
    , 0, {0,NULL} }


struct  _AesmServiceResponse
{
  ProtobufCMessage base;
  AesmServiceResponse__GetLaunchToken *getlaunchtoken;
};
#define AESM_SERVICE_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&aesm_service_response__descriptor) \
    , NULL }


/* AesmServiceRequest__GetLaunchToken methods */
void   aesm_service_request__get_launch_token__init
                     (AesmServiceRequest__GetLaunchToken         *message);
/* AesmServiceRequest methods */
void   aesm_service_request__init
                     (AesmServiceRequest         *message);
size_t aesm_service_request__get_packed_size
                     (const AesmServiceRequest   *message);
size_t aesm_service_request__pack
                     (const AesmServiceRequest   *message,
                      uint8_t             *out);
size_t aesm_service_request__pack_to_buffer
                     (const AesmServiceRequest   *message,
                      ProtobufCBuffer     *buffer);
AesmServiceRequest *
       aesm_service_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   aesm_service_request__free_unpacked
                     (AesmServiceRequest *message,
                      ProtobufCAllocator *allocator);
/* AesmServiceResponse__GetLaunchToken methods */
void   aesm_service_response__get_launch_token__init
                     (AesmServiceResponse__GetLaunchToken         *message);
/* AesmServiceResponse methods */
void   aesm_service_response__init
                     (AesmServiceResponse         *message);
size_t aesm_service_response__get_packed_size
                     (const AesmServiceResponse   *message);
size_t aesm_service_response__pack
                     (const AesmServiceResponse   *message,
                      uint8_t             *out);
size_t aesm_service_response__pack_to_buffer
                     (const AesmServiceResponse   *message,
                      ProtobufCBuffer     *buffer);
AesmServiceResponse *
       aesm_service_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   aesm_service_response__free_unpacked
                     (AesmServiceResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*AesmServiceRequest__GetLaunchToken_Closure)
                 (const AesmServiceRequest__GetLaunchToken *message,
                  void *closure_data);
typedef void (*AesmServiceRequest_Closure)
                 (const AesmServiceRequest *message,
                  void *closure_data);
typedef void (*AesmServiceResponse__GetLaunchToken_Closure)
                 (const AesmServiceResponse__GetLaunchToken *message,
                  void *closure_data);
typedef void (*AesmServiceResponse_Closure)
                 (const AesmServiceResponse *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor aesm_service_request__descriptor;
extern const ProtobufCMessageDescriptor aesm_service_request__get_launch_token__descriptor;
extern const ProtobufCMessageDescriptor aesm_service_response__descriptor;
extern const ProtobufCMessageDescriptor aesm_service_response__get_launch_token__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_aesm_2eproto__INCLUDED */
