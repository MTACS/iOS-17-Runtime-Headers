
@interface SBSetupAlwaysOnPolicy : NSObject <SBAlwaysOnPolicy> {
    BLSAssertion * _alwaysOnDisabledAssertion;
    bool  _alwaysOnPolicyActive;
    bool  _inSetupMode;
}

@property (getter=isAlwaysOnPolicyActive, nonatomic, readonly) bool alwaysOnPolicyActive;
@property (nonatomic, readonly, copy) NSString *analyticsPolicyName;
@property (nonatomic, readonly, copy) id analyticsPolicyValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isInSetupMode, setter=_setInSetupMode:, nonatomic) bool inSetupMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isInSetupMode;
- (void)_setInSetupMode:(bool)arg1;
- (void)_setupModeStateDidChange:(id)arg1;
- (void)_updateSetupModeState;
- (void)activateAlwaysOnPolicy;
- (id)analyticsPolicyName;
- (id)analyticsPolicyValue;
- (bool)isAlwaysOnPolicyActive;

@end
