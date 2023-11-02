
@interface AAPreferences : NSObject

+ (long long)customHealthCheckIntervalMinutes;
+ (long long)customHealthCheckReachabilityIntervalMinutes;
+ (long long)customHealthCheckVersion;
+ (long long)customIdentityTaskIntervalMinutes;
+ (bool)isCustodianPreflightDisabled;
+ (bool)isCustodianPreflightTTREnabled;
+ (bool)isCustomHealthCheckIntervalEnabled;
+ (bool)isCustomIdentityTaskIntervalEnabled;
+ (bool)isExperimentalModeEnabled;
+ (bool)isHealthCheckTTREnabled;
+ (bool)isIdentityPresentationEnabled;
+ (bool)isMomentsDataclassEnabled;
+ (bool)isMultipleFullAccountsEnabled;
+ (bool)isNeverSkipCustodianCheckEnabled;
+ (bool)isRunningInStoreDemoMode;
+ (bool)isSimulateUnhealthyCustodianEnabled;
+ (bool)isSpyglass2023Enabled;
+ (bool)isYorktownEnabled;
+ (void)setCustodianPreflightDisabled:(bool)arg1;
+ (void)setCustodianPreflightTTREnabled:(bool)arg1;
+ (void)setCustomHealthCheckIntervalEnabled:(bool)arg1;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)arg1;
+ (void)setCustomHealthCheckVersion:(long long)arg1;
+ (void)setCustomHealthFailureReachabilityIntervalMinutes:(long long)arg1;
+ (void)setCustomIdentityTaskIntervalEnabled:(bool)arg1;
+ (void)setCustomIdentityTaskIntervalMinutes:(long long)arg1;
+ (void)setExperimentalModeEnabled:(bool)arg1;
+ (void)setHealthCheckTTREnabled:(bool)arg1;
+ (void)setMultipleFullAccountsEnabled:(bool)arg1;
+ (void)setNeverSkipCustodianCheckEnabled:(bool)arg1;
+ (void)setShouldShowAccountContacts:(bool)arg1;
+ (void)setShouldUseUnifiedLoginEndpoint:(bool)arg1;
+ (void)setSimulateUnhealthyCustodianEnabled:(bool)arg1;
+ (bool)shouldEnableAccountUserNotifications;
+ (bool)shouldEnableFastSignIn;
+ (bool)shouldShowAccountContacts;
+ (bool)shouldSkipIdMSFinalizeCustodian;
+ (bool)shouldSkipIdMSKeyUpdate;
+ (bool)shouldUseUnifiedLoginEndpoint;

@end
