
@interface RMModelAccountMailDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol> {
    RMModelAccountMailDeclaration_IncomingServer * _payloadIncomingServer;
    RMModelAccountMailDeclaration_OutgoingServer * _payloadOutgoingServer;
    RMModelAccountMailDeclaration_SMIME * _payloadSMIME;
    NSString * _payloadUserIdentityAssetReference;
    NSString * _payloadVisibleName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) RMModelAccountMailDeclaration_IncomingServer *payloadIncomingServer;
@property (nonatomic, copy) RMModelAccountMailDeclaration_OutgoingServer *payloadOutgoingServer;
@property (nonatomic, copy) RMModelAccountMailDeclaration_SMIME *payloadSMIME;
@property (nonatomic, copy) NSString *payloadUserIdentityAssetReference;
@property (nonatomic, copy) NSString *payloadVisibleName;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)assetTypes;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 incomingServer:(id)arg2 outgoingServer:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 visibleName:(id)arg2 userIdentityAssetReference:(id)arg3 incomingServer:(id)arg4 outgoingServer:(id)arg5 SMIME:(id)arg6;
+ (id)combineConfigurations:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadIncomingServer;
- (id)payloadOutgoingServer;
- (id)payloadSMIME;
- (id)payloadUserIdentityAssetReference;
- (id)payloadVisibleName;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadIncomingServer:(id)arg1;
- (void)setPayloadOutgoingServer:(id)arg1;
- (void)setPayloadSMIME:(id)arg1;
- (void)setPayloadUserIdentityAssetReference:(id)arg1;
- (void)setPayloadVisibleName:(id)arg1;

@end
