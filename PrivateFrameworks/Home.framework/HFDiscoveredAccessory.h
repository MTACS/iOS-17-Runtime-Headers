
@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject> {
    HMAccessory * _accessory;
    HMAccessoryCategory * _category;
    unsigned long long  _certificationStatus;
    NSDate * _discoveryDate;
    NSError * _error;
    NSString * _manufacturer;
    NSString * _name;
    SFDevice * _sharingDevice;
    unsigned long long  _status;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, retain) HMAccessoryCategory *category;
@property (nonatomic) unsigned long long certificationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *discoveryDate;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool requiresSetupCode;
@property (nonatomic, readonly) bool requiresSoftwareUpdate;
@property (nonatomic, readonly) SFDevice *sharingDevice;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

+ (id)discoveredAccessoryFromSetupDescription:(id)arg1;

- (void).cxx_destruct;
- (id)_descriptionForStatus:(unsigned long long)arg1;
- (id)accessory;
- (id)category;
- (unsigned long long)certificationStatus;
- (id)description;
- (id)discoveryDate;
- (id)error;
- (id)identify;
- (id)init;
- (id)initWithAccessory:(id)arg1;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3;
- (id)initWithSharingDevice:(id)arg1;
- (id)manufacturer;
- (id)name;
- (bool)requiresSetupCode;
- (bool)requiresSoftwareUpdate;
- (void)setAccessory:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCertificationStatus:(unsigned long long)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setName:(id)arg1;
- (id)sharingDevice;
- (unsigned long long)status;
- (id)uniqueIdentifier;
- (void)updateStatus:(unsigned long long)arg1 error:(id)arg2;

@end
