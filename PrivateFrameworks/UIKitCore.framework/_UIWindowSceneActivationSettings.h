
@interface _UIWindowSceneActivationSettings : PTSettings {
    _UISpringAnimationPrototypeSettings * _morph;
    _UISpringAnimationPrototypeSettings * _morphMenuDismissal;
    double  _pinchActivationScaleThreshold;
    double  _pinchEndPlatterVelocityMultiplier;
    double  _pinchEndingProjectionDuration;
    _UISpringAnimationPrototypeSettings * _pinchInteractiveScale;
    double  _pinchPlatterMaxShadowIntensity;
    _UISpringAnimationPrototypeSettings * _pinchSettle;
    _UISpringAnimationPrototypeSettings * _pinchShadow;
}

@property (nonatomic, retain) _UISpringAnimationPrototypeSettings *morph;
@property (nonatomic, retain) _UISpringAnimationPrototypeSettings *morphMenuDismissal;
@property (nonatomic) double pinchActivationScaleThreshold;
@property (nonatomic) double pinchEndPlatterVelocityMultiplier;
@property (nonatomic) double pinchEndingProjectionDuration;
@property (nonatomic, retain) _UISpringAnimationPrototypeSettings *pinchInteractiveScale;
@property (nonatomic) double pinchPlatterMaxShadowIntensity;
@property (nonatomic, retain) _UISpringAnimationPrototypeSettings *pinchSettle;
@property (nonatomic, retain) _UISpringAnimationPrototypeSettings *pinchShadow;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)morph;
- (id)morphMenuDismissal;
- (double)pinchActivationScaleThreshold;
- (double)pinchEndPlatterVelocityMultiplier;
- (double)pinchEndingProjectionDuration;
- (id)pinchInteractiveScale;
- (double)pinchPlatterMaxShadowIntensity;
- (id)pinchSettle;
- (id)pinchShadow;
- (void)setDefaultValues;
- (void)setMorph:(id)arg1;
- (void)setMorphMenuDismissal:(id)arg1;
- (void)setPinchActivationScaleThreshold:(double)arg1;
- (void)setPinchEndPlatterVelocityMultiplier:(double)arg1;
- (void)setPinchEndingProjectionDuration:(double)arg1;
- (void)setPinchInteractiveScale:(id)arg1;
- (void)setPinchPlatterMaxShadowIntensity:(double)arg1;
- (void)setPinchSettle:(id)arg1;
- (void)setPinchShadow:(id)arg1;

@end
