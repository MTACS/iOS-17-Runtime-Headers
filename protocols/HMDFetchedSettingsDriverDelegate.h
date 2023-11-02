
@protocol HMDFetchedSettingsDriverDelegate <NSObject>

@required

- (void)driver:(id <HMDFetchedSettingsDriver>)arg1 didUpdatePrimaryUserInfo:(HMAccessoryInfoPrimaryUser *)arg2;
- (void)driver:(id <HMDFetchedSettingsDriver>)arg1 didUpdateSettings:(NSArray *)arg2;
- (void)driverDidReload:(id <HMDFetchedSettingsDriver>)arg1;

@end
