
@protocol HealthExposureNotificationUI.ExposureNotifying

@required

- (void)allRegionConfigurations:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (bool)areAvailabilityAlertsEnabled;
- (void)didEnterLegalConsentPageForRegion:(ENRegion *)arg1;
- (long long)exposureNotificationStatus;
- (bool)isExposureLoggingDataPresent;
- (void)isKeyReleasePreAuthorizedForRegion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ENRegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)isTravelStatusEnabledForRegion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ENRegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)latestExposureNotification:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ENExposureNotification *, void*
- (void)onboardingDidStartForRegion:(ENRegion *)arg1 source:(long long)arg2;
- (void)refreshStatusWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setActiveRegion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ENRegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setAreAvailabilityAlertsEnabled:(bool)arg1;
- (void)setAvailabilityAlertsEnabled:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setExposureNotificationEnabled:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setExposureNotificationStatus:(long long)arg1;
- (void)setIsExposureLoggingDataPresent:(bool)arg1;
- (void)setPreAuthorizeDiagnosisKeysEnabled:(void *)arg1 forRegion:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, ENRegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setShareAnalyticsEnabled:(void *)arg1 region:(void *)arg2 version:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: bool, ENRegion *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setTravelStatusEnabled:(void *)arg1 region:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, ENRegion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setUserConsent:(void *)arg1 region:(void *)arg2 text:(void *)arg3 version:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: long long, ENRegion *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
