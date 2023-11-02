
@interface HUAccessoryHearingSettings : HCSettings

@property (nonatomic, retain) NSDictionary *activeHearingProtectionAvailable;
@property (nonatomic, retain) NSDictionary *activeHearingProtectionEnabled;

+ (id)sharedInstance;

- (id)activeHearingProtectionAvailable;
- (bool)activeHearingProtectionAvailableForAddress:(id)arg1;
- (id)activeHearingProtectionEnabled;
- (bool)activeHearingProtectionEnabledForAddress:(id)arg1;
- (id)keysToSync;
- (void)logMessage:(id)arg1;
- (id)preferenceDomainForPreferenceKey:(id)arg1;
- (void)setActiveHearingProtectionAvailable:(id)arg1;
- (void)setActiveHearingProtectionAvailable:(bool)arg1 forAddress:(id)arg2;
- (void)setActiveHearingProtectionEnabled:(id)arg1;
- (void)setActiveHearingProtectionEnabled:(bool)arg1 forAddress:(id)arg2;
- (bool)shouldStoreLocally;

@end
