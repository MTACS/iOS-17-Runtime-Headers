
@interface SPBeacon : NSObject <NSCopying, NSSecureCoding> {
    bool  _accepted;
    SPDiscoveredAccessoryProductInformation * _accessoryProductInfo;
    long long  _batteryLevel;
    long long  _beaconSeparationState;
    bool  _canBeLeashedByHost;
    long long  _connectableDeviceCount;
    bool  _connected;
    NSDate * _connectedStateExpiryDate;
    bool  _connectionAllowed;
    NSString * _correlationIdentifier;
    NSUUID * _groupIdentifier;
    NSUUID * _identifier;
    long long  _internalShareType;
    bool  _isAppleAudioAccessory;
    bool  _isZeus;
    NSDate * _keyAlignmentLastIndexObservationDate;
    unsigned long long  _keyAlignmentLastObservedIndex;
    NSDate * _keySyncLastIndexObservationDate;
    unsigned long long  _keySyncLastObservedIndex;
    unsigned long long  _keySyncWildIndexFallback;
    NSSet * _locationProviders;
    SPLostModeInfo * _lostModeInfo;
    NSString * _model;
    NSString * _name;
    SPHandle * _owner;
    NSUUID * _ownerBeaconIdentifier;
    NSDate * _pairingDate;
    long long  _partIdentifier;
    long long  _productId;
    NSUUID * _productUUID;
    SPBeaconRole * _role;
    NSSet * _safeLocations;
    NSString * _separationState;
    NSString * _serialNumber;
    NSSet * _shares;
    NSString * _stableIdentifier;
    NSString * _systemVersion;
    NSDictionary * _taskInformation;
    NSString * _type;
    long long  _vendorId;
}

@property (nonatomic) bool accepted;
@property (nonatomic, copy) SPDiscoveredAccessoryProductInformation *accessoryProductInfo;
@property (nonatomic) long long batteryLevel;
@property (nonatomic) long long beaconSeparationState;
@property (nonatomic) bool canBeLeashedByHost;
@property (nonatomic) long long connectableDeviceCount;
@property (nonatomic) bool connected;
@property (nonatomic, copy) NSDate *connectedStateExpiryDate;
@property (nonatomic) bool connectionAllowed;
@property (nonatomic, copy) NSString *correlationIdentifier;
@property (nonatomic, copy) NSUUID *groupIdentifier;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) long long internalShareType;
@property (nonatomic) bool isAppleAudioAccessory;
@property (nonatomic) bool isZeus;
@property (nonatomic, copy) NSDate *keyAlignmentLastIndexObservationDate;
@property (nonatomic) unsigned long long keyAlignmentLastObservedIndex;
@property (nonatomic, copy) NSDate *keySyncLastIndexObservationDate;
@property (nonatomic) unsigned long long keySyncLastObservedIndex;
@property (nonatomic) unsigned long long keySyncWildIndexFallback;
@property (nonatomic, copy) NSSet *locationProviders;
@property (nonatomic, copy) SPLostModeInfo *lostModeInfo;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) SPHandle *owner;
@property (nonatomic, copy) NSUUID *ownerBeaconIdentifier;
@property (nonatomic, copy) NSDate *pairingDate;
@property (nonatomic) long long partIdentifier;
@property (nonatomic) long long productId;
@property (nonatomic, copy) NSUUID *productUUID;
@property (nonatomic, copy) SPBeaconRole *role;
@property (nonatomic, copy) NSSet *safeLocations;
@property (nonatomic, copy) NSString *separationState;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSSet *shares;
@property (nonatomic, copy) NSString *stableIdentifier;
@property (nonatomic, copy) NSString *systemVersion;
@property (nonatomic, copy) NSDictionary *taskInformation;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) long long vendorId;

+ (id)SPOwner;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accepted;
- (id)accessoryProductInfo;
- (long long)batteryLevel;
- (long long)beaconSeparationState;
- (bool)canBeLeashedByHost;
- (long long)connectableDeviceCount;
- (bool)connected;
- (id)connectedStateExpiryDate;
- (bool)connectionAllowed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correlationIdentifier;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (long long)internalShareType;
- (bool)isAppleAudioAccessory;
- (bool)isEqual:(id)arg1;
- (bool)isZeus;
- (id)keyAlignmentLastIndexObservationDate;
- (unsigned long long)keyAlignmentLastObservedIndex;
- (id)keySyncLastIndexObservationDate;
- (unsigned long long)keySyncLastObservedIndex;
- (unsigned long long)keySyncWildIndexFallback;
- (id)locationProviders;
- (id)lostModeInfo;
- (id)model;
- (id)name;
- (id)owner;
- (id)ownerBeaconIdentifier;
- (id)pairingDate;
- (long long)partIdentifier;
- (long long)productId;
- (id)productUUID;
- (id)role;
- (id)safeLocations;
- (id)separationState;
- (id)serialNumber;
- (void)setAccepted:(bool)arg1;
- (void)setAccessoryProductInfo:(id)arg1;
- (void)setBatteryLevel:(long long)arg1;
- (void)setBeaconSeparationState:(long long)arg1;
- (void)setCanBeLeashedByHost:(bool)arg1;
- (void)setConnectableDeviceCount:(long long)arg1;
- (void)setConnected:(bool)arg1;
- (void)setConnectedStateExpiryDate:(id)arg1;
- (void)setConnectionAllowed:(bool)arg1;
- (void)setCorrelationIdentifier:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalShareType:(long long)arg1;
- (void)setIsAppleAudioAccessory:(bool)arg1;
- (void)setIsZeus:(bool)arg1;
- (void)setKeyAlignmentLastIndexObservationDate:(id)arg1;
- (void)setKeyAlignmentLastObservedIndex:(unsigned long long)arg1;
- (void)setKeySyncLastIndexObservationDate:(id)arg1;
- (void)setKeySyncLastObservedIndex:(unsigned long long)arg1;
- (void)setKeySyncWildIndexFallback:(unsigned long long)arg1;
- (void)setLocationProviders:(id)arg1;
- (void)setLostModeInfo:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setOwnerBeaconIdentifier:(id)arg1;
- (void)setPairingDate:(id)arg1;
- (void)setPartIdentifier:(long long)arg1;
- (void)setProductId:(long long)arg1;
- (void)setProductUUID:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setSafeLocations:(id)arg1;
- (void)setSeparationState:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setShares:(id)arg1;
- (void)setStableIdentifier:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (void)setTaskInformation:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVendorId:(long long)arg1;
- (id)shares;
- (id)stableIdentifier;
- (id)systemVersion;
- (id)taskInformation;
- (id)type;
- (long long)vendorId;

@end