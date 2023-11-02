
@interface BTSDeviceClassic : BTSDevice {
    BluetoothDevice * _device;
    bool  ctkdDevice;
    bool  managedByWallet;
    bool  supportsBackgroundNI;
}

@property (nonatomic, readonly) BluetoothDevice *device;

+ (id)deviceWithDevice:(id)arg1;

- (void).cxx_destruct;
- (bool)ancsAuthorized;
- (id)classicDevice;
- (bool)cloudPaired;
- (bool)connect;
- (bool)connected;
- (id)description;
- (id)device;
- (void)disconnect;
- (bool)doesSupportBackgroundNI;
- (id)identifier;
- (id)initWithDevice:(id)arg1;
- (bool)isApplePencil:(int*)arg1;
- (bool)isCTKDDevice;
- (bool)isFirmwareUpdateRequiredDevice;
- (bool)isHIDDevice;
- (bool)isHealthDevice;
- (bool)isLimitedConnectivityDevice;
- (bool)isManagedByWallet;
- (bool)isMyDevice;
- (bool)isTemporaryPairedDevice;
- (bool)magicPaired;
- (id)name;
- (bool)paired;
- (id)productName;
- (void)setCtkdDevice:(bool)arg1;
- (void)setManagedByWallet:(bool)arg1;
- (void)setSupportsBackgroundNI:(bool)arg1;
- (bool)setUserName:(id)arg1;
- (bool)supportsANCS;
- (void)unpair;

@end
