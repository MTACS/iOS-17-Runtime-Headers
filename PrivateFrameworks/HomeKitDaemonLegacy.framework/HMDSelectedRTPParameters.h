
@interface HMDSelectedRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {
    NSNumber * _comfortNoisePayloadType;
    NSNumber * _maxMTU;
    NSNumber * _maximumBitrate;
    NSNumber * _minimumBitrate;
    NSNumber * _payloadType;
    NSNumber * _rtcpInterval;
    NSNumber * _synchronizationSource;
}

@property (nonatomic, readonly, copy) NSNumber *comfortNoisePayloadType;
@property (nonatomic, copy) NSNumber *maxMTU;
@property (nonatomic, readonly, copy) NSNumber *maximumBitrate;
@property (nonatomic, readonly, copy) NSNumber *minimumBitrate;
@property (nonatomic, readonly, copy) NSNumber *payloadType;
@property (nonatomic, readonly, copy) NSNumber *rtcpInterval;
@property (nonatomic, retain) NSNumber *synchronizationSource;
@property (readonly, copy) NSData *tlvData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)comfortNoisePayloadType;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayloadType:(id)arg1 maximumBitrate:(id)arg2 minimumBitrate:(id)arg3 rtcpInterval:(id)arg4 comfortNoisePayloadType:(id)arg5;
- (id)maxMTU;
- (id)maximumBitrate;
- (id)minimumBitrate;
- (id)payloadType;
- (id)rtcpInterval;
- (void)setMaxMTU:(id)arg1;
- (void)setSynchronizationSource:(id)arg1;
- (id)synchronizationSource;
- (id)tlvData;

@end
