
@interface STUIUser : NSObject <NSCopying> {
    NSString * _altDSID;
    NSArray * _devices;
    NSNumber * _dsid;
    bool  _hasAllowances;
    bool  _hasDeviceWithoutUsageReported;
    bool  _managed;
    NSString * _name;
    NSString * _passcode;
    NSString * _recoveryAltDSID;
    bool  _remoteUser;
    bool  _screenTimeEnabled;
    unsigned long long  _source;
    unsigned long long  _type;
    NSManagedObjectID * _userObjectID;
    bool  _webUsageEnabled;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, readonly) bool canRecoveryAuthenticate;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, copy) NSNumber *dsid;
@property (nonatomic, readonly, copy) NSString *givenName;
@property (nonatomic) bool hasAllowances;
@property bool hasDeviceWithoutUsageReported;
@property (nonatomic, readonly) bool hasPasscode;
@property (nonatomic, readonly) bool isChild;
@property (nonatomic, readonly) bool isParent;
@property (getter=isManaged, nonatomic) bool managed;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool needsRecoveryAppleID;
@property (nonatomic, copy) NSString *passcode;
@property (nonatomic, copy) NSString *recoveryAltDSID;
@property (getter=isRemoteUser, nonatomic) bool remoteUser;
@property (getter=isScreenTimeEnabled, nonatomic) bool screenTimeEnabled;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSManagedObjectID *userObjectID;
@property (getter=isWebUsageEnabled, nonatomic) bool webUsageEnabled;

+ (id)keyPathsForValuesAffectingGivenName;
+ (id)keyPathsForValuesAffectingHasPasscode;
+ (unsigned long long)userTypeFromUser:(id)arg1;

- (void).cxx_destruct;
- (id)altDSID;
- (bool)canRecoveryAuthenticate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)devices;
- (id)dsid;
- (id)givenName;
- (bool)hasAllowances;
- (bool)hasDeviceWithoutUsageReported;
- (bool)hasPasscode;
- (id)initWithUser:(id)arg1;
- (bool)isChild;
- (bool)isManaged;
- (bool)isParent;
- (bool)isRemoteUser;
- (bool)isScreenTimeEnabled;
- (bool)isWebUsageEnabled;
- (id)name;
- (bool)needsRecoveryAppleID;
- (id)passcode;
- (id)recoveryAltDSID;
- (void)setAltDSID:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setHasAllowances:(bool)arg1;
- (void)setHasDeviceWithoutUsageReported:(bool)arg1;
- (void)setManaged:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPasscode:(id)arg1;
- (void)setRecoveryAltDSID:(id)arg1;
- (void)setRemoteUser:(bool)arg1;
- (void)setScreenTimeEnabled:(bool)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUserObjectID:(id)arg1;
- (void)setWebUsageEnabled:(bool)arg1;
- (unsigned long long)source;
- (unsigned long long)type;
- (id)userObjectID;

@end
