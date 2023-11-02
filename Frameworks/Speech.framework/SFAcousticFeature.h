
@interface SFAcousticFeature : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _acousticFeatureValuePerFrame;
    double  _frameDuration;
}

@property (nonatomic, readonly, copy) NSArray *acousticFeatureValuePerFrame;
@property (nonatomic, readonly) double frameDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAcousticFeatureValue:(id)arg1 frameDuration:(double)arg2;
- (id)acousticFeatureValuePerFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)frameDuration;
- (id)initWithCoder:(id)arg1;

@end
