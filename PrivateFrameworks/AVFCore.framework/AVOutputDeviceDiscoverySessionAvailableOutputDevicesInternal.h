
@interface AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal : NSObject {
    NSMutableArray * _otherDevices;
    NSMutableArray * _recentlyUsedDevices;
    <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> * impl;
}

@end
