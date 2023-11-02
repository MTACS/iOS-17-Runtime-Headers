
@interface PSAppListController : PSListController <PSDriverPolicyForAppDelegate, PSSystemPolicyForAppDelegate> {
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

+ (id)_typeErrorStringForKeyWithName:(id)arg1 expectedType:(Class)arg2 actualType:(Class)arg3;
+ (id)allowedPrivacyBundlesForID;
+ (id)allowedPrivacyBundlesForName;
+ (bool)canUseOnBoardingKitFOrPrivacyDisplayForBundleName:(id)arg1;
+ (bool)canUseOnBoardingKitForPrivacyDisplayForBundleID:(id)arg1;
+ (id)childPaneSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)groupSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)localizedTitlesFromUnlocalizedTitles:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3;
+ (id)multiValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)onBoardingKitBundleIDDict;
+ (id)onBoardingKitBundleNameDict;
+ (id)radioGroupSpecifiersFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)sliderSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)specifiersFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)textFieldSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)titleValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)toggleSwitchSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;

- (void).cxx_destruct;
- (id)_readToggleSwitchSpecifierValue:(id)arg1;
- (void)_setToggleSwitchSpecifierValue:(id)arg1 specifier:(id)arg2;
- (id)_uiValueFromValue:(id)arg1 specifier:(id)arg2;
- (id)_valueFromUIValue:(id)arg1 specifier:(id)arg2;
- (id)appPolicy;
- (id)bundle;
- (id)driverPolicy;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg1;
- (void)setAppPolicy:(id)arg1;
- (void)setDriverPolicy:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setSystemPolicy:(id)arg1;
- (void)showPrivacyControllerForBundleID:(id)arg1;
- (void)showPrivacyControllerForBundleName:(id)arg1;
- (id)specifiers;
- (id)systemPolicy;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
