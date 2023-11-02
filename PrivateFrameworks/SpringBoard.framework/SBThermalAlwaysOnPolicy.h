
@interface SBThermalAlwaysOnPolicy : NSObject <SBAlwaysOnPolicy> {
    BLSAssertion * _alwaysOnDisabledAssertion;
    bool  _alwaysOnPolicyActive;
    <SBFLockOutStatusProvider> * _lockOutStatusProvider;
    bool  _thermallyBlocked;
}

@property (getter=isAlwaysOnPolicyActive, nonatomic, readonly) bool alwaysOnPolicyActive;
@property (nonatomic, readonly, copy) NSString *analyticsPolicyName;
@property (nonatomic, readonly, copy) id analyticsPolicyValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=_isThermallyBlocked, setter=_setThermallyBlocked:, nonatomic) bool thermallyBlocked;

- (void).cxx_destruct;
- (bool)_isThermallyBlocked;
- (void)_noteBootCompleted:(id)arg1;
- (void)_noteDeviceBlockStateDidChange:(id)arg1;
- (void)_setThermallyBlocked:(bool)arg1;
- (void)_updateThermalState;
- (void)activateAlwaysOnPolicy;
- (id)analyticsPolicyName;
- (id)analyticsPolicyValue;
- (bool)isAlwaysOnPolicyActive;

@end
