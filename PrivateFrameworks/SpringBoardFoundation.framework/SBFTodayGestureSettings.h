
@interface SBFTodayGestureSettings : PTSettings {
    double  _dampingRatioAtMaximumVelocity;
    double  _dampingRatioAtMinimumVelocity;
    double  _interactiveSideSpringFriction;
    double  _interactiveSideSpringTension;
    double  _maximumVelocity;
    double  _minimumVelocity;
    SBFFluidBehaviorSettings * _overlayBackdropSettings;
    SBFFluidBehaviorSettings * _overlayPositionSettings;
    double  _responseAtMaximumVelocity;
    double  _responseAtMinimumVelocity;
    bool  _scaleAnimationSettingsWithGestureVelocity;
    double  _sideSpringFriction;
    double  _sideSpringTension;
}

@property (nonatomic) double dampingRatioAtMaximumVelocity;
@property (nonatomic) double dampingRatioAtMinimumVelocity;
@property (nonatomic) double interactiveSideSpringFriction;
@property (nonatomic) double interactiveSideSpringTension;
@property (nonatomic) double maximumVelocity;
@property (nonatomic) double minimumVelocity;
@property (nonatomic, retain) SBFFluidBehaviorSettings *overlayBackdropSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *overlayPositionSettings;
@property (nonatomic) double responseAtMaximumVelocity;
@property (nonatomic) double responseAtMinimumVelocity;
@property (nonatomic) bool scaleAnimationSettingsWithGestureVelocity;
@property (nonatomic) double sideSpringFriction;
@property (nonatomic) double sideSpringTension;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)dampingRatioAtMaximumVelocity;
- (double)dampingRatioAtMinimumVelocity;
- (double)interactiveSideSpringFriction;
- (double)interactiveSideSpringTension;
- (double)maximumVelocity;
- (double)minimumVelocity;
- (id)overlayBackdropSettings;
- (id)overlayPositionSettings;
- (double)responseAtMaximumVelocity;
- (double)responseAtMinimumVelocity;
- (bool)scaleAnimationSettingsWithGestureVelocity;
- (void)setDampingRatioAtMaximumVelocity:(double)arg1;
- (void)setDampingRatioAtMinimumVelocity:(double)arg1;
- (void)setDefaultValues;
- (void)setInteractiveSideSpringFriction:(double)arg1;
- (void)setInteractiveSideSpringTension:(double)arg1;
- (void)setMaximumVelocity:(double)arg1;
- (void)setMinimumVelocity:(double)arg1;
- (void)setOverlayBackdropSettings:(id)arg1;
- (void)setOverlayPositionSettings:(id)arg1;
- (void)setResponseAtMaximumVelocity:(double)arg1;
- (void)setResponseAtMinimumVelocity:(double)arg1;
- (void)setScaleAnimationSettingsWithGestureVelocity:(bool)arg1;
- (void)setSideSpringFriction:(double)arg1;
- (void)setSideSpringTension:(double)arg1;
- (double)sideSpringFriction;
- (double)sideSpringTension;

@end
