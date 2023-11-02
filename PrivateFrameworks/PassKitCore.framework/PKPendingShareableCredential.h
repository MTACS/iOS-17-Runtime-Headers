
@interface PKPendingShareableCredential : PKPendingProvisioning <NSSecureCoding> {
    NSString * _credentialAuthorityIdentifier;
    NSString * _passSerialNumber;
    NSString * _passTypeIdentifier;
    NSString * _provisioningCredentialHash;
    unsigned long long  _securityOptions;
    NSString * _sharingInstanceIdentifier;
    long long  _source;
}

@property (nonatomic, readonly) PKPaymentShareableCredential *credential;
@property (nonatomic, retain) NSString *credentialAuthorityIdentifier;
@property (nonatomic, retain) NSString *passSerialNumber;
@property (nonatomic, retain) NSString *passTypeIdentifier;
@property (nonatomic, retain) NSString *provisioningCredentialHash;
@property (nonatomic) unsigned long long securityOptions;
@property (nonatomic, retain) NSString *sharingInstanceIdentifier;
@property (nonatomic) long long source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)credential;
- (id)credentialAuthorityIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initForDatabase;
- (id)initWithCoder:(id)arg1;
- (id)initWithShareableCredential:(id)arg1;
- (id)initWithSharedCredential:(id)arg1;
- (id)passSerialNumber;
- (id)passTypeIdentifier;
- (id)provisioningCredentialHash;
- (unsigned long long)securityOptions;
- (void)setCredentialAuthorityIdentifier:(id)arg1;
- (void)setPassSerialNumber:(id)arg1;
- (void)setPassTypeIdentifier:(id)arg1;
- (void)setProvisioningCredentialHash:(id)arg1;
- (void)setSecurityOptions:(unsigned long long)arg1;
- (void)setSharingInstanceIdentifier:(id)arg1;
- (void)setSource:(long long)arg1;
- (id)sharingInstanceIdentifier;
- (long long)source;
- (id)type;

@end
