
@interface PUWallpaperPlaygroundSettings : PXSettings {
    bool  _applyLowAPLFilter;
    double  _lowAPLFilterAmount;
    double  _lowLuminanceAlphaAnimationDuration;
    double  _lowLuminanceTransformAnimationDuration;
    double  _shuffleSleepFadeInAnimationDuration;
    double  _shuffleSleepFadeOutAnimationDuration;
    double  _shuffleSleepTransformOutAnimationDuration;
}

@property (nonatomic) bool applyLowAPLFilter;
@property (nonatomic) double lowAPLFilterAmount;
@property (nonatomic) double lowLuminanceAlphaAnimationDuration;
@property (nonatomic) double lowLuminanceTransformAnimationDuration;
@property (nonatomic) double shuffleSleepFadeInAnimationDuration;
@property (nonatomic) double shuffleSleepFadeOutAnimationDuration;
@property (nonatomic) double shuffleSleepTransformOutAnimationDuration;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)applyLowAPLFilter;
- (double)lowAPLFilterAmount;
- (double)lowLuminanceAlphaAnimationDuration;
- (double)lowLuminanceTransformAnimationDuration;
- (id)parentSettings;
- (void)setApplyLowAPLFilter:(bool)arg1;
- (void)setDefaultValues;
- (void)setLowAPLFilterAmount:(double)arg1;
- (void)setLowLuminanceAlphaAnimationDuration:(double)arg1;
- (void)setLowLuminanceTransformAnimationDuration:(double)arg1;
- (void)setShuffleSleepFadeInAnimationDuration:(double)arg1;
- (void)setShuffleSleepFadeOutAnimationDuration:(double)arg1;
- (void)setShuffleSleepTransformOutAnimationDuration:(double)arg1;
- (double)shuffleSleepFadeInAnimationDuration;
- (double)shuffleSleepFadeOutAnimationDuration;
- (double)shuffleSleepTransformOutAnimationDuration;

@end
