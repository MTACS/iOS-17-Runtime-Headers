
@interface SFAppleIDAccount : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _appleID;
    NSString * _certificateToken;
    NSDate * _certificateTokenCreationDate;
    SFAppleIDContactInfo * _contactInfo;
    NSDate * _creationDate;
    SFAppleIDIdentity * _identity;
    NSData * _privateKeyPersistentReference;
    SFAppleIDValidationRecord * _validationRecord;
}

@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, retain) NSString *certificateToken;
@property (nonatomic, retain) NSDate *certificateTokenCreationDate;
@property (nonatomic, retain) SFAppleIDContactInfo *contactInfo;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, retain) SFAppleIDIdentity *identity;
@property (nonatomic, retain) NSData *privateKeyPersistentReference;
@property (nonatomic, retain) SFAppleIDValidationRecord *validationRecord;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)appleID;
- (id)certificateToken;
- (id)certificateTokenCreationDate;
- (id)contactInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identity;
- (id)initWithAppleID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAccount:(id)arg1;
- (id)privateKeyPersistentReference;
- (void)setAltDSID:(id)arg1;
- (void)setCertificateToken:(id)arg1;
- (void)setCertificateTokenCreationDate:(id)arg1;
- (void)setContactInfo:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setPrivateKeyPersistentReference:(id)arg1;
- (void)setValidationRecord:(id)arg1;
- (id)validationRecord;

@end
