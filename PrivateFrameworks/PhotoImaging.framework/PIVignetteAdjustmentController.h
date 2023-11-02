
@interface PIVignetteAdjustmentController : PIAdjustmentController

@property (nonatomic) double falloff;
@property (nonatomic) double intensity;
@property (nonatomic) double radius;

+ (id)falloffKey;
+ (id)intensityKey;
+ (id)radiusKey;

- (double)falloff;
- (double)intensity;
- (double)radius;
- (void)setFalloff:(double)arg1;
- (void)setIntensity:(double)arg1;
- (void)setRadius:(double)arg1;

@end
