
@protocol HMDSiriSecureAccessoryAccessControllerDataSource <NSObject>

@required

- (bool)currentDeviceSupportsSiriUnsecuringActionsWithNoPasscodeForSiriSecureAccessoryAccessController:(HMDSiriSecureAccessoryAccessController *)arg1;
- (bool)currentDeviceSupportsSiriUnsecuringActionsWithWatchAuthForSiriSecureAccessoryAccessController:(HMDSiriSecureAccessoryAccessController *)arg1;
- (long long)homeLocationForSiriSecureAccessoryAccessController:(HMDSiriSecureAccessoryAccessController *)arg1;
- (bool)isCurrentDevicePairedWithWatchForSiriSecureAccessoryAccessController:(HMDSiriSecureAccessoryAccessController *)arg1;

@end