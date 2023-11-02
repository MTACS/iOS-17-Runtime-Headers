
@protocol HUSafetyAndSecuritySettingsModuleControllerDelegate <NSObject>

@required

- (void)dismissToHomeSettings;
- (void)presentHH2OnboardingForHome:(HMHome *)arg1 withDevices:(NSSet *)arg2;

@end
