
@interface PKShareableCredential : NSObject <NSCopying, NSSecureCoding> {
    NSString * _cardConfigurationIdentifier;
    NSString * _credentialIdentifier;
    NSString * _credentialIdentifierHash;
    PKEncryptedPushProvisioningTarget * _encryptedPushProvisioningTarget;
    NSString * _nonce;
    NSString * _ownerDisplayName;
    NSString * _sharingInstanceIdentifier;
    unsigned long long  _status;
}

@property (nonatomic, retain) NSString *cardConfigurationIdentifier;
@property (nonatomic, retain) NSString *credentialIdentifier;
@property (nonatomic, retain) NSString *credentialIdentifierHash;
@property (nonatomic, copy) PKEncryptedPushProvisioningTarget *encryptedPushProvisioningTarget;
@property (nonatomic, retain) NSString *nonce;
@property (nonatomic, retain) NSString *ownerDisplayName;
@property (nonatomic, retain) NSString *sharingInstanceIdentifier;
@property (nonatomic) unsigned long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardConfigurationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentifier;
- (id)credentialIdentifierHash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedPushProvisioningTarget;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtoCredential:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToShareableCredential:(id)arg1;
- (id)nonce;
- (id)ownerDisplayName;
- (id)protoCredential;
- (void)setCardConfigurationIdentifier:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setCredentialIdentifierHash:(id)arg1;
- (void)setEncryptedPushProvisioningTarget:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setOwnerDisplayName:(id)arg1;
- (void)setSharingInstanceIdentifier:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (id)sharingInstanceIdentifier;
- (unsigned long long)status;

@end
