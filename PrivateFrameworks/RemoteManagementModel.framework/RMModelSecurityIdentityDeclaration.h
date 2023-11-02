
@interface RMModelSecurityIdentityDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAllAppsAccess;
    NSString * _payloadCredentialAssetReference;
    NSNumber * _payloadKeyIsExtractable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAllAppsAccess;
@property (nonatomic, copy) NSString *payloadCredentialAssetReference;
@property (nonatomic, copy) NSNumber *payloadKeyIsExtractable;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 credentialAssetReference:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 credentialAssetReference:(id)arg2 allowAllAppsAccess:(id)arg3 keyIsExtractable:(id)arg4;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAllowAllAppsAccess;
- (id)payloadCredentialAssetReference;
- (id)payloadKeyIsExtractable;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadAllowAllAppsAccess:(id)arg1;
- (void)setPayloadCredentialAssetReference:(id)arg1;
- (void)setPayloadKeyIsExtractable:(id)arg1;

@end
