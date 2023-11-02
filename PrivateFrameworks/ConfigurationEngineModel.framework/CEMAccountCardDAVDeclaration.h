
@interface CEMAccountCardDAVDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadCardDAVAccountDescription;
    NSString * _payloadCardDAVCredentials;
    NSString * _payloadCardDAVHostName;
    NSNumber * _payloadCardDAVPort;
    NSString * _payloadCardDAVPrincipalURL;
    NSNumber * _payloadCardDAVUseSSL;
    CEMAccountCardDAVDeclaration_CommunicationServiceRules * _payloadCommunicationServiceRules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadCardDAVAccountDescription;
@property (nonatomic, copy) NSString *payloadCardDAVCredentials;
@property (nonatomic, copy) NSString *payloadCardDAVHostName;
@property (nonatomic, copy) NSNumber *payloadCardDAVPort;
@property (nonatomic, copy) NSString *payloadCardDAVPrincipalURL;
@property (nonatomic, copy) NSNumber *payloadCardDAVUseSSL;
@property (nonatomic, copy) CEMAccountCardDAVDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withCardDAVHostName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withCardDAVAccountDescription:(id)arg2 withCardDAVHostName:(id)arg3 withCardDAVPrincipalURL:(id)arg4 withCardDAVUseSSL:(id)arg5 withCardDAVPort:(id)arg6 withCommunicationServiceRules:(id)arg7 withCardDAVCredentials:(id)arg8;
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
- (id)payloadCardDAVAccountDescription;
- (id)payloadCardDAVCredentials;
- (id)payloadCardDAVHostName;
- (id)payloadCardDAVPort;
- (id)payloadCardDAVPrincipalURL;
- (id)payloadCardDAVUseSSL;
- (id)payloadCommunicationServiceRules;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCardDAVAccountDescription:(id)arg1;
- (void)setPayloadCardDAVCredentials:(id)arg1;
- (void)setPayloadCardDAVHostName:(id)arg1;
- (void)setPayloadCardDAVPort:(id)arg1;
- (void)setPayloadCardDAVPrincipalURL:(id)arg1;
- (void)setPayloadCardDAVUseSSL:(id)arg1;
- (void)setPayloadCommunicationServiceRules:(id)arg1;

@end
