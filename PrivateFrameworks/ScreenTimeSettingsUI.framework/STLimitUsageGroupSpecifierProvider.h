
@interface STLimitUsageGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver, STAlwaysAllowListControllerDelegate, STDeviceBedtimeListControllerDelegate> {
    PSSpecifier * _alwaysAllowedSpecifier;
    STAppAndWebsiteActivityOnboardingController * _appAndWebsiteActivityOnboardingController;
    PSSpecifier * _appAndWebsiteActivitySpecifier;
    PSSpecifier * _appLimitsSpecifier;
    PSSpecifier * _deviceBedtimeSpecifier;
    NSTimer * _downtimeScheduleRefreshTimer;
    STEyeReliefOnboardingController * _eyeReliefOnboardingController;
    UIViewController * _rootViewController;
    PSSpecifier * _screenDistanceSpecifier;
}

@property (nonatomic, retain) PSSpecifier *alwaysAllowedSpecifier;
@property (nonatomic, retain) STAppAndWebsiteActivityOnboardingController *appAndWebsiteActivityOnboardingController;
@property (nonatomic, retain) PSSpecifier *appAndWebsiteActivitySpecifier;
@property (nonatomic, retain) PSSpecifier *appLimitsSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PSSpecifier *deviceBedtimeSpecifier;
@property (nonatomic, retain) NSTimer *downtimeScheduleRefreshTimer;
@property (nonatomic, retain) STEyeReliefOnboardingController *eyeReliefOnboardingController;
@property (readonly) unsigned long long hash;
@property UIViewController *rootViewController;
@property (nonatomic, retain) PSSpecifier *screenDistanceSpecifier;
@property (readonly) Class superclass;

+ (id)providerWithCoordinator:(id)arg1 rootViewController:(id)arg2;

- (void).cxx_destruct;
- (void)_deviceBedtimeDidChange:(id)arg1;
- (void)_hasWatchOSDevicesOnlyDidChange:(bool)arg1;
- (void)_isScreenTimeEnabledOrHasWatchOSDevicesOnlyDidChange;
- (void)_refreshBedtimeSpecifiersForBedtime:(id)arg1;
- (id)_subtitleTextForDeviceBedtime:(id)arg1;
- (void)alwaysAllowListController:(id)arg1 didFinishEditingAlwaysAllowList:(id)arg2;
- (id)alwaysAllowedDetailText;
- (id)alwaysAllowedSpecifier;
- (id)appAndWebsiteActivityOnboardingController;
- (id)appAndWebsiteActivitySpecifier;
- (id)appLimitsDetailText;
- (id)appLimitsSpecifier;
- (void)bedtimeListController:(id)arg1 didFinishEditingBedtime:(id)arg2;
- (void)dealloc;
- (id)deviceBedtimeSpecifier;
- (id)downtimeScheduleRefreshTimer;
- (id)eyeReliefOnboardingController;
- (id)init;
- (id)limitUsageSpecifers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)rootViewController;
- (void)scheduleDowntimeRefreshAndReloadSpecifiersForBedtime:(id)arg1;
- (void)scheduleDowntimeRefreshIfNeeded;
- (id)screenDistanceSpecifier;
- (void)setAlwaysAllowedSpecifier:(id)arg1;
- (void)setAppAndWebsiteActivityOnboardingController:(id)arg1;
- (void)setAppAndWebsiteActivitySpecifier:(id)arg1;
- (void)setAppLimitsSpecifier:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (void)setDeviceBedtimeSpecifier:(id)arg1;
- (void)setDowntimeScheduleRefreshTimer:(id)arg1;
- (void)setEyeReliefOnboardingController:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setScreenDistanceSpecifier:(id)arg1;
- (void)setUpAppAndWebsiteActivity:(id)arg1;
- (void)setUpScreenDistance:(id)arg1;
- (void)showAlwaysAllowedViewController:(id)arg1;
- (void)showAppLimitsViewController:(id)arg1;
- (bool)showDemoModeAlertIfNeeded;
- (void)showDeviceBedtimeViewController:(id)arg1;
- (void)showScreenDistanceViewController:(id)arg1;

@end
