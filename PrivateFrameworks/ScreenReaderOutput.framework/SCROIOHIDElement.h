
@interface SCROIOHIDElement : SCROIOElement <SCROIOBluetoothElementProtocol, SCROIOHIDElementProtocol> {
    struct __IOHIDDevice { } * _hidDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *manufacturerName;
@property (nonatomic, readonly) unsigned int productId;
@property (nonatomic, readonly) NSString *productName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int vendorId;

- (id)bluetoothAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void*)hidDevice;
- (id)initWithIOObject:(unsigned int)arg1;
- (bool)isBluetoothLowEnergy;
- (id)manufacturerName;
- (unsigned int)productId;
- (id)productName;
- (int)transport;
- (unsigned int)vendorId;

@end
