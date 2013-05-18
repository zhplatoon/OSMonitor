// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cpuInfo.proto

package com.eolwral.osmonitor.core;

public final class CpuInfo {
  private CpuInfo() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
  }
  public interface cpuInfoOrBuilder
      extends com.google.protobuf.MessageOrBuilder {
    
    // required uint64 userTime = 1;
    boolean hasUserTime();
    long getUserTime();
    
    // required uint64 niceTime = 2;
    boolean hasNiceTime();
    long getNiceTime();
    
    // required uint64 systemTime = 3;
    boolean hasSystemTime();
    long getSystemTime();
    
    // required uint64 idleTime = 4;
    boolean hasIdleTime();
    long getIdleTime();
    
    // required uint64 ioWaitTime = 5;
    boolean hasIoWaitTime();
    long getIoWaitTime();
    
    // required uint64 irqTime = 6;
    boolean hasIrqTime();
    long getIrqTime();
    
    // required uint64 softIRQTime = 7;
    boolean hasSoftIRQTime();
    long getSoftIRQTime();
    
    // required float cpuUtilization = 8;
    boolean hasCpuUtilization();
    float getCpuUtilization();
    
    // required uint64 cpuTime = 9;
    boolean hasCpuTime();
    long getCpuTime();
    
    // optional uint32 cpuNumber = 10;
    boolean hasCpuNumber();
    int getCpuNumber();
    
    // optional bool offLine = 11;
    boolean hasOffLine();
    boolean getOffLine();
  }
  public static final class cpuInfo extends
      com.google.protobuf.GeneratedMessage
      implements cpuInfoOrBuilder {
    // Use cpuInfo.newBuilder() to construct.
    private cpuInfo(Builder builder) {
      super(builder);
    }
    private cpuInfo(boolean noInit) {}
    
    private static final cpuInfo defaultInstance;
    public static cpuInfo getDefaultInstance() {
      return defaultInstance;
    }
    
    public cpuInfo getDefaultInstanceForType() {
      return defaultInstance;
    }
    
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return com.eolwral.osmonitor.core.CpuInfo.internal_static_com_eolwral_osmonitor_core_cpuInfo_descriptor;
    }
    
    protected com.google.protobuf.GeneratedMessage.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return com.eolwral.osmonitor.core.CpuInfo.internal_static_com_eolwral_osmonitor_core_cpuInfo_fieldAccessorTable;
    }
    
    private int bitField0_;
    // required uint64 userTime = 1;
    public static final int USERTIME_FIELD_NUMBER = 1;
    private long userTime_;
    public boolean hasUserTime() {
      return ((bitField0_ & 0x00000001) == 0x00000001);
    }
    public long getUserTime() {
      return userTime_;
    }
    
    // required uint64 niceTime = 2;
    public static final int NICETIME_FIELD_NUMBER = 2;
    private long niceTime_;
    public boolean hasNiceTime() {
      return ((bitField0_ & 0x00000002) == 0x00000002);
    }
    public long getNiceTime() {
      return niceTime_;
    }
    
    // required uint64 systemTime = 3;
    public static final int SYSTEMTIME_FIELD_NUMBER = 3;
    private long systemTime_;
    public boolean hasSystemTime() {
      return ((bitField0_ & 0x00000004) == 0x00000004);
    }
    public long getSystemTime() {
      return systemTime_;
    }
    
    // required uint64 idleTime = 4;
    public static final int IDLETIME_FIELD_NUMBER = 4;
    private long idleTime_;
    public boolean hasIdleTime() {
      return ((bitField0_ & 0x00000008) == 0x00000008);
    }
    public long getIdleTime() {
      return idleTime_;
    }
    
    // required uint64 ioWaitTime = 5;
    public static final int IOWAITTIME_FIELD_NUMBER = 5;
    private long ioWaitTime_;
    public boolean hasIoWaitTime() {
      return ((bitField0_ & 0x00000010) == 0x00000010);
    }
    public long getIoWaitTime() {
      return ioWaitTime_;
    }
    
    // required uint64 irqTime = 6;
    public static final int IRQTIME_FIELD_NUMBER = 6;
    private long irqTime_;
    public boolean hasIrqTime() {
      return ((bitField0_ & 0x00000020) == 0x00000020);
    }
    public long getIrqTime() {
      return irqTime_;
    }
    
    // required uint64 softIRQTime = 7;
    public static final int SOFTIRQTIME_FIELD_NUMBER = 7;
    private long softIRQTime_;
    public boolean hasSoftIRQTime() {
      return ((bitField0_ & 0x00000040) == 0x00000040);
    }
    public long getSoftIRQTime() {
      return softIRQTime_;
    }
    
    // required float cpuUtilization = 8;
    public static final int CPUUTILIZATION_FIELD_NUMBER = 8;
    private float cpuUtilization_;
    public boolean hasCpuUtilization() {
      return ((bitField0_ & 0x00000080) == 0x00000080);
    }
    public float getCpuUtilization() {
      return cpuUtilization_;
    }
    
    // required uint64 cpuTime = 9;
    public static final int CPUTIME_FIELD_NUMBER = 9;
    private long cpuTime_;
    public boolean hasCpuTime() {
      return ((bitField0_ & 0x00000100) == 0x00000100);
    }
    public long getCpuTime() {
      return cpuTime_;
    }
    
    // optional uint32 cpuNumber = 10;
    public static final int CPUNUMBER_FIELD_NUMBER = 10;
    private int cpuNumber_;
    public boolean hasCpuNumber() {
      return ((bitField0_ & 0x00000200) == 0x00000200);
    }
    public int getCpuNumber() {
      return cpuNumber_;
    }
    
    // optional bool offLine = 11;
    public static final int OFFLINE_FIELD_NUMBER = 11;
    private boolean offLine_;
    public boolean hasOffLine() {
      return ((bitField0_ & 0x00000400) == 0x00000400);
    }
    public boolean getOffLine() {
      return offLine_;
    }
    
    private void initFields() {
      userTime_ = 0L;
      niceTime_ = 0L;
      systemTime_ = 0L;
      idleTime_ = 0L;
      ioWaitTime_ = 0L;
      irqTime_ = 0L;
      softIRQTime_ = 0L;
      cpuUtilization_ = 0F;
      cpuTime_ = 0L;
      cpuNumber_ = 0;
      offLine_ = false;
    }
    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized != -1) return isInitialized == 1;
      
      if (!hasUserTime()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasNiceTime()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasSystemTime()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasIdleTime()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasIoWaitTime()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasIrqTime()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasSoftIRQTime()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasCpuUtilization()) {
        memoizedIsInitialized = 0;
        return false;
      }
      if (!hasCpuTime()) {
        memoizedIsInitialized = 0;
        return false;
      }
      memoizedIsInitialized = 1;
      return true;
    }
    
    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      getSerializedSize();
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        output.writeUInt64(1, userTime_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        output.writeUInt64(2, niceTime_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        output.writeUInt64(3, systemTime_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        output.writeUInt64(4, idleTime_);
      }
      if (((bitField0_ & 0x00000010) == 0x00000010)) {
        output.writeUInt64(5, ioWaitTime_);
      }
      if (((bitField0_ & 0x00000020) == 0x00000020)) {
        output.writeUInt64(6, irqTime_);
      }
      if (((bitField0_ & 0x00000040) == 0x00000040)) {
        output.writeUInt64(7, softIRQTime_);
      }
      if (((bitField0_ & 0x00000080) == 0x00000080)) {
        output.writeFloat(8, cpuUtilization_);
      }
      if (((bitField0_ & 0x00000100) == 0x00000100)) {
        output.writeUInt64(9, cpuTime_);
      }
      if (((bitField0_ & 0x00000200) == 0x00000200)) {
        output.writeUInt32(10, cpuNumber_);
      }
      if (((bitField0_ & 0x00000400) == 0x00000400)) {
        output.writeBool(11, offLine_);
      }
      getUnknownFields().writeTo(output);
    }
    
    private int memoizedSerializedSize = -1;
    public int getSerializedSize() {
      int size = memoizedSerializedSize;
      if (size != -1) return size;
    
      size = 0;
      if (((bitField0_ & 0x00000001) == 0x00000001)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(1, userTime_);
      }
      if (((bitField0_ & 0x00000002) == 0x00000002)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(2, niceTime_);
      }
      if (((bitField0_ & 0x00000004) == 0x00000004)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(3, systemTime_);
      }
      if (((bitField0_ & 0x00000008) == 0x00000008)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(4, idleTime_);
      }
      if (((bitField0_ & 0x00000010) == 0x00000010)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(5, ioWaitTime_);
      }
      if (((bitField0_ & 0x00000020) == 0x00000020)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(6, irqTime_);
      }
      if (((bitField0_ & 0x00000040) == 0x00000040)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(7, softIRQTime_);
      }
      if (((bitField0_ & 0x00000080) == 0x00000080)) {
        size += com.google.protobuf.CodedOutputStream
          .computeFloatSize(8, cpuUtilization_);
      }
      if (((bitField0_ & 0x00000100) == 0x00000100)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt64Size(9, cpuTime_);
      }
      if (((bitField0_ & 0x00000200) == 0x00000200)) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(10, cpuNumber_);
      }
      if (((bitField0_ & 0x00000400) == 0x00000400)) {
        size += com.google.protobuf.CodedOutputStream
          .computeBoolSize(11, offLine_);
      }
      size += getUnknownFields().getSerializedSize();
      memoizedSerializedSize = size;
      return size;
    }
    
    private static final long serialVersionUID = 0L;
    @java.lang.Override
    protected java.lang.Object writeReplace()
        throws java.io.ObjectStreamException {
      return super.writeReplace();
    }
    
    public static com.eolwral.osmonitor.core.CpuInfo.cpuInfo parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static com.eolwral.osmonitor.core.CpuInfo.cpuInfo parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static com.eolwral.osmonitor.core.CpuInfo.cpuInfo parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data).buildParsed();
    }
    public static com.eolwral.osmonitor.core.CpuInfo.cpuInfo parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return newBuilder().mergeFrom(data, extensionRegistry)
               .buildParsed();
    }
    public static com.eolwral.osmonitor.core.CpuInfo.cpuInfo parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static com.eolwral.osmonitor.core.CpuInfo.cpuInfo parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    public static com.eolwral.osmonitor.core.CpuInfo.cpuInfo parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static com.eolwral.osmonitor.core.CpuInfo.cpuInfo parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      Builder builder = newBuilder();
      if (builder.mergeDelimitedFrom(input, extensionRegistry)) {
        return builder.buildParsed();
      } else {
        return null;
      }
    }
    public static com.eolwral.osmonitor.core.CpuInfo.cpuInfo parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input).buildParsed();
    }
    public static com.eolwral.osmonitor.core.CpuInfo.cpuInfo parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return newBuilder().mergeFrom(input, extensionRegistry)
               .buildParsed();
    }
    
    public static Builder newBuilder() { return Builder.create(); }
    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder(com.eolwral.osmonitor.core.CpuInfo.cpuInfo prototype) {
      return newBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() { return newBuilder(this); }
    
    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessage.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    public static final class Builder extends
        com.google.protobuf.GeneratedMessage.Builder<Builder>
       implements com.eolwral.osmonitor.core.CpuInfo.cpuInfoOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return com.eolwral.osmonitor.core.CpuInfo.internal_static_com_eolwral_osmonitor_core_cpuInfo_descriptor;
      }
      
      protected com.google.protobuf.GeneratedMessage.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return com.eolwral.osmonitor.core.CpuInfo.internal_static_com_eolwral_osmonitor_core_cpuInfo_fieldAccessorTable;
      }
      
      // Construct using com.eolwral.osmonitor.core.CpuInfo.cpuInfo.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }
      
      private Builder(BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessage.alwaysUseFieldBuilders) {
        }
      }
      private static Builder create() {
        return new Builder();
      }
      
      public Builder clear() {
        super.clear();
        userTime_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000001);
        niceTime_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000002);
        systemTime_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000004);
        idleTime_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000008);
        ioWaitTime_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000010);
        irqTime_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000020);
        softIRQTime_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000040);
        cpuUtilization_ = 0F;
        bitField0_ = (bitField0_ & ~0x00000080);
        cpuTime_ = 0L;
        bitField0_ = (bitField0_ & ~0x00000100);
        cpuNumber_ = 0;
        bitField0_ = (bitField0_ & ~0x00000200);
        offLine_ = false;
        bitField0_ = (bitField0_ & ~0x00000400);
        return this;
      }
      
      public Builder clone() {
        return create().mergeFrom(buildPartial());
      }
      
      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return com.eolwral.osmonitor.core.CpuInfo.cpuInfo.getDescriptor();
      }
      
      public com.eolwral.osmonitor.core.CpuInfo.cpuInfo getDefaultInstanceForType() {
        return com.eolwral.osmonitor.core.CpuInfo.cpuInfo.getDefaultInstance();
      }
      
      public com.eolwral.osmonitor.core.CpuInfo.cpuInfo build() {
        com.eolwral.osmonitor.core.CpuInfo.cpuInfo result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }
      
      private com.eolwral.osmonitor.core.CpuInfo.cpuInfo buildParsed()
          throws com.google.protobuf.InvalidProtocolBufferException {
        com.eolwral.osmonitor.core.CpuInfo.cpuInfo result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(
            result).asInvalidProtocolBufferException();
        }
        return result;
      }
      
      public com.eolwral.osmonitor.core.CpuInfo.cpuInfo buildPartial() {
        com.eolwral.osmonitor.core.CpuInfo.cpuInfo result = new com.eolwral.osmonitor.core.CpuInfo.cpuInfo(this);
        int from_bitField0_ = bitField0_;
        int to_bitField0_ = 0;
        if (((from_bitField0_ & 0x00000001) == 0x00000001)) {
          to_bitField0_ |= 0x00000001;
        }
        result.userTime_ = userTime_;
        if (((from_bitField0_ & 0x00000002) == 0x00000002)) {
          to_bitField0_ |= 0x00000002;
        }
        result.niceTime_ = niceTime_;
        if (((from_bitField0_ & 0x00000004) == 0x00000004)) {
          to_bitField0_ |= 0x00000004;
        }
        result.systemTime_ = systemTime_;
        if (((from_bitField0_ & 0x00000008) == 0x00000008)) {
          to_bitField0_ |= 0x00000008;
        }
        result.idleTime_ = idleTime_;
        if (((from_bitField0_ & 0x00000010) == 0x00000010)) {
          to_bitField0_ |= 0x00000010;
        }
        result.ioWaitTime_ = ioWaitTime_;
        if (((from_bitField0_ & 0x00000020) == 0x00000020)) {
          to_bitField0_ |= 0x00000020;
        }
        result.irqTime_ = irqTime_;
        if (((from_bitField0_ & 0x00000040) == 0x00000040)) {
          to_bitField0_ |= 0x00000040;
        }
        result.softIRQTime_ = softIRQTime_;
        if (((from_bitField0_ & 0x00000080) == 0x00000080)) {
          to_bitField0_ |= 0x00000080;
        }
        result.cpuUtilization_ = cpuUtilization_;
        if (((from_bitField0_ & 0x00000100) == 0x00000100)) {
          to_bitField0_ |= 0x00000100;
        }
        result.cpuTime_ = cpuTime_;
        if (((from_bitField0_ & 0x00000200) == 0x00000200)) {
          to_bitField0_ |= 0x00000200;
        }
        result.cpuNumber_ = cpuNumber_;
        if (((from_bitField0_ & 0x00000400) == 0x00000400)) {
          to_bitField0_ |= 0x00000400;
        }
        result.offLine_ = offLine_;
        result.bitField0_ = to_bitField0_;
        onBuilt();
        return result;
      }
      
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof com.eolwral.osmonitor.core.CpuInfo.cpuInfo) {
          return mergeFrom((com.eolwral.osmonitor.core.CpuInfo.cpuInfo)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }
      
      public Builder mergeFrom(com.eolwral.osmonitor.core.CpuInfo.cpuInfo other) {
        if (other == com.eolwral.osmonitor.core.CpuInfo.cpuInfo.getDefaultInstance()) return this;
        if (other.hasUserTime()) {
          setUserTime(other.getUserTime());
        }
        if (other.hasNiceTime()) {
          setNiceTime(other.getNiceTime());
        }
        if (other.hasSystemTime()) {
          setSystemTime(other.getSystemTime());
        }
        if (other.hasIdleTime()) {
          setIdleTime(other.getIdleTime());
        }
        if (other.hasIoWaitTime()) {
          setIoWaitTime(other.getIoWaitTime());
        }
        if (other.hasIrqTime()) {
          setIrqTime(other.getIrqTime());
        }
        if (other.hasSoftIRQTime()) {
          setSoftIRQTime(other.getSoftIRQTime());
        }
        if (other.hasCpuUtilization()) {
          setCpuUtilization(other.getCpuUtilization());
        }
        if (other.hasCpuTime()) {
          setCpuTime(other.getCpuTime());
        }
        if (other.hasCpuNumber()) {
          setCpuNumber(other.getCpuNumber());
        }
        if (other.hasOffLine()) {
          setOffLine(other.getOffLine());
        }
        this.mergeUnknownFields(other.getUnknownFields());
        return this;
      }
      
      public final boolean isInitialized() {
        if (!hasUserTime()) {
          
          return false;
        }
        if (!hasNiceTime()) {
          
          return false;
        }
        if (!hasSystemTime()) {
          
          return false;
        }
        if (!hasIdleTime()) {
          
          return false;
        }
        if (!hasIoWaitTime()) {
          
          return false;
        }
        if (!hasIrqTime()) {
          
          return false;
        }
        if (!hasSoftIRQTime()) {
          
          return false;
        }
        if (!hasCpuUtilization()) {
          
          return false;
        }
        if (!hasCpuTime()) {
          
          return false;
        }
        return true;
      }
      
      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        com.google.protobuf.UnknownFieldSet.Builder unknownFields =
          com.google.protobuf.UnknownFieldSet.newBuilder(
            this.getUnknownFields());
        while (true) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              this.setUnknownFields(unknownFields.build());
              onChanged();
              return this;
            default: {
              if (!parseUnknownField(input, unknownFields,
                                     extensionRegistry, tag)) {
                this.setUnknownFields(unknownFields.build());
                onChanged();
                return this;
              }
              break;
            }
            case 8: {
              bitField0_ |= 0x00000001;
              userTime_ = input.readUInt64();
              break;
            }
            case 16: {
              bitField0_ |= 0x00000002;
              niceTime_ = input.readUInt64();
              break;
            }
            case 24: {
              bitField0_ |= 0x00000004;
              systemTime_ = input.readUInt64();
              break;
            }
            case 32: {
              bitField0_ |= 0x00000008;
              idleTime_ = input.readUInt64();
              break;
            }
            case 40: {
              bitField0_ |= 0x00000010;
              ioWaitTime_ = input.readUInt64();
              break;
            }
            case 48: {
              bitField0_ |= 0x00000020;
              irqTime_ = input.readUInt64();
              break;
            }
            case 56: {
              bitField0_ |= 0x00000040;
              softIRQTime_ = input.readUInt64();
              break;
            }
            case 69: {
              bitField0_ |= 0x00000080;
              cpuUtilization_ = input.readFloat();
              break;
            }
            case 72: {
              bitField0_ |= 0x00000100;
              cpuTime_ = input.readUInt64();
              break;
            }
            case 80: {
              bitField0_ |= 0x00000200;
              cpuNumber_ = input.readUInt32();
              break;
            }
            case 88: {
              bitField0_ |= 0x00000400;
              offLine_ = input.readBool();
              break;
            }
          }
        }
      }
      
      private int bitField0_;
      
      // required uint64 userTime = 1;
      private long userTime_ ;
      public boolean hasUserTime() {
        return ((bitField0_ & 0x00000001) == 0x00000001);
      }
      public long getUserTime() {
        return userTime_;
      }
      public Builder setUserTime(long value) {
        bitField0_ |= 0x00000001;
        userTime_ = value;
        onChanged();
        return this;
      }
      public Builder clearUserTime() {
        bitField0_ = (bitField0_ & ~0x00000001);
        userTime_ = 0L;
        onChanged();
        return this;
      }
      
      // required uint64 niceTime = 2;
      private long niceTime_ ;
      public boolean hasNiceTime() {
        return ((bitField0_ & 0x00000002) == 0x00000002);
      }
      public long getNiceTime() {
        return niceTime_;
      }
      public Builder setNiceTime(long value) {
        bitField0_ |= 0x00000002;
        niceTime_ = value;
        onChanged();
        return this;
      }
      public Builder clearNiceTime() {
        bitField0_ = (bitField0_ & ~0x00000002);
        niceTime_ = 0L;
        onChanged();
        return this;
      }
      
      // required uint64 systemTime = 3;
      private long systemTime_ ;
      public boolean hasSystemTime() {
        return ((bitField0_ & 0x00000004) == 0x00000004);
      }
      public long getSystemTime() {
        return systemTime_;
      }
      public Builder setSystemTime(long value) {
        bitField0_ |= 0x00000004;
        systemTime_ = value;
        onChanged();
        return this;
      }
      public Builder clearSystemTime() {
        bitField0_ = (bitField0_ & ~0x00000004);
        systemTime_ = 0L;
        onChanged();
        return this;
      }
      
      // required uint64 idleTime = 4;
      private long idleTime_ ;
      public boolean hasIdleTime() {
        return ((bitField0_ & 0x00000008) == 0x00000008);
      }
      public long getIdleTime() {
        return idleTime_;
      }
      public Builder setIdleTime(long value) {
        bitField0_ |= 0x00000008;
        idleTime_ = value;
        onChanged();
        return this;
      }
      public Builder clearIdleTime() {
        bitField0_ = (bitField0_ & ~0x00000008);
        idleTime_ = 0L;
        onChanged();
        return this;
      }
      
      // required uint64 ioWaitTime = 5;
      private long ioWaitTime_ ;
      public boolean hasIoWaitTime() {
        return ((bitField0_ & 0x00000010) == 0x00000010);
      }
      public long getIoWaitTime() {
        return ioWaitTime_;
      }
      public Builder setIoWaitTime(long value) {
        bitField0_ |= 0x00000010;
        ioWaitTime_ = value;
        onChanged();
        return this;
      }
      public Builder clearIoWaitTime() {
        bitField0_ = (bitField0_ & ~0x00000010);
        ioWaitTime_ = 0L;
        onChanged();
        return this;
      }
      
      // required uint64 irqTime = 6;
      private long irqTime_ ;
      public boolean hasIrqTime() {
        return ((bitField0_ & 0x00000020) == 0x00000020);
      }
      public long getIrqTime() {
        return irqTime_;
      }
      public Builder setIrqTime(long value) {
        bitField0_ |= 0x00000020;
        irqTime_ = value;
        onChanged();
        return this;
      }
      public Builder clearIrqTime() {
        bitField0_ = (bitField0_ & ~0x00000020);
        irqTime_ = 0L;
        onChanged();
        return this;
      }
      
      // required uint64 softIRQTime = 7;
      private long softIRQTime_ ;
      public boolean hasSoftIRQTime() {
        return ((bitField0_ & 0x00000040) == 0x00000040);
      }
      public long getSoftIRQTime() {
        return softIRQTime_;
      }
      public Builder setSoftIRQTime(long value) {
        bitField0_ |= 0x00000040;
        softIRQTime_ = value;
        onChanged();
        return this;
      }
      public Builder clearSoftIRQTime() {
        bitField0_ = (bitField0_ & ~0x00000040);
        softIRQTime_ = 0L;
        onChanged();
        return this;
      }
      
      // required float cpuUtilization = 8;
      private float cpuUtilization_ ;
      public boolean hasCpuUtilization() {
        return ((bitField0_ & 0x00000080) == 0x00000080);
      }
      public float getCpuUtilization() {
        return cpuUtilization_;
      }
      public Builder setCpuUtilization(float value) {
        bitField0_ |= 0x00000080;
        cpuUtilization_ = value;
        onChanged();
        return this;
      }
      public Builder clearCpuUtilization() {
        bitField0_ = (bitField0_ & ~0x00000080);
        cpuUtilization_ = 0F;
        onChanged();
        return this;
      }
      
      // required uint64 cpuTime = 9;
      private long cpuTime_ ;
      public boolean hasCpuTime() {
        return ((bitField0_ & 0x00000100) == 0x00000100);
      }
      public long getCpuTime() {
        return cpuTime_;
      }
      public Builder setCpuTime(long value) {
        bitField0_ |= 0x00000100;
        cpuTime_ = value;
        onChanged();
        return this;
      }
      public Builder clearCpuTime() {
        bitField0_ = (bitField0_ & ~0x00000100);
        cpuTime_ = 0L;
        onChanged();
        return this;
      }
      
      // optional uint32 cpuNumber = 10;
      private int cpuNumber_ ;
      public boolean hasCpuNumber() {
        return ((bitField0_ & 0x00000200) == 0x00000200);
      }
      public int getCpuNumber() {
        return cpuNumber_;
      }
      public Builder setCpuNumber(int value) {
        bitField0_ |= 0x00000200;
        cpuNumber_ = value;
        onChanged();
        return this;
      }
      public Builder clearCpuNumber() {
        bitField0_ = (bitField0_ & ~0x00000200);
        cpuNumber_ = 0;
        onChanged();
        return this;
      }
      
      // optional bool offLine = 11;
      private boolean offLine_ ;
      public boolean hasOffLine() {
        return ((bitField0_ & 0x00000400) == 0x00000400);
      }
      public boolean getOffLine() {
        return offLine_;
      }
      public Builder setOffLine(boolean value) {
        bitField0_ |= 0x00000400;
        offLine_ = value;
        onChanged();
        return this;
      }
      public Builder clearOffLine() {
        bitField0_ = (bitField0_ & ~0x00000400);
        offLine_ = false;
        onChanged();
        return this;
      }
      
      // @@protoc_insertion_point(builder_scope:com.eolwral.osmonitor.core.cpuInfo)
    }
    
    static {
      defaultInstance = new cpuInfo(true);
      defaultInstance.initFields();
    }
    
    // @@protoc_insertion_point(class_scope:com.eolwral.osmonitor.core.cpuInfo)
  }
  
  private static com.google.protobuf.Descriptors.Descriptor
    internal_static_com_eolwral_osmonitor_core_cpuInfo_descriptor;
  private static
    com.google.protobuf.GeneratedMessage.FieldAccessorTable
      internal_static_com_eolwral_osmonitor_core_cpuInfo_fieldAccessorTable;
  
  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\rcpuInfo.proto\022\032com.eolwral.osmonitor.c" +
      "ore\"\332\001\n\007cpuInfo\022\020\n\010userTime\030\001 \002(\004\022\020\n\010nic" +
      "eTime\030\002 \002(\004\022\022\n\nsystemTime\030\003 \002(\004\022\020\n\010idleT" +
      "ime\030\004 \002(\004\022\022\n\nioWaitTime\030\005 \002(\004\022\017\n\007irqTime" +
      "\030\006 \002(\004\022\023\n\013softIRQTime\030\007 \002(\004\022\026\n\016cpuUtiliz" +
      "ation\030\010 \002(\002\022\017\n\007cpuTime\030\t \002(\004\022\021\n\tcpuNumbe" +
      "r\030\n \001(\r\022\017\n\007offLine\030\013 \001(\010"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
      new com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner() {
        public com.google.protobuf.ExtensionRegistry assignDescriptors(
            com.google.protobuf.Descriptors.FileDescriptor root) {
          descriptor = root;
          internal_static_com_eolwral_osmonitor_core_cpuInfo_descriptor =
            getDescriptor().getMessageTypes().get(0);
          internal_static_com_eolwral_osmonitor_core_cpuInfo_fieldAccessorTable = new
            com.google.protobuf.GeneratedMessage.FieldAccessorTable(
              internal_static_com_eolwral_osmonitor_core_cpuInfo_descriptor,
              new java.lang.String[] { "UserTime", "NiceTime", "SystemTime", "IdleTime", "IoWaitTime", "IrqTime", "SoftIRQTime", "CpuUtilization", "CpuTime", "CpuNumber", "OffLine", },
              com.eolwral.osmonitor.core.CpuInfo.cpuInfo.class,
              com.eolwral.osmonitor.core.CpuInfo.cpuInfo.Builder.class);
          return null;
        }
      };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        }, assigner);
  }
  
  // @@protoc_insertion_point(outer_class_scope)
}
