
@protocol HMAccessorySettingsControllerDataSource <NSObject>

@required

- (HMHome *)accessorySettingsController:(HMAccessorySettingsController *)arg1 homeWithHomeIdentifier:(NSUUID *)arg2;

@end
