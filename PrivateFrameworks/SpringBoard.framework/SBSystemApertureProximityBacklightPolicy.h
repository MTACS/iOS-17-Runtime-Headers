
@interface SBSystemApertureProximityBacklightPolicy : SBDefaultProximityBacklightPolicy <_SBSystemApertureProximityTouchHandlingViewDelegate> {
    <SBSystemApertureProximityBacklightPolicyDelegate> * _delegate;
    bool  _isTrackingTouchPossiblyInJindoWithObjectInProximity;
    unsigned long long  _numberOfTouchesWhileObjectInProximity;
    bool  _objectInProximityAccordingToProxManager;
    bool  _objectThatCanPreventTouchesInProximity;
    SBProximitySettings * _proximitySettings;
    SBHIDUISensorModeController * _sensorModeController;
    bool  _suppressBacklightChanges;
    <BSInvalidatable> * _suppressSystemGestures;
    bool  _systemApertureBacklightPolicy;
    SBSystemGestureManager * _systemGestureManager;
    NSTimer * _touchAllowanceGracePeriodTimer;
    UIView * _touchBlockingView;
    UIView * _touchTrackingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSystemApertureProximityBacklightPolicyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_proximitySettings, setter=_setProximitySettings:, nonatomic, retain) SBProximitySettings *proximitySettings;
@property (readonly) Class superclass;
@property (getter=isSystemApertureBacklightPolicy, nonatomic) bool systemApertureBacklightPolicy;

- (void).cxx_destruct;
- (bool)_isGracePeriodDisabledByEntitledApp;
- (void)_objectThatCanPreventTouchesWithinProximityDidChange:(bool)arg1 fromGracePeriod:(bool)arg2;
- (id)_proximitySettings;
- (void)_scheduleBacklightFactorToZeroForTouchWithinSystemAperture;
- (void)_setProximitySettings:(id)arg1;
- (void)_startCancelingTouches;
- (void)_stopCancelingTouches;
- (void)dealloc;
- (id)delegate;
- (void)didHitAllowedRegion:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithConfiguration:(id)arg1;
- (bool)isSystemApertureBacklightPolicy;
- (bool)proximityBacklightPolicyTouchHandlingView:(id)arg1 shouldConsumeTouchForHitTest:(struct CGPoint { double x1; double x2; })arg2 withEvent:(id)arg3;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(bool)arg2;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(bool)arg2 detectionMode:(int)arg3;
- (void)proximitySensorManager:(id)arg1 shouldSuppressBacklightChanges:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSystemApertureBacklightPolicy:(bool)arg1;

@end
