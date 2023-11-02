
@protocol HMDAccessorySettingGroupDataSource <NSObject>

@required

- (bool)shouldEncodeSetting:(HMDAccessorySetting *)arg1 withCoder:(NSCoder *)arg2 forAccessorySettingGroup:(HMDAccessorySettingGroup *)arg3;

@end
