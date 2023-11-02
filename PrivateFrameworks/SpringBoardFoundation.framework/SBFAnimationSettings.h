
@interface SBFAnimationSettings : PTSettings <PTSettingsKeyPathObserver> {
    long long  _animationType;
    PTPointSettings * _controlPoint1Settings;
    PTPointSettings * _controlPoint2Settings;
    unsigned long long  _curve;
    double  _damping;
    double  _delay;
    double  _duration;
    double  _epsilon;
    BSAnimationSettings * _exportedSettings;
    unsigned long long  _frameRate;
    double  _initialVelocity;
    double  _mass;
    PTFrameRateRangeSettings * _preferredFrameRateRange;
    double  _speed;
    double  _stiffness;
}

@property (nonatomic) long long animationType;
@property (nonatomic, readonly) double calculatedDuration;
@property (nonatomic, retain) PTPointSettings *controlPoint1Settings;
@property (nonatomic, retain) PTPointSettings *controlPoint2Settings;
@property (nonatomic) unsigned long long curve;
@property (nonatomic) double damping;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic) double epsilon;
@property (nonatomic) unsigned long long frameRate;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double mass;
@property (nonatomic, retain) PTFrameRateRangeSettings *preferredFrameRateRange;
@property (nonatomic) double speed;
@property (nonatomic) double stiffness;
@property (readonly) Class superclass;

+ (id)_moduleWithSectionTitle:(id)arg1;
+ (id)_moduleWithSectionTitle:(id)arg1 delay:(bool)arg2 frameRate:(bool)arg3;
+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)BSAnimationSettings;
- (long long)animationType;
- (double)calculatedDuration;
- (id)controlPoint1Settings;
- (id)controlPoint2Settings;
- (unsigned long long)curve;
- (double)damping;
- (void)dealloc;
- (double)delay;
- (double)duration;
- (double)epsilon;
- (unsigned long long)frameRate;
- (id)initWithDefaultValues;
- (double)initialVelocity;
- (double)mass;
- (id)preferredFrameRateRange;
- (void)setAnimationType:(long long)arg1;
- (void)setControlPoint1Settings:(id)arg1;
- (void)setControlPoint2Settings:(id)arg1;
- (void)setCurve:(unsigned long long)arg1;
- (void)setDamping:(double)arg1;
- (void)setDefaultValues;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setEpsilon:(double)arg1;
- (void)setFrameRate:(unsigned long long)arg1;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 highFrameRateReason:(unsigned int)arg2;
- (void)setInitialVelocity:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setPreferredFrameRateRange:(id)arg1;
- (void)setSpeed:(double)arg1;
- (void)setStiffness:(double)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (double)speed;
- (double)stiffness;

@end
