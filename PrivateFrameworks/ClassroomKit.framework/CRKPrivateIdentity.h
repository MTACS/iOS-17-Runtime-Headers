
@interface CRKPrivateIdentity : NSObject <NSSecureCoding> {
    NSString * _commonNamePrefix;
    NSDate * _identityExpirationDate;
    NSData * _identityPersistentId;
    NSDate * _stagedIdentityExpirationDate;
    NSData * _stagedIdentityPersistentId;
}

@property (nonatomic, copy) NSString *commonNamePrefix;
@property (nonatomic, retain) NSDate *identityExpirationDate;
@property (nonatomic, retain) NSData *identityPersistentId;
@property (nonatomic, retain) NSDate *stagedIdentityExpirationDate;
@property (nonatomic, retain) NSData *stagedIdentityPersistentId;

+ (id)commonNameWithPrefix:(id)arg1;
+ (id)freshPrivateIdentityWithCommonNamePrefix:(id)arg1;
+ (id)keychainGroup;
+ (id)makeIdentityWithCommonName:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commonNamePrefix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)identityExpirationDate;
- (id)identityPersistentId;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentityPersistentId:(id)arg1 stagedIdentityPersistentId:(id)arg2 commonNamePrefix:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)refreshIdentities;
- (void)setCommonNamePrefix:(id)arg1;
- (void)setIdentityExpirationDate:(id)arg1;
- (void)setIdentityPersistentId:(id)arg1;
- (void)setStagedIdentityExpirationDate:(id)arg1;
- (void)setStagedIdentityPersistentId:(id)arg1;
- (id)stagedIdentityExpirationDate;
- (id)stagedIdentityPersistentId;

@end
