
@interface HMDUnassociatedAppleMediaAccessory : HMDUnassociatedMediaAccessory <HMFLogging> {
    bool  _currentAccessory;
    HMDDevice * _device;
    NSString * _idsIdentifierString;
    HMDHomeKitVersion * _minimumRequiredPairingSoftwareVersion;
    NSString * _model;
    long long  _productColor;
    NSData * _rawAccessoryCapabilities;
    NSData * _rawResidentCapabilities;
    HMDCapabilityFlags * _requiredPairingCapabilities;
    NSString * _serialNumber;
    HMFSoftwareVersion * _softwareVersion;
    unsigned long long  _supportedStereoPairVersions;
    unsigned long long  _variant;
}

@property (getter=isCurrentAccessory, nonatomic) bool currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) HMDDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *idsIdentifierString;
@property (readonly) HMDHomeKitVersion *minimumRequiredPairingSoftwareVersion;
@property (copy) NSString *model;
@property (readonly) long long productColor;
@property (readonly) NSData *rawAccessoryCapabilities;
@property (readonly) NSData *rawResidentCapabilities;
@property (readonly) HMDCapabilityFlags *requiredPairingCapabilities;
@property (copy) NSString *serialNumber;
@property (copy) HMFSoftwareVersion *softwareVersion;
@property (readonly) Class superclass;
@property unsigned long long supportedStereoPairVersions;
@property unsigned long long variant;

+ (id)logCategory;
+ (id)namespace;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addTransactionForHome:(id)arg1 configurationAppIdentifier:(id)arg2;
- (bool)canPairGivenCapabilities:(unsigned long long)arg1;
- (id)descriptionWithPointer:(bool)arg1 additionalDescription:(id)arg2;
- (id)device;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)idsIdentifierString;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 productColor:(long long)arg4 idsIdentifierString:(id)arg5 rawAccessoryCapabilities:(id)arg6 rawResidentCapabilities:(id)arg7 messageDispatcher:(id)arg8;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 requiredPairingCapabilities:(unsigned long long)arg4 minimumPairingSoftware:(id)arg5 productColor:(long long)arg6 idsIdentifierString:(id)arg7 rawAccessoryCapabilities:(id)arg8 rawResidentCapabilities:(id)arg9 messageDispatcher:(id)arg10;
- (bool)isCurrentAccessory;
- (id)logIdentifier;
- (id)minimumRequiredPairingSoftwareVersion;
- (id)model;
- (id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;
- (long long)productColor;
- (id)rawAccessoryCapabilities;
- (id)rawResidentCapabilities;
- (id)requiredPairingCapabilities;
- (id)serialNumber;
- (void)setCurrentAccessory:(bool)arg1;
- (void)setDevice:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (void)setSupportedStereoPairVersions:(unsigned long long)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (id)softwareVersion;
- (unsigned long long)supportedStereoPairVersions;
- (unsigned long long)variant;

@end
