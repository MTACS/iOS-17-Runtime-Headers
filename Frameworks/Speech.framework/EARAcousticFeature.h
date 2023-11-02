
@interface EARAcousticFeature : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _acousticFeatureValuePerFrame;
    double  _frameDuration;
}

@property (nonatomic, readonly, copy) NSArray *acousticFeatureValuePerFrame;
@property (nonatomic, readonly) double frameDuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acousticFeatureValuePerFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)frameDuration;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeature:(id)arg1;

@end
