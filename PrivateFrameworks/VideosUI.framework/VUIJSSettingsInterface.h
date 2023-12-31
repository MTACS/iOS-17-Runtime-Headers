
@interface VUIJSSettingsInterface : VUIJSObject <VUIJSSettingsInterface>

- (void)_handleSettingsDidChange:(id)arg1;
- (id)appSettingsByChannelID;
- (id)consentedBrands;
- (void)dealloc;
- (id)deniedBrands;
- (void)forceUpdateWithCallback:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (unsigned long long)privacyFlowContentVersion;
- (bool)privateModeEnabled;
- (bool)sportsScoreSpoilersAllowed;
- (void)updateFeaturesConfiguration:(id)arg1;
- (id)userPreferences;
- (id)wlkOverrides;

@end
