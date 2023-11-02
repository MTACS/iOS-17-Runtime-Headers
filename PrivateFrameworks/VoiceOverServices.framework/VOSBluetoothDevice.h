
@interface VOSBluetoothDevice : NSObject <NSCopying, VOSBluetoothConnectableDevice> {
    NSString * _address;
    struct BTDeviceImpl { } * _device;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearName;
- (void)acceptSSP:(int)arg1;
- (id)address;
- (unsigned int)authorizedServices;
- (long long)compare:(id)arg1;
- (void)connect;
- (void)connectWithServices:(unsigned int)arg1;
- (bool)connected;
- (unsigned long long)connectedServices;
- (unsigned long long)connectedServicesCount;
- (bool)connecting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (struct BTDeviceImpl { }*)device;
- (unsigned int)deviceClass;
- (void)disconnect;
- (bool)hasAddress:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDevice:(struct BTDeviceImpl { }*)arg1 address:(id)arg2;
- (bool)isAppleHIDDevice;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (bool)isNameCached;
- (bool)isServiceSupported:(unsigned int)arg1;
- (unsigned int)majorClass;
- (unsigned int)minorClass;
- (id)name;
- (bool)paired;
- (unsigned int)productId;
- (void)setDevice:(struct BTDeviceImpl { }*)arg1;
- (void)setPIN:(id)arg1;
- (int)type;
- (void)unpair;
- (unsigned int)vendorId;

@end
