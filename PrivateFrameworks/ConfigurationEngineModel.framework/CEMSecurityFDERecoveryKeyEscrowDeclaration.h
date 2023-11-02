
@interface CEMSecurityFDERecoveryKeyEscrowDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadDeviceKey;
    NSString * _payloadEncryptCertPayloadUUID;
    NSString * _payloadLocation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadDeviceKey;
@property (nonatomic, copy) NSString *payloadEncryptCertPayloadUUID;
@property (nonatomic, copy) NSString *payloadLocation;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withLocation:(id)arg2 withEncryptCertPayloadUUID:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withLocation:(id)arg2 withEncryptCertPayloadUUID:(id)arg3 withDeviceKey:(id)arg4;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadDeviceKey;
- (id)payloadEncryptCertPayloadUUID;
- (id)payloadLocation;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDeviceKey:(id)arg1;
- (void)setPayloadEncryptCertPayloadUUID:(id)arg1;
- (void)setPayloadLocation:(id)arg1;

@end
