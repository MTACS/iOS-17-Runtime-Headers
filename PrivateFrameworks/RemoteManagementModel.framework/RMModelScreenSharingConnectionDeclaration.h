
@interface RMModelScreenSharingConnectionDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadAuthenticationCredentialsAssetReference;
    NSString * _payloadConnectionUUID;
    RMModelScreenSharingConnectionDeclaration_DisplayConfiguration * _payloadDisplayConfiguration;
    NSString * _payloadDisplayName;
    NSString * _payloadHostName;
    NSNumber * _payloadPort;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAuthenticationCredentialsAssetReference;
@property (nonatomic, copy) NSString *payloadConnectionUUID;
@property (nonatomic, copy) RMModelScreenSharingConnectionDeclaration_DisplayConfiguration *payloadDisplayConfiguration;
@property (nonatomic, copy) NSString *payloadDisplayName;
@property (nonatomic, copy) NSString *payloadHostName;
@property (nonatomic, copy) NSNumber *payloadPort;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 connectionUUID:(id)arg2 displayName:(id)arg3 hostName:(id)arg4 displayConfiguration:(id)arg5;
+ (id)buildWithIdentifier:(id)arg1 connectionUUID:(id)arg2 displayName:(id)arg3 hostName:(id)arg4 port:(id)arg5 displayConfiguration:(id)arg6 authenticationCredentialsAssetReference:(id)arg7;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadAuthenticationCredentialsAssetReference;
- (id)payloadConnectionUUID;
- (id)payloadDisplayConfiguration;
- (id)payloadDisplayName;
- (id)payloadHostName;
- (id)payloadPort;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadAuthenticationCredentialsAssetReference:(id)arg1;
- (void)setPayloadConnectionUUID:(id)arg1;
- (void)setPayloadDisplayConfiguration:(id)arg1;
- (void)setPayloadDisplayName:(id)arg1;
- (void)setPayloadHostName:(id)arg1;
- (void)setPayloadPort:(id)arg1;

@end
