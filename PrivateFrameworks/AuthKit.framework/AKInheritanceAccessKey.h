
@interface AKInheritanceAccessKey : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _beneficiaryID;
    NSData * _claimTokenData;
    NSString * _claimTokenString;
    NSData * _wrappedKeyData;
    NSString * _wrappedKeyString;
    NSData * _wrappingKeyData;
    NSString * _wrappingKeyString;
}

@property (nonatomic, readonly) NSUUID *beneficiaryID;
@property (nonatomic, retain) NSData *claimTokenData;
@property (nonatomic, retain) NSString *claimTokenString;
@property (nonatomic, retain) NSData *wrappedKeyData;
@property (nonatomic, retain) NSString *wrappedKeyString;
@property (nonatomic, retain) NSData *wrappingKeyData;
@property (nonatomic, retain) NSString *wrappingKeyString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beneficiaryID;
- (id)claimTokenData;
- (id)claimTokenString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBeneficiairyIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setClaimTokenData:(id)arg1;
- (void)setClaimTokenString:(id)arg1;
- (void)setWrappedKeyData:(id)arg1;
- (void)setWrappedKeyString:(id)arg1;
- (void)setWrappingKeyData:(id)arg1;
- (void)setWrappingKeyString:(id)arg1;
- (id)wrappedKeyData;
- (id)wrappedKeyString;
- (id)wrappingKeyData;
- (id)wrappingKeyString;

@end
