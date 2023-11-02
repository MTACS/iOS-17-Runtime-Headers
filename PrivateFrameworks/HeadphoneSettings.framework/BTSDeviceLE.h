
@interface BTSDeviceLE : BTSDevice {
    CBCentralManager * _centralManager;
    CBPeripheral * _peripheral;
    bool  ctkdDevice;
    bool  healthDevice;
    bool  managedByWallet;
    bool  supportsBackgroundNI;
}

+ (id)deviceWithPeripheral:(id)arg1 manager:(id)arg2;

- (void).cxx_destruct;
- (bool)ancsAuthorized;
- (id)classicDevice;
- (bool)cloudPaired;
- (bool)connect;
- (bool)connected;
- (id)description;
- (void)disconnect;
- (bool)doesSupportBackgroundNI;
- (id)identifier;
- (id)initWithPeripheral:(id)arg1 manager:(id)arg2;
- (bool)isApplePencil:(int*)arg1;
- (bool)isCTKDDevice;
- (bool)isFirmwareUpdateRequiredDevice;
- (bool)isHIDDevice;
- (bool)isHealthDevice;
- (bool)isLimitedConnectivityDevice;
- (bool)isManagedByWallet;
- (bool)isMyDevice;
- (bool)isTemporaryPairedDevice;
- (id)name;
- (bool)paired;
- (id)productName;
- (void)setANCSAuthorization:(bool)arg1;
- (void)setCtkdDevice:(bool)arg1;
- (void)setHealthDevice:(bool)arg1;
- (void)setManagedByWallet:(bool)arg1;
- (void)setSupportsBackgroundNI:(bool)arg1;
- (bool)setUserName:(id)arg1;
- (bool)supportsANCS;
- (bool)supportsCTKD;
- (void)unpair;

@end
