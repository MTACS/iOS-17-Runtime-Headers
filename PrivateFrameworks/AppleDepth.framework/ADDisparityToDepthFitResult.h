
@interface ADDisparityToDepthFitResult : NSObject {
    float  _disparityToDepthMultiplier;
    float  _disparityToDepthOffset;
}

@property (nonatomic, readonly) float disparityToDepthMultiplier;
@property (nonatomic, readonly) float disparityToDepthOffset;

- (float)disparityToDepthMultiplier;
- (float)disparityToDepthOffset;
- (id)initWithDisparityToDepthMultiplier:(float)arg1 disparityToDepthOffset:(float)arg2;

@end
