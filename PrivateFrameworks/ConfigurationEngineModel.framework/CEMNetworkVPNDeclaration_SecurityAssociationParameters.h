
@interface CEMNetworkVPNDeclaration_SecurityAssociationParameters : CEMPayloadBase {
    NSNumber * _payloadDiffieHellmanGroup;
    NSString * _payloadEncryptionAlgorithm;
    NSString * _payloadIntegrityAlgorithm;
    NSNumber * _payloadLifeTimeInMinutes;
}

@property (nonatomic, copy) NSNumber *payloadDiffieHellmanGroup;
@property (nonatomic, copy) NSString *payloadEncryptionAlgorithm;
@property (nonatomic, copy) NSString *payloadIntegrityAlgorithm;
@property (nonatomic, copy) NSNumber *payloadLifeTimeInMinutes;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithEncryptionAlgorithm:(id)arg1 withIntegrityAlgorithm:(id)arg2 withDiffieHellmanGroup:(id)arg3 withLifeTimeInMinutes:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDiffieHellmanGroup;
- (id)payloadEncryptionAlgorithm;
- (id)payloadIntegrityAlgorithm;
- (id)payloadLifeTimeInMinutes;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDiffieHellmanGroup:(id)arg1;
- (void)setPayloadEncryptionAlgorithm:(id)arg1;
- (void)setPayloadIntegrityAlgorithm:(id)arg1;
- (void)setPayloadLifeTimeInMinutes:(id)arg1;

@end
