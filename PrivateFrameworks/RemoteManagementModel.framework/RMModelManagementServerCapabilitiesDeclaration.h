
@interface RMModelManagementServerCapabilitiesDeclaration : RMModelManagementBase <RMModelRegisteredTypeProtocol> {
    RMModelAnyPayload * _payloadSupportedFeatures;
    NSString * _payloadVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) RMModelAnyPayload *payloadSupportedFeatures;
@property (nonatomic, copy) NSString *payloadVersion;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 version:(id)arg2 supportedFeatures:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 version:(id)arg2 supportedFeatures:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadSupportedFeatures;
- (id)payloadVersion;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadSupportedFeatures:(id)arg1;
- (void)setPayloadVersion:(id)arg1;

@end
