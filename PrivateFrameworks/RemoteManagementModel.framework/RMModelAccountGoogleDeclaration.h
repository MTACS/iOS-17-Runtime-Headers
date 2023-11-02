
@interface RMModelAccountGoogleDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadUserIdentityAssetReference;
    NSString * _payloadVisibleName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadUserIdentityAssetReference;
@property (nonatomic, copy) NSString *payloadVisibleName;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 userIdentityAssetReference:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 visibleName:(id)arg2 userIdentityAssetReference:(id)arg3;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadUserIdentityAssetReference;
- (id)payloadVisibleName;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadUserIdentityAssetReference:(id)arg1;
- (void)setPayloadVisibleName:(id)arg1;

@end
