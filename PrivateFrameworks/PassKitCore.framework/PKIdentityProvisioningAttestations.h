
@interface PKIdentityProvisioningAttestations : NSObject <NSSecureCoding> {
    NSArray * _authorizationKeyAttestation;
    NSArray * _deviceEncryptionKeyAttestation;
    NSData * _deviceEncryptionKeyAuthorization;
    NSData * _progenitorKeyCASDAttestation;
    NSData * _serverAttestedProvisioningData;
    NSData * _transactionKeyCASDAttestation;
    NSData * _transactionKeyCASDAuthorization;
    NSData * _transactionKeyCASDSignature;
    NSArray * _transactionKeys;
}

@property (nonatomic, readonly) NSArray *authorizationKeyAttestation;
@property (nonatomic, readonly) NSArray *deviceEncryptionKeyAttestation;
@property (nonatomic, readonly) NSData *deviceEncryptionKeyAuthorization;
@property (nonatomic, readonly) NSData *progenitorKeyCASDAttestation;
@property (nonatomic, readonly) NSData *serverAttestedProvisioningData;
@property (nonatomic, readonly) NSData *transactionKeyCASDAttestation;
@property (nonatomic, readonly) NSData *transactionKeyCASDAuthorization;
@property (nonatomic, readonly) NSData *transactionKeyCASDSignature;
@property (nonatomic, readonly) NSArray *transactionKeys;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorizationKeyAttestation;
- (id)deviceEncryptionKeyAttestation;
- (id)deviceEncryptionKeyAuthorization;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAuthorizationKeyAttestation:(id)arg1 deviceEncryptionKeyAttestation:(id)arg2 deviceEncryptionKeyAuthorization:(id)arg3 progenitorKeyCASDAttestation:(id)arg4 transactionKeys:(id)arg5 serverAttestedProvisioningData:(id)arg6;
- (id)initWithAuthorizationKeyAttestation:(id)arg1 deviceEncryptionKeyAttestation:(id)arg2 deviceEncryptionKeyAuthorization:(id)arg3 transactionKeyCASDAttestation:(id)arg4 transactionKeyCASDSignature:(id)arg5 transactionKeyCASDAuthorization:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)progenitorKeyCASDAttestation;
- (id)serverAttestedProvisioningData;
- (id)transactionKeyCASDAttestation;
- (id)transactionKeyCASDAuthorization;
- (id)transactionKeyCASDSignature;
- (id)transactionKeys;

@end
