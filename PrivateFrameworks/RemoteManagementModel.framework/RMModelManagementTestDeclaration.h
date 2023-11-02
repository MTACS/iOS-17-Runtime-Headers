
@interface RMModelManagementTestDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadEcho;
    NSString * _payloadEchoDataAssetReference;
    NSString * _payloadReturnStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadEcho;
@property (nonatomic, copy) NSString *payloadEchoDataAssetReference;
@property (nonatomic, copy) NSString *payloadReturnStatus;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 echo:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 echo:(id)arg2 echoDataAssetReference:(id)arg3 returnStatus:(id)arg4;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadEcho;
- (id)payloadEchoDataAssetReference;
- (id)payloadReturnStatus;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadEcho:(id)arg1;
- (void)setPayloadEchoDataAssetReference:(id)arg1;
- (void)setPayloadReturnStatus:(id)arg1;

@end
