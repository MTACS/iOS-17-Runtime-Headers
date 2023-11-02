
@interface BLSHLocalOnlyServiceConfiguration : NSObject {
    float  _dimmedFactor;
    double  _dimmingDuration;
    double  _fadeInDuration;
    double  _fadeOutDuration;
}

@property (nonatomic, readonly) float dimmedFactor;
@property (nonatomic, readonly) double dimmingDuration;
@property (nonatomic, readonly) double fadeInDuration;
@property (nonatomic, readonly) double fadeOutDuration;

+ (id)configurationWithFadeInDuration:(double)arg1 fadeOutDuration:(double)arg2;
+ (id)configurationWithFadeInDuration:(double)arg1 fadeOutDuration:(double)arg2 dimmingDuration:(double)arg3 dimmedFactor:(float)arg4;

- (float)dimmedFactor;
- (double)dimmingDuration;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (id)init;
- (id)initWithFadeInDuration:(double)arg1 fadeOutDuration:(double)arg2 dimmingDuration:(double)arg3 dimmedFactor:(float)arg4;

@end
