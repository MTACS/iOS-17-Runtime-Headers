
@interface AVOutputDeviceInternal : NSObject {
    NSString * ID;
    NSData * MACAddress;
    <AVOutputDeviceCommunicationChannelManager> * commChannelManager;
    <AVOutputDeviceCommunicationChannelDelegate> * communicationChannelDelegate;
    unsigned long long  deviceFeatures;
    long long  deviceSubType;
    long long  deviceType;
    NSString * firmwareVersion;
    <AVOutputDeviceImpl> * impl;
    NSString * manufacturer;
    NSString * modelID;
    NSString * name;
    NSString * serialNumber;
}

- (void).cxx_destruct;

@end
