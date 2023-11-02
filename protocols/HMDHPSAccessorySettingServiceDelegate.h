
@protocol HMDHPSAccessorySettingServiceDelegate

@optional

- (void)didReconnect;
- (void)didUpdateSetting:(id <HMDHPSSetting>)arg1 forKeyPath:(NSString *)arg2;
- (void)settingValueUpdatedForKeyPath:(NSString *)arg1 setting:(id <HMDHPSSetting>)arg2;

@end
