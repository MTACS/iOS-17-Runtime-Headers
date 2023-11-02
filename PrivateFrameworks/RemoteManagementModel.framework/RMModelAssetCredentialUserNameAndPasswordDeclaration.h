
@interface RMModelAssetCredentialUserNameAndPasswordDeclaration : RMModelAssetBase <RMModelRegisteredTypeProtocol> {
    RMModelAssetBaseAuthentication * _payloadAuthentication;
    RMModelAssetBaseReference * _payloadReference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) RMModelAssetBaseAuthentication *payloadAuthentication;
@property (nonatomic, copy) RMModelAssetBaseReference *payloadReference;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 reference:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 reference:(id)arg2 authentication:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAuthentication;
- (id)payloadReference;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadAuthentication:(id)arg1;
- (void)setPayloadReference:(id)arg1;

@end
