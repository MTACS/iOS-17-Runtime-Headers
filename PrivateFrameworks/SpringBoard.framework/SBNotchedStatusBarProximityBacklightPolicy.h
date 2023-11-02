
@interface SBNotchedStatusBarProximityBacklightPolicy : SBDefaultProximityBacklightPolicy <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate, _SBProximityTouchHandlingDelegate> {
    SBNotchedStatusBarProximityBacklightPolicyEnablementCondition * _enablementCondition;
    bool  _objectInProximity;
    SBProximityTouchHandlingController * _proxTouchHandlingController;
    SBProximitySettings * _proximitySettings;
    unsigned long long  _timesEnabledWithObjectInProximity;
    unsigned long long  _touchesReceivedWithObjectInProximity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_proximitySettings, setter=_setProximitySettings:, nonatomic, retain) SBProximitySettings *proximitySettings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_absorbTouchesBelowStatusBarHeight;
- (void)_absorbTouchesFullScreen;
- (id)_createNewEnablementCondition;
- (double)_debounceDurationForNumberOfTouchesReceivedWithObjectInProximity:(bool)arg1;
- (id)_proximitySettings;
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1;
- (void)_setProximitySettings:(id)arg1;
- (void)_stopAbsorbingTouches;
- (void)condition:(id)arg1 enablementDidChange:(bool)arg2;
- (void)dealloc;
- (void)didHitAllowedRegion:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 touchHandlingController:(id)arg2;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(bool)arg2;
- (void)windowSceneDidConnect:(id)arg1;

@end
