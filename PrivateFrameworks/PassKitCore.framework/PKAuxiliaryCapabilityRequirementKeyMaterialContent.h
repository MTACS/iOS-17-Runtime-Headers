
@interface PKAuxiliaryCapabilityRequirementKeyMaterialContent : NSObject {
    NSArray * _attestation;
    NSData * _authorization;
    NSArray * _certificateChain;
    NSData * _publicKey;
    NSArray * _secondaryAttestation;
    NSData * _signature;
}

@property (nonatomic, retain) NSArray *attestation;
@property (nonatomic, retain) NSData *authorization;
@property (nonatomic, retain) NSArray *certificateChain;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic, retain) NSArray *secondaryAttestation;
@property (nonatomic, retain) NSData *signature;

- (void).cxx_destruct;
- (id)attestation;
- (id)authorization;
- (id)certificateChain;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAuxiliaryCapabilityRequirementKey:(id)arg1;
- (id)publicKey;
- (id)secondaryAttestation;
- (void)setAttestation:(id)arg1;
- (void)setAuthorization:(id)arg1;
- (void)setCertificateChain:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setSecondaryAttestation:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
