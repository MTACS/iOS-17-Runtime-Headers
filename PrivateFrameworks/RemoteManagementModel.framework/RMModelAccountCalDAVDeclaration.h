
@interface RMModelAccountCalDAVDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadAuthenticationCredentialsAssetReference;
    NSString * _payloadHostName;
    NSString * _payloadPath;
    NSNumber * _payloadPort;
    NSString * _payloadVisibleName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAuthenticationCredentialsAssetReference;
@property (nonatomic, copy) NSString *payloadHostName;
@property (nonatomic, copy) NSString *payloadPath;
@property (nonatomic, copy) NSNumber *payloadPort;
@property (nonatomic, copy) NSString *payloadVisibleName;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 hostName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 visibleName:(id)arg2 hostName:(id)arg3 port:(id)arg4 path:(id)arg5 authenticationCredentialsAssetReference:(id)arg6;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAuthenticationCredentialsAssetReference;
- (id)payloadHostName;
- (id)payloadPath;
- (id)payloadPort;
- (id)payloadVisibleName;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadAuthenticationCredentialsAssetReference:(id)arg1;
- (void)setPayloadHostName:(id)arg1;
- (void)setPayloadPath:(id)arg1;
- (void)setPayloadPort:(id)arg1;
- (void)setPayloadVisibleName:(id)arg1;

@end
