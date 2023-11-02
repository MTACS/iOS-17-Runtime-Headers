
@interface PSThirdPartyAppController : PSSpecifierController <PSDriverPolicyForAppDelegate, PSSystemPolicyForAppDelegate> {
    PSSystemPolicyForApp * _appPolicy;
    PSDriverPolicyForApp * _driverPolicy;
    PSSystemPolicyForApp * _systemPolicy;
}

@property (nonatomic, retain) PSSystemPolicyForApp *appPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PSDriverPolicyForApp *driverPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PSSystemPolicyForApp *systemPolicy;

- (void).cxx_destruct;
- (id)_readToggleSwitchSpecifierValue:(id)arg1;
- (void)_setToggleSwitchSpecifierValue:(id)arg1 specifier:(id)arg2;
- (id)_uiValueFromValue:(id)arg1 specifier:(id)arg2;
- (id)_valueFromUIValue:(id)arg1 specifier:(id)arg2;
- (id)appPolicy;
- (id)bundle;
- (id)driverPolicy;
- (id)loadSpecifiers;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg1;
- (void)setAppPolicy:(id)arg1;
- (void)setDriverPolicy:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setSystemPolicy:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (void)showPrivacyControllerForBundleID:(id)arg1;
- (void)showPrivacyControllerForBundleName:(id)arg1;
- (id)systemPolicy;
- (void)viewWillAppear:(bool)arg1;

@end
