
@protocol MKFAppleMediaAccessory <MKFMediaAccessory, MKFAppleMediaAccessoryPublicExtensions>

@required

- (NSData *)accessoryCapabilities;
- (NSArray *)actionsAppleMediaAccessoryPower;
- (MKFAppleMediaAccessoryDatabaseID *)databaseID;
- (<MKFDevice> *)device;
- (NSData *)deviceIRKData;
- (NSString *)idsDestination;
- (NSUUID *)idsIdentifier;
- (HMFPairingIdentity *)pairingIdentity;
- (<MKFResident> *)resident;
- (void)setAccessoryCapabilities:(NSData *)arg1;
- (void)setDevice:(id <MKFDevice>)arg1;
- (void)setDeviceIRKData:(NSData *)arg1;
- (void)setIdsDestination:(NSString *)arg1;
- (void)setIdsIdentifier:(NSUUID *)arg1;
- (void)setPairingIdentity:(HMFPairingIdentity *)arg1;
- (void)setResident:(id <MKFResident>)arg1;
- (void)setSoftwareVersion:(HMFSoftwareVersion *)arg1;
- (void)setSupportedStereoPairVersions:(NSNumber *)arg1;
- (void)setVariant:(NSNumber *)arg1;
- (HMFSoftwareVersion *)softwareVersion;
- (NSNumber *)supportedStereoPairVersions;
- (NSNumber *)variant;

@end
