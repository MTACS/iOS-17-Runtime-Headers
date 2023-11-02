
@interface HMCameraAudioCodec : NSObject <NSSecureCoding> {
    unsigned long long  _audioCodec;
}

@property (nonatomic, readonly) unsigned long long audioCodec;

+ (bool)isValid:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)audioCodec;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAudioCodecType:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
