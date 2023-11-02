
@interface SBRecalibrateProximitySensorMultiphaseHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction, SBProximitySensorManagerObserver> {
    long long  _phase;
    SBProximitySensorManager * _sensorManager;
    BSAbsoluteMachTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long phase;
@property (nonatomic, retain) SBProximitySensorManager *sensorManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) BSAbsoluteMachTimer *timer;

- (void).cxx_destruct;
- (bool)_disallowsAnyPressForReason:(id*)arg1;
- (void)_timerDidFire;
- (void)_transitionToPhase:(long long)arg1;
- (void)_transitionToPhase:(long long)arg1 timeout:(double)arg2;
- (bool)consumeInitialPressDown;
- (bool)consumeSinglePressUp;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (bool)disallowsDoublePressForReason:(id*)arg1;
- (bool)disallowsLongPressForReason:(id*)arg1;
- (bool)disallowsSinglePressForReason:(id*)arg1;
- (bool)disallowsTriplePressForReason:(id*)arg1;
- (id)hardwareButtonGestureParameters;
- (id)initWithProximitySensorManager:(id)arg1;
- (long long)phase;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(bool)arg2;
- (id)sensorManager;
- (void)setPhase:(long long)arg1;
- (void)setSensorManager:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
