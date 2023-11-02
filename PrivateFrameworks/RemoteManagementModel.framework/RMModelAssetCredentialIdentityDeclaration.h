
@interface RMModelAssetCredentialIdentityDeclaration : RMModelAssetBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadAccessible;
    RMModelAssetBaseAuthentication * _payloadAuthentication;
    RMModelAssetBaseReference * _payloadReference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAccessible;
@property (nonatomic, copy) RMModelAssetBaseAuthentication *payloadAuthentication;
@property (nonatomic, copy) RMModelAssetBaseReference *payloadReference;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 reference:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 reference:(id)arg2 authentication:(id)arg3 accessible:(id)arg4;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAccessible;
- (id)payloadAuthentication;
- (id)payloadReference;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadAccessible:(id)arg1;
- (void)setPayloadAuthentication:(id)arg1;
- (void)setPayloadReference:(id)arg1;

@end
