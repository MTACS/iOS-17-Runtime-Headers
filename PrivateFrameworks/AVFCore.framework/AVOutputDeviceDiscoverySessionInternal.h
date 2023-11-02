
@interface AVOutputDeviceDiscoverySessionInternal : NSObject {
    long long  discoveryMode;
    <AVOutputDeviceDiscoverySessionImpl> * impl;
    NSObject<OS_dispatch_queue> * ivarAccessQueue;
    bool  onlyDiscoversBluetoothDevices;
}

@end
