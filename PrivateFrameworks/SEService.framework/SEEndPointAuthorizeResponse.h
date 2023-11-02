
@interface SEEndPointAuthorizeResponse : NSObject <NSSecureCoding, SESEndPointAuthorizeAttestation> {
    NSData * _encryptedData;
    NSData * _encryptionPublicKeyData;
    NSData * _endPointAttestationData;
}

@property (nonatomic, retain) NSData *encryptedData;
@property (nonatomic, retain) NSData *encryptionPublicKeyData;
@property (nonatomic, retain) NSData *endPointAttestationData;

+ (id)responseWithEndPointAttestationData:(id)arg1 encryptionPublicKeyData:(id)arg2 encryptedData:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedData;
- (id)encryptionPublicKeyData;
- (id)endPointAttestationData;
- (id)initWithCoder:(id)arg1;
- (void)setEncryptedData:(id)arg1;
- (void)setEncryptionPublicKeyData:(id)arg1;
- (void)setEndPointAttestationData:(id)arg1;

@end
