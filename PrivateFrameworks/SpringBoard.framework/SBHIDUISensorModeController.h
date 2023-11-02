
@interface SBHIDUISensorModeController : NSObject <BSInvalidatable, SBAVSystemControllerCacheObserver, SBProximitySensorControlling> {
    NSMutableArray * _assertions;
    SBAVSystemControllerCache * _avCache;
    BSCompoundAssertion * _digitizerModeBaselineAssertion;
    SBHIDUISensorModeAssertion * _pocketTouchesAssertion;
    bool  _proximityDetectionEnabled;
    BKSHIDUISensorMode * _sensorMode;
    <BSInvalidatable> * _sensorModeAssertion;
    long long  _sensorModeTransactionCount;
    BKSHIDUISensorService * _sensorService;
    bool  _shouldUseLowPowerActiveProxDetectionMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool pocketTouchesExpected;
@property (getter=isProximityDetectionEnabled, nonatomic) bool proximityDetectionEnabled;
@property (nonatomic, readonly) bool shouldUseLowPowerActiveProxDetectionMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasModeAssertions;
- (void)_reevaluateLockStateForSource:(long long)arg1;
- (void)_removeHIDUISensorModeAssertion:(id)arg1;
- (id)_requestSensorModeAssertionForReason:(id)arg1 source:(long long)arg2 builder:(id /* block */)arg3;
- (id)addStartupHIDLockAssertion;
- (id)assertBaselineDisabledDigitizerMode:(long long)arg1 source:(long long)arg2 reason:(id)arg3;
- (id)assertDisplayState:(long long)arg1 source:(long long)arg2 reason:(id)arg3;
- (void)cache:(id)arg1 didUpdateActiveAudioRoute:(id)arg2;
- (id)init;
- (id)initWithSensorService:(id)arg1;
- (void)invalidate;
- (bool)isProximityDetectionEnabled;
- (bool)pocketTouchesExpected;
- (void)resetProximityCalibration;
- (id)sensorModeTransactionForBacklightChangeSource:(long long)arg1;
- (void)setPocketTouchesExpected:(bool)arg1;
- (void)setProximityDetectionEnabled:(bool)arg1;
- (bool)shouldUseLowPowerActiveProxDetectionMode;
- (id)suspendProximityDetectionAndDisableDigitizer:(long long)arg1 source:(long long)arg2 reason:(id)arg3;
- (id)suspendProximityDetectionForSource:(long long)arg1 reason:(id)arg2;

@end
