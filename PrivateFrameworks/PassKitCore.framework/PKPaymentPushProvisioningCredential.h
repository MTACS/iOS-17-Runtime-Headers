
@interface PKPaymentPushProvisioningCredential : NSObject <NSSecureCoding> {
    NSString * _accountIdentifier;
    NSString * _credentialAuthorityIdentifier;
    unsigned long long  _feature;
    NSString * _provisioningCredentialIdentifierHash;
    unsigned long long  _securityOptions;
    NSString * _sharingInstanceIdentifier;
    long long  _source;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, retain) NSString *credentialAuthorityIdentifier;
@property (nonatomic, readonly) unsigned long long feature;
@property (nonatomic, readonly) NSString *provisioningCredentialIdentifierHash;
@property (nonatomic) unsigned long long securityOptions;
@property (nonatomic, retain) NSString *sharingInstanceIdentifier;
@property (nonatomic) long long source;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)credentialAuthorityIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)feature;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (id)provisioningCredentialIdentifierHash;
- (unsigned long long)securityOptions;
- (void)setCredentialAuthorityIdentifier:(id)arg1;
- (void)setSecurityOptions:(unsigned long long)arg1;
- (void)setSharingInstanceIdentifier:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)sharingInstanceIdentifier;
- (long long)source;
- (unsigned long long)type;

@end
