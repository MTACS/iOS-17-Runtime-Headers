
@protocol HMDAppleMediaAccessoryDependencyFactory

@required

- (HMDDeviceController *)deviceController;
- (HMDDeviceController *)deviceControllerWithDevice:(HMDDevice *)arg1;
- (HMDDeviceController *)deviceControllerWithDeviceIdentifier:(NSUUID *)arg1;
- (HMDDevice *)deviceForIDSIdentifier:(NSUUID *)arg1;
- (HMDDevice *)deviceWithAddress:(HMDDeviceAddress *)arg1;

@end
