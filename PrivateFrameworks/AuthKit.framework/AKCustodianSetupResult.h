
@interface AKCustodianSetupResult : NSObject <NSCopying, NSSecureCoding> {
    NSData * _encryptedPRKC;
    NSString * _ownerCustodianAltDSID;
}

@property (nonatomic, copy) NSData *encryptedPRKC;
@property (nonatomic, copy) NSString *ownerCustodianAltDSID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPRKC;
- (id)initWithCoder:(id)arg1;
- (id)ownerCustodianAltDSID;
- (void)setEncryptedPRKC:(id)arg1;
- (void)setOwnerCustodianAltDSID:(id)arg1;

@end
