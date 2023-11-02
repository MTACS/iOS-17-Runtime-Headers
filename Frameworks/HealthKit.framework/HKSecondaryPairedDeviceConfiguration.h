
@interface HKSecondaryPairedDeviceConfiguration : NSObject <NSSecureCoding> {
    NSDateComponents * _dateOfBirth;
    NSNumber * _dsid;
    NSString * _firstName;
    NSNumber * _guardianDSID;
    NSString * _guardianFirstName;
    NSString * _guardianHashedDSID;
    NSString * _guardianLastName;
    NSString * _hashedDSID;
    NSString * _lastName;
    NSUUID * _nanoRegistryDeviceUUID;
    unsigned long long  _setupType;
}

@property (nonatomic, copy) NSDateComponents *dateOfBirth;
@property (nonatomic, copy) NSNumber *dsid;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSNumber *guardianDSID;
@property (nonatomic, copy) NSString *guardianFirstName;
@property (nonatomic, copy) NSString *guardianHashedDSID;
@property (nonatomic, copy) NSString *guardianLastName;
@property (nonatomic, copy) NSString *hashedDSID;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, copy) NSUUID *nanoRegistryDeviceUUID;
@property (nonatomic) unsigned long long setupType;

+ (id)secondaryPairedDeviceConfigurationWithNanoRegistryDeviceUUID:(id)arg1 setupType:(unsigned long long)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithNanoRegistryDeviceUUID:(id)arg1 setupType:(unsigned long long)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (id)dateOfBirth;
- (id)description;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)guardianDSID;
- (id)guardianFirstName;
- (id)guardianHashedDSID;
- (id)guardianLastName;
- (id)hashedDSID;
- (id)initWithCoder:(id)arg1;
- (id)lastName;
- (id)nanoRegistryDeviceUUID;
- (void)setDateOfBirth:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setGuardianDSID:(id)arg1;
- (void)setGuardianFirstName:(id)arg1;
- (void)setGuardianHashedDSID:(id)arg1;
- (void)setGuardianLastName:(id)arg1;
- (void)setHashedDSID:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setNanoRegistryDeviceUUID:(id)arg1;
- (void)setSetupType:(unsigned long long)arg1;
- (unsigned long long)setupType;

@end
