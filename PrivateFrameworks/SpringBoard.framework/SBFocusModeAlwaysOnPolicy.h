
@interface SBFocusModeAlwaysOnPolicy : NSObject <PTSettingsKeyObserver, SBAlwaysOnPolicy, SBDoNotDisturbStateMonitorObserver> {
    BLSAssertion * _alwaysOnDisabledAssertion;
    bool  _alwaysOnPolicyActive;
    bool  _disableAlwaysOn;
    SBDoNotDisturbStateMonitor * _dndStateMonitor;
    SBAlwaysOnPolicySettings * _policySettings;
}

@property (getter=isAlwaysOnPolicyActive, nonatomic, readonly) bool alwaysOnPolicyActive;
@property (nonatomic, readonly, copy) NSString *analyticsPolicyName;
@property (nonatomic, readonly, copy) id analyticsPolicyValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setDisableAlwaysOn:(bool)arg1 dndState:(id)arg2;
- (bool)_shouldDisableAlwaysOnForDNDState:(id)arg1;
- (void)_updateFromDNDState:(id)arg1;
- (void)activateAlwaysOnPolicy;
- (id)analyticsPolicyName;
- (id)analyticsPolicyValue;
- (void)doNotDisturbStateMonitor:(id)arg1 didUpdateToState:(id)arg2;
- (bool)isAlwaysOnPolicyActive;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
