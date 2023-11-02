
@interface HMCameraStreamAudioPreferences : NSObject <NSSecureCoding> {
    NSSet * _codecs;
}

@property (copy) NSSet *codecs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)codecs;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCodecs:(id)arg1;

@end
