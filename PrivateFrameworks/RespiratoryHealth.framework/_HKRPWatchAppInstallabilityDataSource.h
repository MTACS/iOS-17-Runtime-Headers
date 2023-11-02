
@interface _HKRPWatchAppInstallabilityDataSource : NSObject <HKRPWatchAppInstallabilityDataSource> {
    HKRPOxygenSaturationAvailability * _availability;
    NRDevice * _device;
    HKRPOxygenSaturationOnboardingCache * _onboardingCache;
    NSUserDefaults * _userDefaults;
}

@property (getter=isBloodOxygenSaturationEnabled, nonatomic, readonly) bool bloodOxygenSaturationEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceSupported, nonatomic, readonly) bool deviceSupported;
@property (nonatomic, readonly) bool hasCompletedOnboarding;
@property (readonly) unsigned long long hash;
@property (getter=isRunningStoreDemoMode, nonatomic, readonly) bool runningStoreDemoMode;
@property (nonatomic, readonly, copy) NSString *selectedCountry;
@property (nonatomic, readonly) bool shouldForceAppInstall;
@property (readonly) Class superclass;
@property (getter=isTinkerModeEnabled, nonatomic, readonly) bool tinkerModeEnabled;

- (void).cxx_destruct;
- (bool)hasCompletedOnboarding;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (bool)isBloodOxygenSaturationEnabled;
- (bool)isDeviceSupported;
- (bool)isRunningStoreDemoMode;
- (bool)isTinkerModeEnabled;
- (id)selectedCountry;
- (bool)shouldForceAppInstall;

@end
