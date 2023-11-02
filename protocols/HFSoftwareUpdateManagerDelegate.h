
@protocol HFSoftwareUpdateManagerDelegate

@optional

- (void)didUpdateToInstallingState:(bool)arg1 forAccessory:(HMAccessory *)arg2;
- (void)softwareUpdateV2DidUpdateForAccessory:(HMAccessory *)arg1;
- (void)softwareUpdateV2DidUpdateProgressForAccessory:(HMAccessory *)arg1;

@end
