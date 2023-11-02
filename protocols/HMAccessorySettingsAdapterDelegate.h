
@protocol HMAccessorySettingsAdapterDelegate <NSObject>

@required

- (void)adapter:(HMAccessorySettingsAdapter *)arg1 didUpdateSettingKeyPaths:(NSArray *)arg2;
- (void)adapter:(HMAccessorySettingsAdapter *)arg1 didUpdateSettings:(HMAccessorySettings *)arg2;

@end
