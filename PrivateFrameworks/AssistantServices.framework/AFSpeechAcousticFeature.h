
@interface AFSpeechAcousticFeature : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _acousticFeatureValuePerFrame;
    double  _frameDuration;
}

@property (nonatomic, readonly) NSArray *acousticFeatureValuePerFrame;
@property (nonatomic, readonly) double frameDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acousticFeatureValuePerFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)frameDuration;
- (id)initWithAcousticFeatureValue:(id)arg1 frameDuration:(double)arg2;
- (id)initWithCoder:(id)arg1;

@end
