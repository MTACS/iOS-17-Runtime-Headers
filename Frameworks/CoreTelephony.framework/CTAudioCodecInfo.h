
@interface CTAudioCodecInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _amrMode;
    unsigned long long  _callId;
    long long  _codec;
    long long  _evsBandwidth;
    long long  _evsBitrate;
    unsigned long long  _i2SClockRate;
    unsigned long long  _sampleRate;
}

@property (nonatomic) unsigned long long amrMode;
@property (nonatomic) unsigned long long callId;
@property (nonatomic) long long codec;
@property (nonatomic) long long evsBandwidth;
@property (nonatomic) long long evsBitrate;
@property (nonatomic) unsigned long long i2SClockRate;
@property (nonatomic) unsigned long long sampleRate;

+ (bool)supportsSecureCoding;

- (unsigned long long)amrMode;
- (unsigned long long)callId;
- (long long)codec;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)evsBandwidth;
- (long long)evsBitrate;
- (unsigned long long)i2SClockRate;
- (id)init;
- (id)initWithCallId:(unsigned long long)arg1 codec:(long long)arg2 amrMode:(unsigned long long)arg3 evsBandwidth:(long long)arg4 evsBitrate:(long long)arg5;
- (id)initWithCallId:(unsigned long long)arg1 codec:(long long)arg2 amrMode:(unsigned long long)arg3 evsBandwidth:(long long)arg4 evsBitrate:(long long)arg5 sampleRate:(unsigned long long)arg6 i2SClockRate:(unsigned long long)arg7;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)sampleRate;
- (void)setAmrMode:(unsigned long long)arg1;
- (void)setCallId:(unsigned long long)arg1;
- (void)setCodec:(long long)arg1;
- (void)setEvsBandwidth:(long long)arg1;
- (void)setEvsBitrate:(long long)arg1;
- (void)setI2SClockRate:(unsigned long long)arg1;
- (void)setSampleRate:(unsigned long long)arg1;

@end
