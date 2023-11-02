
@interface _UIFocusAnimationConfiguration : NSObject <NSCopying> {
    unsigned long long  _animationOptions;
    double  _focusingBaseDuration;
    double  _focusingDelay;
    double  _focusingDurationScaleFactorLowerBound;
    double  _focusingDurationScaleFactorUpperBound;
    double  _minimumFocusDuration;
    double  _unfocusingBackgroundFadeDurationPercentage;
    double  _unfocusingBaseDuration;
    double  _unfocusingDurationScaleFactorLowerBound;
    double  _unfocusingDurationScaleFactorUpperBound;
    double  _unfocusingRepositionBaseDuration;
}

@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic) double focusingBaseDuration;
@property (nonatomic) double focusingDelay;
@property (nonatomic) double focusingDurationScaleFactorLowerBound;
@property (nonatomic) double focusingDurationScaleFactorUpperBound;
@property (nonatomic) double minimumFocusDuration;
@property (nonatomic) double unfocusingBackgroundFadeDurationPercentage;
@property (nonatomic) double unfocusingBaseDuration;
@property (nonatomic) double unfocusingDurationScaleFactorLowerBound;
@property (nonatomic) double unfocusingDurationScaleFactorUpperBound;
@property (nonatomic) double unfocusingRepositionBaseDuration;

+ (id)configurationWithStyle:(long long)arg1;

- (double)_defaultVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;
- (double)_focusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;
- (double)_unfocusingRepositionVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;
- (double)_unfocusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)arg1;
- (unsigned long long)animationOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)focusingBaseDuration;
- (double)focusingDelay;
- (double)focusingDurationScaleFactorLowerBound;
- (double)focusingDurationScaleFactorUpperBound;
- (id)init;
- (double)minimumFocusDuration;
- (void)setAnimationOptions:(unsigned long long)arg1;
- (void)setFocusingBaseDuration:(double)arg1;
- (void)setFocusingDelay:(double)arg1;
- (void)setFocusingDurationScaleFactorLowerBound:(double)arg1;
- (void)setFocusingDurationScaleFactorUpperBound:(double)arg1;
- (void)setMinimumFocusDuration:(double)arg1;
- (void)setUnfocusingBackgroundFadeDurationPercentage:(double)arg1;
- (void)setUnfocusingBaseDuration:(double)arg1;
- (void)setUnfocusingDurationScaleFactorLowerBound:(double)arg1;
- (void)setUnfocusingDurationScaleFactorUpperBound:(double)arg1;
- (void)setUnfocusingRepositionBaseDuration:(double)arg1;
- (double)unfocusingBackgroundFadeDurationPercentage;
- (double)unfocusingBaseDuration;
- (double)unfocusingDurationScaleFactorLowerBound;
- (double)unfocusingDurationScaleFactorUpperBound;
- (double)unfocusingRepositionBaseDuration;

@end