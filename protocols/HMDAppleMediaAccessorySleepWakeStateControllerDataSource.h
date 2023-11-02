
@protocol HMDAppleMediaAccessorySleepWakeStateControllerDataSource

@required

- (HMDAppleMediaProfile *)appleMediaProfileForAccessoryUUID:(NSUUID *)arg1;
- (HMFProductInfo *)currentDeviceProductInfoForAppleMediaAccessorySleepWakeStateController:(HMDAppleMediaAccessorySleepWakeStateController *)arg1;
- (HMDDevice *)deviceForAppleMediaAccessorySleepWakeStateController:(HMDAppleMediaAccessorySleepWakeStateController *)arg1;

@end
