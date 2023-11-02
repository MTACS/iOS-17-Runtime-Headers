
@interface SBLowPowerModeAlwaysOnPolicy : NSObject <SBAlwaysOnPolicy> {
    BLSAssertion * _alwaysOnDisabledAssertion;
    bool  _alwaysOnPolicyActive;
}

@property (getter=isAlwaysOnPolicyActive, nonatomic, readonly) bool alwaysOnPolicyActive;
@property (nonatomic, readonly, copy) NSString *analyticsPolicyName;
@property (nonatomic, readonly, copy) id analyticsPolicyValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_noteLowPowerModeChanged:(id)arg1;
- (void)_updateAssertion;
- (void)activateAlwaysOnPolicy;
- (id)analyticsPolicyName;
- (id)analyticsPolicyValue;
- (bool)isAlwaysOnPolicyActive;

@end
