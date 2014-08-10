// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: connectionInfo.proto

#ifndef PROTOBUF_connectionInfo_2eproto__INCLUDED
#define PROTOBUF_connectionInfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace eolwral {
namespace osmonitor {
namespace core {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_connectionInfo_2eproto();
void protobuf_AssignDesc_connectionInfo_2eproto();
void protobuf_ShutdownFile_connectionInfo_2eproto();

class connectionInfo;

enum connectionInfo_connectionType {
  connectionInfo_connectionType_TCPv4 = 0,
  connectionInfo_connectionType_TCPv6 = 1,
  connectionInfo_connectionType_UDPv4 = 2,
  connectionInfo_connectionType_UDPv6 = 3,
  connectionInfo_connectionType_RAWv4 = 4,
  connectionInfo_connectionType_RAWv6 = 5
};
bool connectionInfo_connectionType_IsValid(int value);
const connectionInfo_connectionType connectionInfo_connectionType_connectionType_MIN = connectionInfo_connectionType_TCPv4;
const connectionInfo_connectionType connectionInfo_connectionType_connectionType_MAX = connectionInfo_connectionType_RAWv6;
const int connectionInfo_connectionType_connectionType_ARRAYSIZE = connectionInfo_connectionType_connectionType_MAX + 1;

const ::google::protobuf::EnumDescriptor* connectionInfo_connectionType_descriptor();
inline const ::std::string& connectionInfo_connectionType_Name(connectionInfo_connectionType value) {
  return ::google::protobuf::internal::NameOfEnum(
    connectionInfo_connectionType_descriptor(), value);
}
inline bool connectionInfo_connectionType_Parse(
    const ::std::string& name, connectionInfo_connectionType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<connectionInfo_connectionType>(
    connectionInfo_connectionType_descriptor(), name, value);
}
enum connectionInfo_connectionStatus {
  connectionInfo_connectionStatus_UNKNOWN = 0,
  connectionInfo_connectionStatus_ESTABLISHED = 1,
  connectionInfo_connectionStatus_SYN_SENT = 2,
  connectionInfo_connectionStatus_SYN_RECV = 3,
  connectionInfo_connectionStatus_FIN_WAIT1 = 4,
  connectionInfo_connectionStatus_FIN_WAIT2 = 5,
  connectionInfo_connectionStatus_TIME_WAIT = 6,
  connectionInfo_connectionStatus_CLOSE = 7,
  connectionInfo_connectionStatus_CLOSE_WAIT = 8,
  connectionInfo_connectionStatus_LAST_ACK = 9,
  connectionInfo_connectionStatus_LISTEN = 10,
  connectionInfo_connectionStatus_CLOSING = 11
};
bool connectionInfo_connectionStatus_IsValid(int value);
const connectionInfo_connectionStatus connectionInfo_connectionStatus_connectionStatus_MIN = connectionInfo_connectionStatus_UNKNOWN;
const connectionInfo_connectionStatus connectionInfo_connectionStatus_connectionStatus_MAX = connectionInfo_connectionStatus_CLOSING;
const int connectionInfo_connectionStatus_connectionStatus_ARRAYSIZE = connectionInfo_connectionStatus_connectionStatus_MAX + 1;

const ::google::protobuf::EnumDescriptor* connectionInfo_connectionStatus_descriptor();
inline const ::std::string& connectionInfo_connectionStatus_Name(connectionInfo_connectionStatus value) {
  return ::google::protobuf::internal::NameOfEnum(
    connectionInfo_connectionStatus_descriptor(), value);
}
inline bool connectionInfo_connectionStatus_Parse(
    const ::std::string& name, connectionInfo_connectionStatus* value) {
  return ::google::protobuf::internal::ParseNamedEnum<connectionInfo_connectionStatus>(
    connectionInfo_connectionStatus_descriptor(), name, value);
}
// ===================================================================

class connectionInfo : public ::google::protobuf::Message {
 public:
  connectionInfo();
  virtual ~connectionInfo();

  connectionInfo(const connectionInfo& from);

  inline connectionInfo& operator=(const connectionInfo& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const connectionInfo& default_instance();

  void Swap(connectionInfo* other);

  // implements Message ----------------------------------------------

  connectionInfo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const connectionInfo& from);
  void MergeFrom(const connectionInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef connectionInfo_connectionType connectionType;
  static const connectionType TCPv4 = connectionInfo_connectionType_TCPv4;
  static const connectionType TCPv6 = connectionInfo_connectionType_TCPv6;
  static const connectionType UDPv4 = connectionInfo_connectionType_UDPv4;
  static const connectionType UDPv6 = connectionInfo_connectionType_UDPv6;
  static const connectionType RAWv4 = connectionInfo_connectionType_RAWv4;
  static const connectionType RAWv6 = connectionInfo_connectionType_RAWv6;
  static inline bool connectionType_IsValid(int value) {
    return connectionInfo_connectionType_IsValid(value);
  }
  static const connectionType connectionType_MIN =
    connectionInfo_connectionType_connectionType_MIN;
  static const connectionType connectionType_MAX =
    connectionInfo_connectionType_connectionType_MAX;
  static const int connectionType_ARRAYSIZE =
    connectionInfo_connectionType_connectionType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  connectionType_descriptor() {
    return connectionInfo_connectionType_descriptor();
  }
  static inline const ::std::string& connectionType_Name(connectionType value) {
    return connectionInfo_connectionType_Name(value);
  }
  static inline bool connectionType_Parse(const ::std::string& name,
      connectionType* value) {
    return connectionInfo_connectionType_Parse(name, value);
  }

  typedef connectionInfo_connectionStatus connectionStatus;
  static const connectionStatus UNKNOWN = connectionInfo_connectionStatus_UNKNOWN;
  static const connectionStatus ESTABLISHED = connectionInfo_connectionStatus_ESTABLISHED;
  static const connectionStatus SYN_SENT = connectionInfo_connectionStatus_SYN_SENT;
  static const connectionStatus SYN_RECV = connectionInfo_connectionStatus_SYN_RECV;
  static const connectionStatus FIN_WAIT1 = connectionInfo_connectionStatus_FIN_WAIT1;
  static const connectionStatus FIN_WAIT2 = connectionInfo_connectionStatus_FIN_WAIT2;
  static const connectionStatus TIME_WAIT = connectionInfo_connectionStatus_TIME_WAIT;
  static const connectionStatus CLOSE = connectionInfo_connectionStatus_CLOSE;
  static const connectionStatus CLOSE_WAIT = connectionInfo_connectionStatus_CLOSE_WAIT;
  static const connectionStatus LAST_ACK = connectionInfo_connectionStatus_LAST_ACK;
  static const connectionStatus LISTEN = connectionInfo_connectionStatus_LISTEN;
  static const connectionStatus CLOSING = connectionInfo_connectionStatus_CLOSING;
  static inline bool connectionStatus_IsValid(int value) {
    return connectionInfo_connectionStatus_IsValid(value);
  }
  static const connectionStatus connectionStatus_MIN =
    connectionInfo_connectionStatus_connectionStatus_MIN;
  static const connectionStatus connectionStatus_MAX =
    connectionInfo_connectionStatus_connectionStatus_MAX;
  static const int connectionStatus_ARRAYSIZE =
    connectionInfo_connectionStatus_connectionStatus_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  connectionStatus_descriptor() {
    return connectionInfo_connectionStatus_descriptor();
  }
  static inline const ::std::string& connectionStatus_Name(connectionStatus value) {
    return connectionInfo_connectionStatus_Name(value);
  }
  static inline bool connectionStatus_Parse(const ::std::string& name,
      connectionStatus* value) {
    return connectionInfo_connectionStatus_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .com.eolwral.osmonitor.core.connectionInfo.connectionType Type = 1 [default = TCPv4];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::com::eolwral::osmonitor::core::connectionInfo_connectionType type() const;
  inline void set_type(::com::eolwral::osmonitor::core::connectionInfo_connectionType value);

  // required .com.eolwral.osmonitor.core.connectionInfo.connectionStatus Status = 2 [default = UNKNOWN];
  inline bool has_status() const;
  inline void clear_status();
  static const int kStatusFieldNumber = 2;
  inline ::com::eolwral::osmonitor::core::connectionInfo_connectionStatus status() const;
  inline void set_status(::com::eolwral::osmonitor::core::connectionInfo_connectionStatus value);

  // required string localIP = 3;
  inline bool has_localip() const;
  inline void clear_localip();
  static const int kLocalIPFieldNumber = 3;
  inline const ::std::string& localip() const;
  inline void set_localip(const ::std::string& value);
  inline void set_localip(const char* value);
  inline void set_localip(const char* value, size_t size);
  inline ::std::string* mutable_localip();
  inline ::std::string* release_localip();
  inline void set_allocated_localip(::std::string* localip);

  // required uint32 localPort = 4;
  inline bool has_localport() const;
  inline void clear_localport();
  static const int kLocalPortFieldNumber = 4;
  inline ::google::protobuf::uint32 localport() const;
  inline void set_localport(::google::protobuf::uint32 value);

  // required string remoteIP = 5;
  inline bool has_remoteip() const;
  inline void clear_remoteip();
  static const int kRemoteIPFieldNumber = 5;
  inline const ::std::string& remoteip() const;
  inline void set_remoteip(const ::std::string& value);
  inline void set_remoteip(const char* value);
  inline void set_remoteip(const char* value, size_t size);
  inline ::std::string* mutable_remoteip();
  inline ::std::string* release_remoteip();
  inline void set_allocated_remoteip(::std::string* remoteip);

  // required uint32 remotePort = 6;
  inline bool has_remoteport() const;
  inline void clear_remoteport();
  static const int kRemotePortFieldNumber = 6;
  inline ::google::protobuf::uint32 remoteport() const;
  inline void set_remoteport(::google::protobuf::uint32 value);

  // required uint32 uid = 7;
  inline bool has_uid() const;
  inline void clear_uid();
  static const int kUidFieldNumber = 7;
  inline ::google::protobuf::uint32 uid() const;
  inline void set_uid(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:com.eolwral.osmonitor.core.connectionInfo)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_status();
  inline void clear_has_status();
  inline void set_has_localip();
  inline void clear_has_localip();
  inline void set_has_localport();
  inline void clear_has_localport();
  inline void set_has_remoteip();
  inline void clear_has_remoteip();
  inline void set_has_remoteport();
  inline void clear_has_remoteport();
  inline void set_has_uid();
  inline void clear_has_uid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int type_;
  int status_;
  ::std::string* localip_;
  ::std::string* remoteip_;
  ::google::protobuf::uint32 localport_;
  ::google::protobuf::uint32 remoteport_;
  ::google::protobuf::uint32 uid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void  protobuf_AddDesc_connectionInfo_2eproto();
  friend void protobuf_AssignDesc_connectionInfo_2eproto();
  friend void protobuf_ShutdownFile_connectionInfo_2eproto();

  void InitAsDefaultInstance();
  static connectionInfo* default_instance_;
};
// ===================================================================


// ===================================================================

// connectionInfo

// required .com.eolwral.osmonitor.core.connectionInfo.connectionType Type = 1 [default = TCPv4];
inline bool connectionInfo::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void connectionInfo::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void connectionInfo::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void connectionInfo::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::com::eolwral::osmonitor::core::connectionInfo_connectionType connectionInfo::type() const {
  return static_cast< ::com::eolwral::osmonitor::core::connectionInfo_connectionType >(type_);
}
inline void connectionInfo::set_type(::com::eolwral::osmonitor::core::connectionInfo_connectionType value) {
  assert(::com::eolwral::osmonitor::core::connectionInfo_connectionType_IsValid(value));
  set_has_type();
  type_ = value;
}

// required .com.eolwral.osmonitor.core.connectionInfo.connectionStatus Status = 2 [default = UNKNOWN];
inline bool connectionInfo::has_status() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void connectionInfo::set_has_status() {
  _has_bits_[0] |= 0x00000002u;
}
inline void connectionInfo::clear_has_status() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void connectionInfo::clear_status() {
  status_ = 0;
  clear_has_status();
}
inline ::com::eolwral::osmonitor::core::connectionInfo_connectionStatus connectionInfo::status() const {
  return static_cast< ::com::eolwral::osmonitor::core::connectionInfo_connectionStatus >(status_);
}
inline void connectionInfo::set_status(::com::eolwral::osmonitor::core::connectionInfo_connectionStatus value) {
  assert(::com::eolwral::osmonitor::core::connectionInfo_connectionStatus_IsValid(value));
  set_has_status();
  status_ = value;
}

// required string localIP = 3;
inline bool connectionInfo::has_localip() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void connectionInfo::set_has_localip() {
  _has_bits_[0] |= 0x00000004u;
}
inline void connectionInfo::clear_has_localip() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void connectionInfo::clear_localip() {
  if (localip_ != &::google::protobuf::internal::kEmptyString) {
    localip_->clear();
  }
  clear_has_localip();
}
inline const ::std::string& connectionInfo::localip() const {
  return *localip_;
}
inline void connectionInfo::set_localip(const ::std::string& value) {
  set_has_localip();
  if (localip_ == &::google::protobuf::internal::kEmptyString) {
    localip_ = new ::std::string;
  }
  localip_->assign(value);
}
inline void connectionInfo::set_localip(const char* value) {
  set_has_localip();
  if (localip_ == &::google::protobuf::internal::kEmptyString) {
    localip_ = new ::std::string;
  }
  localip_->assign(value);
}
inline void connectionInfo::set_localip(const char* value, size_t size) {
  set_has_localip();
  if (localip_ == &::google::protobuf::internal::kEmptyString) {
    localip_ = new ::std::string;
  }
  localip_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* connectionInfo::mutable_localip() {
  set_has_localip();
  if (localip_ == &::google::protobuf::internal::kEmptyString) {
    localip_ = new ::std::string;
  }
  return localip_;
}
inline ::std::string* connectionInfo::release_localip() {
  clear_has_localip();
  if (localip_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = localip_;
    localip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void connectionInfo::set_allocated_localip(::std::string* localip) {
  if (localip_ != &::google::protobuf::internal::kEmptyString) {
    delete localip_;
  }
  if (localip) {
    set_has_localip();
    localip_ = localip;
  } else {
    clear_has_localip();
    localip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 localPort = 4;
inline bool connectionInfo::has_localport() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void connectionInfo::set_has_localport() {
  _has_bits_[0] |= 0x00000008u;
}
inline void connectionInfo::clear_has_localport() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void connectionInfo::clear_localport() {
  localport_ = 0u;
  clear_has_localport();
}
inline ::google::protobuf::uint32 connectionInfo::localport() const {
  return localport_;
}
inline void connectionInfo::set_localport(::google::protobuf::uint32 value) {
  set_has_localport();
  localport_ = value;
}

// required string remoteIP = 5;
inline bool connectionInfo::has_remoteip() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void connectionInfo::set_has_remoteip() {
  _has_bits_[0] |= 0x00000010u;
}
inline void connectionInfo::clear_has_remoteip() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void connectionInfo::clear_remoteip() {
  if (remoteip_ != &::google::protobuf::internal::kEmptyString) {
    remoteip_->clear();
  }
  clear_has_remoteip();
}
inline const ::std::string& connectionInfo::remoteip() const {
  return *remoteip_;
}
inline void connectionInfo::set_remoteip(const ::std::string& value) {
  set_has_remoteip();
  if (remoteip_ == &::google::protobuf::internal::kEmptyString) {
    remoteip_ = new ::std::string;
  }
  remoteip_->assign(value);
}
inline void connectionInfo::set_remoteip(const char* value) {
  set_has_remoteip();
  if (remoteip_ == &::google::protobuf::internal::kEmptyString) {
    remoteip_ = new ::std::string;
  }
  remoteip_->assign(value);
}
inline void connectionInfo::set_remoteip(const char* value, size_t size) {
  set_has_remoteip();
  if (remoteip_ == &::google::protobuf::internal::kEmptyString) {
    remoteip_ = new ::std::string;
  }
  remoteip_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* connectionInfo::mutable_remoteip() {
  set_has_remoteip();
  if (remoteip_ == &::google::protobuf::internal::kEmptyString) {
    remoteip_ = new ::std::string;
  }
  return remoteip_;
}
inline ::std::string* connectionInfo::release_remoteip() {
  clear_has_remoteip();
  if (remoteip_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = remoteip_;
    remoteip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void connectionInfo::set_allocated_remoteip(::std::string* remoteip) {
  if (remoteip_ != &::google::protobuf::internal::kEmptyString) {
    delete remoteip_;
  }
  if (remoteip) {
    set_has_remoteip();
    remoteip_ = remoteip;
  } else {
    clear_has_remoteip();
    remoteip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required uint32 remotePort = 6;
inline bool connectionInfo::has_remoteport() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void connectionInfo::set_has_remoteport() {
  _has_bits_[0] |= 0x00000020u;
}
inline void connectionInfo::clear_has_remoteport() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void connectionInfo::clear_remoteport() {
  remoteport_ = 0u;
  clear_has_remoteport();
}
inline ::google::protobuf::uint32 connectionInfo::remoteport() const {
  return remoteport_;
}
inline void connectionInfo::set_remoteport(::google::protobuf::uint32 value) {
  set_has_remoteport();
  remoteport_ = value;
}

// required uint32 uid = 7;
inline bool connectionInfo::has_uid() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void connectionInfo::set_has_uid() {
  _has_bits_[0] |= 0x00000040u;
}
inline void connectionInfo::clear_has_uid() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void connectionInfo::clear_uid() {
  uid_ = 0u;
  clear_has_uid();
}
inline ::google::protobuf::uint32 connectionInfo::uid() const {
  return uid_;
}
inline void connectionInfo::set_uid(::google::protobuf::uint32 value) {
  set_has_uid();
  uid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace core
}  // namespace osmonitor
}  // namespace eolwral
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::com::eolwral::osmonitor::core::connectionInfo_connectionType>() {
  return ::com::eolwral::osmonitor::core::connectionInfo_connectionType_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::com::eolwral::osmonitor::core::connectionInfo_connectionStatus>() {
  return ::com::eolwral::osmonitor::core::connectionInfo_connectionStatus_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_connectionInfo_2eproto__INCLUDED