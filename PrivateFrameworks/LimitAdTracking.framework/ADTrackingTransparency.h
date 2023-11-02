
@interface ADTrackingTransparency : NSObject

@property (nonatomic) long long acknowledgedVersionForPersonalizedAds;
@property (nonatomic, readonly) NSArray *adSwitchDisabledReasons;
@property (nonatomic) bool crossAppTrackingAllowed;
@property (nonatomic, readonly) long long crossAppTrackingAllowedSwitchDisabledReason;
@property (nonatomic, readonly) bool crossAppTrackingAllowedSwitchEnabled;
@property (nonatomic, readonly) long long latestVersionForPersonalizedAdsConsent;
@property (nonatomic) bool personalizedAds;
@property (nonatomic, readonly) bool personalizedAdsAvailable;
@property (nonatomic, readonly) bool personalizedAdsAvailableForAdPlatforms;
@property (nonatomic, readonly) long long personalizedAdsSwitchDisabledReason;
@property (nonatomic, readonly) bool personalizedAdsSwitchEnabled;
@property (nonatomic, readonly) bool shouldPresentPersonalizedAdsOnboarding;
@property (nonatomic, readonly) bool shouldShowPersonalizedAdsToggle;

- (bool)_isUserEDURestricted;
- (bool)_isUserManagedRestricted;
- (bool)_userAllowedToChangeSettings;
- (long long)accountLevelSwitchDisabledReason;
- (long long)accountRestrictionReason;
- (long long)acknowledgedVersionForPersonalizedAds;
- (id)adSwitchDisabledReasons;
- (id)appTrackingServiceProxy:(id)arg1;
- (id)appTrackingXPCConnection:(id /* block */)arg1 withInvalidation:(id /* block */)arg2;
- (bool)crossAppTrackingAllowed;
- (long long)crossAppTrackingAllowedSwitchDisabledReason;
- (bool)crossAppTrackingAllowedSwitchEnabled;
- (bool)isPersonalizedAdsScreenTimeRestricted;
- (long long)latestVersionForPersonalizedAdsConsent;
- (bool)personalizedAds;
- (bool)personalizedAdsAvailable;
- (void)personalizedAdsAvailable:(id /* block */)arg1;
- (bool)personalizedAdsAvailableForAdPlatforms;
- (long long)personalizedAdsSwitchDisabledReason;
- (bool)personalizedAdsSwitchEnabled;
- (void)setAcknowledgedVersionForPersonalizedAds:(long long)arg1;
- (void)setCrossAppTrackingAllowed:(bool)arg1;
- (void)setPersonalizedAds:(bool)arg1;
- (bool)shouldDisplayPAUI;
- (bool)shouldPresentPersonalizedAdsOnboarding;
- (bool)shouldShowPersonalizedAdsToggle;

@end
