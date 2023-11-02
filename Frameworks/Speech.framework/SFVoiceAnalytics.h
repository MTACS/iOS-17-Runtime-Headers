
@interface SFVoiceAnalytics : NSObject <NSCopying, NSSecureCoding> {
    SFAcousticFeature * _jitter;
    SFAcousticFeature * _pitch;
    SFAcousticFeature * _shimmer;
    SFAcousticFeature * _voicing;
}

@property (nonatomic, readonly, copy) SFAcousticFeature *jitter;
@property (nonatomic, readonly, copy) SFAcousticFeature *pitch;
@property (nonatomic, readonly, copy) SFAcousticFeature *shimmer;
@property (nonatomic, readonly, copy) SFAcousticFeature *voicing;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithJitter:(id)arg1 shimmer:(id)arg2 pitch:(id)arg3 voicing:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jitter;
- (id)pitch;
- (id)shimmer;
- (id)voicing;

@end
