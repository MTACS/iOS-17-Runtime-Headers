
@interface SBAppSwitcherOrbGestureAnimationSettings : PTSettings {
    SBFFluidBehaviorSettings * _breathingSettings;
    SBFFluidBehaviorSettings * _peekingAndPanningSettings;
    SBFFluidBehaviorSettings * _popToSwitcherSettings;
    double  _response;
}

@property (nonatomic, retain) SBFFluidBehaviorSettings *breathingSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *peekingAndPanningSettings;
@property (nonatomic, retain) SBFFluidBehaviorSettings *popToSwitcherSettings;
@property (nonatomic) double response;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)breathingSettings;
- (id)peekingAndPanningSettings;
- (id)popToSwitcherSettings;
- (double)response;
- (void)setBreathingSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setPeekingAndPanningSettings:(id)arg1;
- (void)setPopToSwitcherSettings:(id)arg1;
- (void)setResponse:(double)arg1;

@end
