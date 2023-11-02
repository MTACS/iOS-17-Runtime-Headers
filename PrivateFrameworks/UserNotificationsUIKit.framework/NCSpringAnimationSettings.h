
@interface NCSpringAnimationSettings : PTSettings <UIViewSpringAnimationBehaviorDescribing> {
    double  _dampingRatio;
    PTFrameRateRangeSettings * _preferredFrameRateRange;
    double  _response;
    double  _retargetImpulse;
}

@property (nonatomic) double dampingRatio;
@property (nonatomic, retain) PTFrameRateRangeSettings *preferredFrameRateRange;
@property (nonatomic) double response;
@property (nonatomic) double retargetImpulse;

+ (id)moduleWithSectionTitle:(id)arg1;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)animateTracking:(bool)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (double)dampingRatio;
- (struct CAFrameRateRange { float x1; float x2; float x3; })frameRateRange;
- (struct { double x1; double x2; bool x3; bool x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })parametersForTransitionFromState:(int)arg1 toState:(int)arg2;
- (id)preferredFrameRateRange;
- (double)response;
- (double)retargetImpulse;
- (void)setDampingRatio:(double)arg1;
- (void)setDefaultCriticallyDampedValues;
- (void)setDefaultValues;
- (void)setFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 highFrameRateReason:(unsigned int)arg2;
- (void)setPreferredFrameRateRange:(id)arg1;
- (void)setResponse:(double)arg1;
- (void)setRetargetImpulse:(double)arg1;

@end
