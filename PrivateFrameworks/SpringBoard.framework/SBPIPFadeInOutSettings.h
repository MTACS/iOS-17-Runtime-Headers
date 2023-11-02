
@interface SBPIPFadeInOutSettings : PTSettings {
    double  _fadeInInitialBlurRadius;
    double  _fadeInInitialOpacity;
    double  _fadeInInitialScale;
    SBFAnimationSettings * _fadeInOutAnimationSettings;
    double  _fadeOutFinalBlurRadius;
    double  _fadeOutFinalOpacity;
    double  _fadeOutFinalScale;
}

@property (nonatomic) double fadeInInitialBlurRadius;
@property (nonatomic) double fadeInInitialOpacity;
@property (nonatomic) double fadeInInitialScale;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } fadeInInitialValues;
@property (nonatomic, retain) SBFAnimationSettings *fadeInOutAnimationSettings;
@property (nonatomic) double fadeOutFinalBlurRadius;
@property (nonatomic) double fadeOutFinalOpacity;
@property (nonatomic) double fadeOutFinalScale;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; } fadeOutFinalValues;

+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)fadeInInitialBlurRadius;
- (double)fadeInInitialOpacity;
- (double)fadeInInitialScale;
- (struct { double x1; double x2; double x3; })fadeInInitialValues;
- (id)fadeInOutAnimationSettings;
- (double)fadeOutFinalBlurRadius;
- (double)fadeOutFinalOpacity;
- (double)fadeOutFinalScale;
- (struct { double x1; double x2; double x3; })fadeOutFinalValues;
- (void)setDefaultValues;
- (void)setFadeInInitialBlurRadius:(double)arg1;
- (void)setFadeInInitialOpacity:(double)arg1;
- (void)setFadeInInitialScale:(double)arg1;
- (void)setFadeInOutAnimationSettings:(id)arg1;
- (void)setFadeOutFinalBlurRadius:(double)arg1;
- (void)setFadeOutFinalOpacity:(double)arg1;
- (void)setFadeOutFinalScale:(double)arg1;

@end
