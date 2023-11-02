
@interface STCommunicationSafetyListController : STPINListViewController {
    PSSpecifier * _checkSpecifier;
    PSSpecifier * _enableAnalyticsSpecifier;
    STCommunicationSafetyOnboardingController * _onboardingController;
}

@property (nonatomic, retain) PSSpecifier *checkSpecifier;
@property (nonatomic, retain) PSSpecifier *enableAnalyticsSpecifier;
@property (nonatomic, retain) STCommunicationSafetyOnboardingController *onboardingController;

- (void).cxx_destruct;
- (void)_acknowledgeAnalyticsTip;
- (void)_acknowledgeIntroScreens;
- (id)_checkForUnsafePhotos:(id)arg1;
- (id)_createCheckForUnsafePhotosSpecifier;
- (id)_createEnableAnalyticsGroupSpecifier;
- (id)_createEnableAnalyticsSpecifier;
- (id)_createUnsafePhotosGroupSpecifier;
- (id)_createViewChildSafetyResourcesGroupSpecifier;
- (id)_createViewChildSafetyResourcesSpecifier;
- (void)_disableAnalyticsIfNeeded;
- (void)_dismissChildSafetyResourcesView:(id)arg1;
- (id)_getEnableAnalytics:(id)arg1;
- (bool)_hasAcknowledgedIntroScreens;
- (bool)_isAnyCommunicationSafetySettingEnabled;
- (bool)_isCommunicationSafetyAnalyticsEnabled;
- (void)_openAboutAnalytics;
- (void)_openChildSafetyWebsite;
- (void)_persistSettings;
- (void)_setCheckForUnsafePhotos:(bool)arg1;
- (void)_setCheckForUnsafePhotos:(id)arg1 specifier:(id)arg2;
- (void)_setEnableAnalytics:(bool)arg1;
- (void)_setEnableAnalytics:(id)arg1 specifier:(id)arg2;
- (void)_showChildSafetyResources;
- (void)_showCommunicationSafetyCompatibilityAlertIfNeeded;
- (id)checkSpecifier;
- (void)dealloc;
- (id)enableAnalyticsSpecifier;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)onboardingController;
- (void)setCheckSpecifier:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setEnableAnalyticsSpecifier:(id)arg1;
- (void)setOnboardingController:(id)arg1;
- (id)specifiers;
- (void)viewWillAppear:(bool)arg1;

@end
