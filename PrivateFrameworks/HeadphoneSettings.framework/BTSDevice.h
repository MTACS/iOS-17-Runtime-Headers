
@interface BTSDevice : NSObject

@property (getter=isCTKDDevice, nonatomic) bool ctkdDevice;
@property (getter=isHealthDevice, nonatomic) bool healthDevice;
@property (getter=isManagedByWallet, nonatomic) bool managedByWallet;
@property (getter=isMyDevice, nonatomic, readonly) bool myDevice;
@property (getter=doesSupportBackgroundNI, nonatomic) bool supportsBackgroundNI;

- (bool)ancsAuthorized;
- (id)classicDevice;
- (bool)cloudPaired;
- (long long)compare:(id)arg1;
- (bool)connect;
- (bool)connected;
- (void)disconnect;
- (bool)doesSupportBackgroundNI;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isApplePencil:(int*)arg1;
- (bool)isCTKDDevice;
- (bool)isEqual:(id)arg1;
- (bool)isFirmwareUpdateRequiredDevice;
- (bool)isHIDDevice;
- (bool)isHealthDevice;
- (bool)isLimitedConnectivityDevice;
- (bool)isManagedByWallet;
- (bool)isMyDevice;
- (bool)isTemporaryPairedDevice;
- (bool)isiPad;
- (id)name;
- (bool)paired;
- (id)productName;
- (void)setANCSAuthorization:(bool)arg1;
- (void)setCtkdDevice:(bool)arg1;
- (void)setHealthDevice:(bool)arg1;
- (void)setManagedByWallet:(bool)arg1;
- (void)setSupportsBackgroundNI:(bool)arg1;
- (bool)supportsANCS;
- (void)unpair;

@end
