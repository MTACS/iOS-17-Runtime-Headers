
@interface HMDCameraRecordingAudioSampleRate : HAPNumberParser <NSCopying, NSSecureCoding> {
    long long  _type;
}

@property (nonatomic, readonly) long long type;

+ (id)arrayWithAudioSampleRates:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleRate:(long long)arg1;
- (id)initWithTLVData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)type;

@end
