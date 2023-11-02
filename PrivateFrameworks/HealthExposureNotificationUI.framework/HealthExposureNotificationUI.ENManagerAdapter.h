
@interface HealthExposureNotificationUI.ENManagerAdapter : NSObject <HealthExposureNotificationUI.ExposureNotifying> {
    void activationGroup;
    void areAvailabilityAlertsEnabled;
    void exposureNotificationStatus;
    void isAvailabilityAlertsSwitchEnabled;
    void isExposureLoggingDataPresent;
    void manager;
    void statusChangeObservers;
    void statusObservation;
}

@property (nonatomic) bool areAvailabilityAlertsEnabled;
@property (nonatomic) long long exposureNotificationStatus;
@property (nonatomic) bool isAvailabilityAlertsSwitchEnabled;
@property (nonatomic) bool isExposureLoggingDataPresent;
@property (nonatomic, readonly) ENManager *manager;
@property (nonatomic, copy) NSSet *statusChangeObservers;

+ (id)defaultAdapter;
+ (void)setDefaultAdapter:(id)arg1;

- (void).cxx_destruct;
- (void)allRegionConfigurations:(id /* block */)arg1;
- (bool)areAvailabilityAlertsEnabled;
- (void)dealloc;
- (void)didEnterLegalConsentPageForRegion:(id)arg1;
- (long long)exposureNotificationStatus;
- (void)fetchAgencyModelForRegionCode:(id)arg1 reason:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)fetchAllEntities:(id /* block */)arg1;
- (void)fetchSubdivisionsForRegion:(id)arg1 completion:(id /* block */)arg2;
- (void)getAgencyModelForBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)getAgencyModelForRegionCode:(id)arg1 completion:(id /* block */)arg2;
- (void)getLastVisitedRegionWithCompletion:(id /* block */)arg1;
- (id)init;
- (bool)isAvailabilityAlertsSwitchEnabled;
- (bool)isExposureLoggingDataPresent;
- (void)isKeyReleasePreAuthorizedForRegion:(id)arg1 completion:(id /* block */)arg2;
- (void)isTravelStatusEnabledForRegion:(id)arg1 completion:(id /* block */)arg2;
- (void)latestExposureNotification:(id /* block */)arg1;
- (id)manager;
- (void)notifyChangeObserversForChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)onboardingDidStartForRegion:(id)arg1 source:(long long)arg2;
- (void)refreshStatusWithCompletion:(id /* block */)arg1;
- (void)resetAllDataAndDisableExposureNotifications:(id /* block */)arg1;
- (void)setActivePhaseOneAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)setActiveRegion:(id)arg1 completion:(id /* block */)arg2;
- (void)setAreAvailabilityAlertsEnabled:(bool)arg1;
- (void)setAvailabilityAlertsEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setExposureNotificationEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setExposureNotificationStatus:(long long)arg1;
- (void)setIsAvailabilityAlertsSwitchEnabled:(bool)arg1;
- (void)setIsExposureLoggingDataPresent:(bool)arg1;
- (void)setPreAuthorizeDiagnosisKeysEnabled:(bool)arg1 forRegion:(id)arg2 completion:(id /* block */)arg3;
- (void)setShareAnalyticsEnabled:(bool)arg1 region:(id)arg2 version:(id)arg3 completion:(id /* block */)arg4;
- (void)setStatusChangeObservers:(id)arg1;
- (void)setTravelStatusEnabled:(bool)arg1 region:(id)arg2 completion:(id /* block */)arg3;
- (void)setUserConsent:(long long)arg1 region:(id)arg2 text:(id)arg3 version:(id)arg4 completion:(id /* block */)arg5;
- (void)setWeeklySummaryEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (id)statusChangeObservers;
- (bool)tccContainsRecordForBundleIdentifier:(id)arg1;

@end
