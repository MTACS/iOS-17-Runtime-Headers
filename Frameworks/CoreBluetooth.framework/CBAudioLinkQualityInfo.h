
@interface CBAudioLinkQualityInfo : NSObject <CUXPCCodable, NSSecureCoding> {
    unsigned int  _bitRate;
    BOOL  _codecType;
    NSString * _deviceName;
    double  _jitterBufferSeconds;
    BOOL  _noiseFloor90;
    double  _retransmitRate;
    BOOL  _rssiAverage;
    BOOL  _signalToNoiseRatio;
}

@property (nonatomic) unsigned int bitRate;
@property (nonatomic) BOOL codecType;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic) double jitterBufferSeconds;
@property (nonatomic) BOOL noiseFloor90;
@property (nonatomic) double retransmitRate;
@property (nonatomic) BOOL rssiAverage;
@property (nonatomic) BOOL signalToNoiseRatio;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)bitRate;
- (BOOL)codecType;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (double)jitterBufferSeconds;
- (BOOL)noiseFloor90;
- (double)retransmitRate;
- (BOOL)rssiAverage;
- (void)setBitRate:(unsigned int)arg1;
- (void)setCodecType:(BOOL)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setJitterBufferSeconds:(double)arg1;
- (void)setNoiseFloor90:(BOOL)arg1;
- (void)setRetransmitRate:(double)arg1;
- (void)setRssiAverage:(BOOL)arg1;
- (void)setSignalToNoiseRatio:(BOOL)arg1;
- (BOOL)signalToNoiseRatio;

@end
