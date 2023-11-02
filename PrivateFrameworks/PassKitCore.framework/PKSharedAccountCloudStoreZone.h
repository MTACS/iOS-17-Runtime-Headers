
@interface PKSharedAccountCloudStoreZone : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _access;
    NSString * _accountIdentifier;
    unsigned long long  _accountType;
    unsigned long long  _mode;
    NSString * _originatorAltDSID;
    NSSet * _sharedUsersAltDSIDs;
    NSString * _zoneName;
}

@property (nonatomic) unsigned long long access;
@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) unsigned long long accountType;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, copy) NSString *originatorAltDSID;
@property (nonatomic, copy) NSSet *sharedUsersAltDSIDs;
@property (nonatomic, copy) NSString *zoneName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)access;
- (id)accountIdentifier;
- (unsigned long long)accountType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSharedAccountCloudStoreZone:(id)arg1;
- (unsigned long long)mode;
- (id)originatorAltDSID;
- (void)setAccess:(unsigned long long)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAccountType:(unsigned long long)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setOriginatorAltDSID:(id)arg1;
- (void)setSharedUsersAltDSIDs:(id)arg1;
- (void)setZoneName:(id)arg1;
- (id)sharedUsersAltDSIDs;
- (id)zoneName;
- (unsigned long long)zoneType;

@end
