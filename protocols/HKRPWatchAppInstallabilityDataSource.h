
@protocol HKRPWatchAppInstallabilityDataSource <NSObject>

@required

- (bool)hasCompletedOnboarding;
- (bool)isBloodOxygenSaturationEnabled;
- (bool)isDeviceSupported;
- (bool)isRunningStoreDemoMode;
- (bool)isTinkerModeEnabled;
- (NSString *)selectedCountry;
- (bool)shouldForceAppInstall;

@end
