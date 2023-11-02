
@interface SBProximitySensorManager : NSObject <SBUIActiveOrientationObserver> {
    int  _backboardNotificationToken;
    NSMutableSet * _clientsWantingDetectionEnabled;
    NSMutableSet * _clientsWantingGracePeriodDisabled;
    SBHardwareDefaults * _hardwareDefaults;
    <SBProximitySensorControlling> * _hidInterface;
    SpringBoard * _interfaceOrientationProvider;
    bool  _objectInCrudeProximity;
    bool  _objectInProximity;
    NSHashTable * _observers;
    bool  _proximityDetectionEnabled;
    int  _proximityDetectionMode;
    bool  _proximityDetectionPermitted;
    BSCompoundAssertion * _suppressBacklightChangesAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGracePeriodDisabled, nonatomic, readonly) bool gracePeriodDisabled;
@property (readonly) unsigned long long hash;
@property (getter=_interfaceOrientationProvider, setter=_setInterfaceOrientationProvider:, nonatomic, retain) SpringBoard *interfaceOrientationProvider;
@property (getter=isObjectInProximity, nonatomic, readonly) bool objectInProximity;
@property (getter=isProximityDetectionEnabled, setter=_setProximityDetectionEnabled:, nonatomic) bool proximityDetectionEnabled;
@property (getter=isProximityDetectionPermitted, setter=_setProximityDetectionPermitted:, nonatomic) bool proximityDetectionPermitted;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_clientsWantDetectionEnabled;
- (void)_destroy;
- (void)_disableProx;
- (void)_enableProx;
- (id)_interfaceOrientationProvider;
- (void)_reloadDefaults;
- (void)_setInterfaceOrientationProvider:(id)arg1;
- (void)_setObjectInCrudeProximity:(bool)arg1;
- (void)_setObjectInProximity:(bool)arg1 detectionMode:(int)arg2;
- (void)_setObjectInProximity:(bool)arg1 detectionMode:(int)arg2 postToApps:(bool)arg3;
- (void)_setProximityDetectionEnabled:(bool)arg1;
- (void)_setProximityDetectionPermitted:(bool)arg1;
- (void)_updateProxState;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)client:(id)arg1 wantsProximityDetectionEnabled:(bool)arg2;
- (void)client:(id)arg1 wantsProximityDetectionEnabled:(bool)arg2 disableGracePeriod:(bool)arg3;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithHIDInterface:(id)arg1 hardwareDefaults:(id)arg2 interfaceOrientationProvider:(id)arg3;
- (bool)isGracePeriodDisabled;
- (bool)isObjectInProximity;
- (bool)isProximityDetectionEnabled;
- (bool)isProximityDetectionPermitted;
- (void)processHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)removeObserver:(id)arg1;
- (void)resetProximityCalibration;
- (id)suppressBacklightChangesForReason:(id)arg1;

@end
