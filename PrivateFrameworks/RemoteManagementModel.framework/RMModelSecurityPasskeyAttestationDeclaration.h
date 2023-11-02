
@interface RMModelSecurityPasskeyAttestationDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadAttestationIdentityAssetReference;
    NSNumber * _payloadAttestationIdentityKeyIsExtractable;
    NSArray * _payloadRelyingParties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAttestationIdentityAssetReference;
@property (nonatomic, copy) NSNumber *payloadAttestationIdentityKeyIsExtractable;
@property (nonatomic, copy) NSArray *payloadRelyingParties;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 attestationIdentityAssetReference:(id)arg2 relyingParties:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 attestationIdentityAssetReference:(id)arg2 attestationIdentityKeyIsExtractable:(id)arg3 relyingParties:(id)arg4;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAttestationIdentityAssetReference;
- (id)payloadAttestationIdentityKeyIsExtractable;
- (id)payloadRelyingParties;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadAttestationIdentityAssetReference:(id)arg1;
- (void)setPayloadAttestationIdentityKeyIsExtractable:(id)arg1;
- (void)setPayloadRelyingParties:(id)arg1;

@end
