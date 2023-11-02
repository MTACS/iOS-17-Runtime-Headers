
@interface DNDSContactRecord : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSString * _contactIdentifier;
    NSSet * _emailAddresses;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _middleName;
    NSString * _nickName;
    NSString * _organizationName;
    NSSet * _phoneNumbers;
}

@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *emailAddresses;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *middleName;
@property (nonatomic, readonly, copy) NSString *nickName;
@property (nonatomic, readonly, copy) NSString *organizationName;
@property (nonatomic, readonly, copy) NSSet *phoneNumbers;
@property (readonly) Class superclass;

+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithContactIdentifier:(id)arg1 firstName:(id)arg2 middleName:(id)arg3 lastName:(id)arg4 nickName:(id)arg5 organizationName:(id)arg6 phoneNumbers:(id)arg7 emailAddresses:(id)arg8;
- (id)_initWithRecord:(id)arg1;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (id)emailAddresses;
- (id)firstName;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)lastName;
- (id)middleName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)nickName;
- (id)organizationName;
- (id)phoneNumbers;

@end
