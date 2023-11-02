
@interface CEMSystemSiriDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAssistant;
    NSNumber * _payloadAllowAssistantUserGeneratedContent;
    NSNumber * _payloadAllowDictation;
    NSNumber * _payloadForceAssistantProfanityFilter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAssistant;
@property (nonatomic, copy) NSNumber *payloadAllowAssistantUserGeneratedContent;
@property (nonatomic, copy) NSNumber *payloadAllowDictation;
@property (nonatomic, copy) NSNumber *payloadForceAssistantProfanityFilter;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowAssistant:(id)arg2 withAllowDictation:(id)arg3 withAllowAssistantUserGeneratedContent:(id)arg4 withForceAssistantProfanityFilter:(id)arg5;
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
- (id)payloadAllowAssistant;
- (id)payloadAllowAssistantUserGeneratedContent;
- (id)payloadAllowDictation;
- (id)payloadForceAssistantProfanityFilter;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAssistant:(id)arg1;
- (void)setPayloadAllowAssistantUserGeneratedContent:(id)arg1;
- (void)setPayloadAllowDictation:(id)arg1;
- (void)setPayloadForceAssistantProfanityFilter:(id)arg1;

@end
