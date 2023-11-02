
@interface SBAlwaysOnSettings : PTSettings {
    SBAlwaysOnAPLSettings * _aplSettings;
    SBAlwaysOnPolicySettings * _policySettings;
    long long  _sideButtonBehavior;
}

@property (nonatomic, retain) SBAlwaysOnAPLSettings *aplSettings;
@property (nonatomic, retain) SBAlwaysOnPolicySettings *policySettings;
@property (nonatomic) long long sideButtonBehavior;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)aplSettings;
- (id)policySettings;
- (void)setAplSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setPolicySettings:(id)arg1;
- (void)setSideButtonBehavior:(long long)arg1;
- (long long)sideButtonBehavior;

@end
