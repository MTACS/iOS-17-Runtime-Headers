
@interface CEMAccountGoogleDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadAccountDescription;
    NSString * _payloadAccountName;
    CEMAccountGoogleDeclaration_CommunicationServiceRules * _payloadCommunicationServiceRules;
    NSString * _payloadEmailAddress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAccountDescription;
@property (nonatomic, copy) NSString *payloadAccountName;
@property (nonatomic, copy) CEMAccountGoogleDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules;
@property (nonatomic, copy) NSString *payloadEmailAddress;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEmailAddress:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withAccountDescription:(id)arg2 withAccountName:(id)arg3 withEmailAddress:(id)arg4 withCommunicationServiceRules:(id)arg5;
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
- (id)payloadAccountDescription;
- (id)payloadAccountName;
- (id)payloadCommunicationServiceRules;
- (id)payloadEmailAddress;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAccountDescription:(id)arg1;
- (void)setPayloadAccountName:(id)arg1;
- (void)setPayloadCommunicationServiceRules:(id)arg1;
- (void)setPayloadEmailAddress:(id)arg1;

@end
