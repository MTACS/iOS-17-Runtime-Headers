
@protocol WLSourceDevicesDelegate

@required

- (void)sourceDeviceController:(WLSourceDevicesController *)arg1 didDiscoverCandidate:(WLSourceDevice *)arg2;
- (void)sourceDeviceController:(WLSourceDevicesController *)arg1 didDiscoverDevice:(WLSourceDevice *)arg2;
- (void)wifiAndDeviceDiscoveryDidGetInterrupted;

@end
