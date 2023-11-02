
@interface CEMSecurityIdentityDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadCredentialIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadCredentialIdentifier;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withCredentialIdentifier:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withCredentialIdentifier:(id)arg2;
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
- (id)payloadCredentialIdentifier;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCredentialIdentifier:(id)arg1;

@end
