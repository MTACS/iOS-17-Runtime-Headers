
@protocol HMDCompositeSettingControllerManagerStateTransitionDelegate <NSObject>

@required

- (void)didUpdateCurrentRunState:(long long)arg1 updatedState:(long long)arg2 forHome:(NSUUID *)arg3;

@optional

- (void)didConfigureCompositeSettingsControllerForHomeUUID:(NSUUID *)arg1 accessoryUUID:(NSUUID *)arg2;
- (void)didUpdateSiriEndpointSettingForHomeUUID:(NSUUID *)arg1 accessoryUUID:(NSUUID *)arg2;
- (void)languagesDidChangeForHome:(NSUUID *)arg1;

@end
