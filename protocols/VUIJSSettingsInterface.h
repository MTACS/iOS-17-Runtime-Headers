
@protocol VUIJSSettingsInterface <JSExport>

@required

- (NSDictionary *)appSettingsByChannelID;
- (NSArray *)consentedBrands;
- (NSArray *)deniedBrands;
- (void)forceUpdateWithCallback:(JSValue *)arg1;
- (unsigned long long)privacyFlowContentVersion;
- (bool)privateModeEnabled;
- (bool)sportsScoreSpoilersAllowed;
- (void)updateFeaturesConfiguration:(NSDictionary *)arg1;
- (NSDictionary *)userPreferences;
- (NSDictionary *)wlkOverrides;

@end
