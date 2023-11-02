
@interface CLFSettings : CLFBaseSettings

@property (nonatomic, retain) NSString *adminPasscodeRecoveryAppleID;
@property (nonatomic) bool allowSiri;
@property (nonatomic, retain) NSArray *applicationBundleIdentifiers;
@property (nonatomic) bool batteryMonitoringEnabled;
@property (nonatomic) bool didCompleteSetup;
@property (nonatomic) bool emergencyKeypadEnabled;
@property (nonatomic, retain) NSString *listLayout;
@property (nonatomic) bool lockScreenClockEnabled;
@property (nonatomic) bool notificationsEnabled;
@property (nonatomic, retain) NSArray *overrideNonClarityApplicationBundleIdentifiers;
@property (nonatomic) bool shouldShowTripleClickInstructions;
@property (nonatomic) bool volumeButtonsEnabled;

+ (id)allPreferenceSelectorsAsStrings;
+ (id)domainName;
+ (id)sharedInstance;

- (id)adminPasscodeRecoveryAppleID;
- (bool)allowSiri;
- (id)applicationBundleIdentifiers;
- (bool)batteryMonitoringEnabled;
- (bool)didCompleteSetup;
- (bool)emergencyKeypadEnabled;
- (id)init;
- (id)listLayout;
- (bool)lockScreenClockEnabled;
- (bool)notificationsEnabled;
- (id)overrideNonClarityApplicationBundleIdentifiers;
- (void)setAdminPasscodeRecoveryAppleID:(id)arg1;
- (void)setAllowSiri:(bool)arg1;
- (void)setApplicationBundleIdentifiers:(id)arg1;
- (void)setBatteryMonitoringEnabled:(bool)arg1;
- (void)setDidCompleteSetup:(bool)arg1;
- (void)setEmergencyKeypadEnabled:(bool)arg1;
- (void)setListLayout:(id)arg1;
- (void)setLockScreenClockEnabled:(bool)arg1;
- (void)setNotificationsEnabled:(bool)arg1;
- (void)setOverrideNonClarityApplicationBundleIdentifiers:(id)arg1;
- (void)setShouldShowTripleClickInstructions:(bool)arg1;
- (void)setVolumeButtonsEnabled:(bool)arg1;
- (bool)shouldShowTripleClickInstructions;
- (bool)volumeButtonsEnabled;

@end
