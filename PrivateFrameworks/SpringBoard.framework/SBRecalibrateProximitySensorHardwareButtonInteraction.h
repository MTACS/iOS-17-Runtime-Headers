
@interface SBRecalibrateProximitySensorHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction, SBProximitySensorManagerObserver> {
    bool  _didResetProxCalibration;
    SBProximitySensorManager * _sensorManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didResetProxCalibration;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBProximitySensorManager *sensorManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_disallowsAnyPressForReason:(id*)arg1;
- (bool)consumeInitialPressDown;
- (bool)consumeSinglePressUp;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (bool)didResetProxCalibration;
- (bool)disallowsDoublePressForReason:(id*)arg1;
- (bool)disallowsLongPressForReason:(id*)arg1;
- (bool)disallowsSinglePressForReason:(id*)arg1;
- (bool)disallowsTriplePressForReason:(id*)arg1;
- (id)hardwareButtonGestureParameters;
- (id)initWithProximitySensorManager:(id)arg1;
- (id)sensorManager;
- (void)setDidResetProxCalibration:(bool)arg1;
- (void)setSensorManager:(id)arg1;

@end
