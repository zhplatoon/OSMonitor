// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cpuInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace eolwral {
namespace osmonitor {
namespace core {

namespace {

const ::google::protobuf::Descriptor* cpuInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  cpuInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cpuInfo_2eproto() {
  protobuf_AddDesc_cpuInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cpuInfo.proto");
  GOOGLE_CHECK(file != NULL);
  cpuInfo_descriptor_ = file->message_type(0);
  static const int cpuInfo_offsets_[11] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, usertime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, nicetime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, systemtime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, idletime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, iowaittime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, irqtime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, softirqtime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, cpuutilization_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, cputime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, cpunumber_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, offline_),
  };
  cpuInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      cpuInfo_descriptor_,
      cpuInfo::default_instance_,
      cpuInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(cpuInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(cpuInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cpuInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    cpuInfo_descriptor_, &cpuInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cpuInfo_2eproto() {
  delete cpuInfo::default_instance_;
  delete cpuInfo_reflection_;
}

void protobuf_AddDesc_cpuInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rcpuInfo.proto\022\032com.eolwral.osmonitor.c"
    "ore\"\332\001\n\007cpuInfo\022\020\n\010userTime\030\001 \002(\004\022\020\n\010nic"
    "eTime\030\002 \002(\004\022\022\n\nsystemTime\030\003 \002(\004\022\020\n\010idleT"
    "ime\030\004 \002(\004\022\022\n\nioWaitTime\030\005 \002(\004\022\017\n\007irqTime"
    "\030\006 \002(\004\022\023\n\013softIRQTime\030\007 \002(\004\022\026\n\016cpuUtiliz"
    "ation\030\010 \002(\002\022\017\n\007cpuTime\030\t \002(\004\022\021\n\tcpuNumbe"
    "r\030\n \001(\r\022\017\n\007offLine\030\013 \001(\010", 264);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cpuInfo.proto", &protobuf_RegisterTypes);
  cpuInfo::default_instance_ = new cpuInfo();
  cpuInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cpuInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cpuInfo_2eproto {
  StaticDescriptorInitializer_cpuInfo_2eproto() {
    protobuf_AddDesc_cpuInfo_2eproto();
  }
} static_descriptor_initializer_cpuInfo_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int cpuInfo::kUserTimeFieldNumber;
const int cpuInfo::kNiceTimeFieldNumber;
const int cpuInfo::kSystemTimeFieldNumber;
const int cpuInfo::kIdleTimeFieldNumber;
const int cpuInfo::kIoWaitTimeFieldNumber;
const int cpuInfo::kIrqTimeFieldNumber;
const int cpuInfo::kSoftIRQTimeFieldNumber;
const int cpuInfo::kCpuUtilizationFieldNumber;
const int cpuInfo::kCpuTimeFieldNumber;
const int cpuInfo::kCpuNumberFieldNumber;
const int cpuInfo::kOffLineFieldNumber;
#endif  // !_MSC_VER

cpuInfo::cpuInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void cpuInfo::InitAsDefaultInstance() {
}

cpuInfo::cpuInfo(const cpuInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void cpuInfo::SharedCtor() {
  _cached_size_ = 0;
  usertime_ = GOOGLE_ULONGLONG(0);
  nicetime_ = GOOGLE_ULONGLONG(0);
  systemtime_ = GOOGLE_ULONGLONG(0);
  idletime_ = GOOGLE_ULONGLONG(0);
  iowaittime_ = GOOGLE_ULONGLONG(0);
  irqtime_ = GOOGLE_ULONGLONG(0);
  softirqtime_ = GOOGLE_ULONGLONG(0);
  cpuutilization_ = 0;
  cputime_ = GOOGLE_ULONGLONG(0);
  cpunumber_ = 0u;
  offline_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

cpuInfo::~cpuInfo() {
  SharedDtor();
}

void cpuInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void cpuInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* cpuInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return cpuInfo_descriptor_;
}

const cpuInfo& cpuInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cpuInfo_2eproto();  return *default_instance_;
}

cpuInfo* cpuInfo::default_instance_ = NULL;

cpuInfo* cpuInfo::New() const {
  return new cpuInfo;
}

void cpuInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    usertime_ = GOOGLE_ULONGLONG(0);
    nicetime_ = GOOGLE_ULONGLONG(0);
    systemtime_ = GOOGLE_ULONGLONG(0);
    idletime_ = GOOGLE_ULONGLONG(0);
    iowaittime_ = GOOGLE_ULONGLONG(0);
    irqtime_ = GOOGLE_ULONGLONG(0);
    softirqtime_ = GOOGLE_ULONGLONG(0);
    cpuutilization_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    cputime_ = GOOGLE_ULONGLONG(0);
    cpunumber_ = 0u;
    offline_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool cpuInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 userTime = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &usertime_)));
          set_has_usertime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_niceTime;
        break;
      }
      
      // required uint64 niceTime = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_niceTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &nicetime_)));
          set_has_nicetime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_systemTime;
        break;
      }
      
      // required uint64 systemTime = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_systemTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &systemtime_)));
          set_has_systemtime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_idleTime;
        break;
      }
      
      // required uint64 idleTime = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_idleTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &idletime_)));
          set_has_idletime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_ioWaitTime;
        break;
      }
      
      // required uint64 ioWaitTime = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ioWaitTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &iowaittime_)));
          set_has_iowaittime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_irqTime;
        break;
      }
      
      // required uint64 irqTime = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_irqTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &irqtime_)));
          set_has_irqtime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_softIRQTime;
        break;
      }
      
      // required uint64 softIRQTime = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_softIRQTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &softirqtime_)));
          set_has_softirqtime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(69)) goto parse_cpuUtilization;
        break;
      }
      
      // required float cpuUtilization = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
         parse_cpuUtilization:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &cpuutilization_)));
          set_has_cpuutilization();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_cpuTime;
        break;
      }
      
      // required uint64 cpuTime = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_cpuTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &cputime_)));
          set_has_cputime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_cpuNumber;
        break;
      }
      
      // optional uint32 cpuNumber = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_cpuNumber:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &cpunumber_)));
          set_has_cpunumber();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_offLine;
        break;
      }
      
      // optional bool offLine = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_offLine:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &offline_)));
          set_has_offline();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void cpuInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 userTime = 1;
  if (has_usertime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->usertime(), output);
  }
  
  // required uint64 niceTime = 2;
  if (has_nicetime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->nicetime(), output);
  }
  
  // required uint64 systemTime = 3;
  if (has_systemtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->systemtime(), output);
  }
  
  // required uint64 idleTime = 4;
  if (has_idletime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(4, this->idletime(), output);
  }
  
  // required uint64 ioWaitTime = 5;
  if (has_iowaittime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(5, this->iowaittime(), output);
  }
  
  // required uint64 irqTime = 6;
  if (has_irqtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(6, this->irqtime(), output);
  }
  
  // required uint64 softIRQTime = 7;
  if (has_softirqtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(7, this->softirqtime(), output);
  }
  
  // required float cpuUtilization = 8;
  if (has_cpuutilization()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(8, this->cpuutilization(), output);
  }
  
  // required uint64 cpuTime = 9;
  if (has_cputime()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(9, this->cputime(), output);
  }
  
  // optional uint32 cpuNumber = 10;
  if (has_cpunumber()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(10, this->cpunumber(), output);
  }
  
  // optional bool offLine = 11;
  if (has_offline()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->offline(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* cpuInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint64 userTime = 1;
  if (has_usertime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->usertime(), target);
  }
  
  // required uint64 niceTime = 2;
  if (has_nicetime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->nicetime(), target);
  }
  
  // required uint64 systemTime = 3;
  if (has_systemtime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->systemtime(), target);
  }
  
  // required uint64 idleTime = 4;
  if (has_idletime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(4, this->idletime(), target);
  }
  
  // required uint64 ioWaitTime = 5;
  if (has_iowaittime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(5, this->iowaittime(), target);
  }
  
  // required uint64 irqTime = 6;
  if (has_irqtime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(6, this->irqtime(), target);
  }
  
  // required uint64 softIRQTime = 7;
  if (has_softirqtime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(7, this->softirqtime(), target);
  }
  
  // required float cpuUtilization = 8;
  if (has_cpuutilization()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(8, this->cpuutilization(), target);
  }
  
  // required uint64 cpuTime = 9;
  if (has_cputime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(9, this->cputime(), target);
  }
  
  // optional uint32 cpuNumber = 10;
  if (has_cpunumber()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(10, this->cpunumber(), target);
  }
  
  // optional bool offLine = 11;
  if (has_offline()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->offline(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int cpuInfo::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 userTime = 1;
    if (has_usertime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->usertime());
    }
    
    // required uint64 niceTime = 2;
    if (has_nicetime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->nicetime());
    }
    
    // required uint64 systemTime = 3;
    if (has_systemtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->systemtime());
    }
    
    // required uint64 idleTime = 4;
    if (has_idletime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->idletime());
    }
    
    // required uint64 ioWaitTime = 5;
    if (has_iowaittime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->iowaittime());
    }
    
    // required uint64 irqTime = 6;
    if (has_irqtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->irqtime());
    }
    
    // required uint64 softIRQTime = 7;
    if (has_softirqtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->softirqtime());
    }
    
    // required float cpuUtilization = 8;
    if (has_cpuutilization()) {
      total_size += 1 + 4;
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required uint64 cpuTime = 9;
    if (has_cputime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->cputime());
    }
    
    // optional uint32 cpuNumber = 10;
    if (has_cpunumber()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->cpunumber());
    }
    
    // optional bool offLine = 11;
    if (has_offline()) {
      total_size += 1 + 1;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void cpuInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const cpuInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const cpuInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void cpuInfo::MergeFrom(const cpuInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_usertime()) {
      set_usertime(from.usertime());
    }
    if (from.has_nicetime()) {
      set_nicetime(from.nicetime());
    }
    if (from.has_systemtime()) {
      set_systemtime(from.systemtime());
    }
    if (from.has_idletime()) {
      set_idletime(from.idletime());
    }
    if (from.has_iowaittime()) {
      set_iowaittime(from.iowaittime());
    }
    if (from.has_irqtime()) {
      set_irqtime(from.irqtime());
    }
    if (from.has_softirqtime()) {
      set_softirqtime(from.softirqtime());
    }
    if (from.has_cpuutilization()) {
      set_cpuutilization(from.cpuutilization());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_cputime()) {
      set_cputime(from.cputime());
    }
    if (from.has_cpunumber()) {
      set_cpunumber(from.cpunumber());
    }
    if (from.has_offline()) {
      set_offline(from.offline());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void cpuInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void cpuInfo::CopyFrom(const cpuInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool cpuInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x000001ff) != 0x000001ff) return false;
  
  return true;
}

void cpuInfo::Swap(cpuInfo* other) {
  if (other != this) {
    std::swap(usertime_, other->usertime_);
    std::swap(nicetime_, other->nicetime_);
    std::swap(systemtime_, other->systemtime_);
    std::swap(idletime_, other->idletime_);
    std::swap(iowaittime_, other->iowaittime_);
    std::swap(irqtime_, other->irqtime_);
    std::swap(softirqtime_, other->softirqtime_);
    std::swap(cpuutilization_, other->cpuutilization_);
    std::swap(cputime_, other->cputime_);
    std::swap(cpunumber_, other->cpunumber_);
    std::swap(offline_, other->offline_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata cpuInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = cpuInfo_descriptor_;
  metadata.reflection = cpuInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace core
}  // namespace osmonitor
}  // namespace eolwral
}  // namespace com

// @@protoc_insertion_point(global_scope)
