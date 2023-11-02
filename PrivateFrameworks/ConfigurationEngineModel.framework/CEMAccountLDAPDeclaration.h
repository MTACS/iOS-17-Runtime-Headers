
@interface CEMAccountLDAPDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    CEMAccountLDAPDeclaration_CommunicationServiceRules * _payloadCommunicationServiceRules;
    NSString * _payloadLDAPAccountDescription;
    NSString * _payloadLDAPAccountHostName;
    NSNumber * _payloadLDAPAccountUseSSL;
    NSString * _payloadLDAPCredentials;
    NSArray * _payloadLDAPSearchSettings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMAccountLDAPDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules;
@property (nonatomic, copy) NSString *payloadLDAPAccountDescription;
@property (nonatomic, copy) NSString *payloadLDAPAccountHostName;
@property (nonatomic, copy) NSNumber *payloadLDAPAccountUseSSL;
@property (nonatomic, copy) NSString *payloadLDAPCredentials;
@property (nonatomic, copy) NSArray *payloadLDAPSearchSettings;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withLDAPAccountHostName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withLDAPAccountDescription:(id)arg2 withLDAPAccountHostName:(id)arg3 withLDAPAccountUseSSL:(id)arg4 withLDAPSearchSettings:(id)arg5 withCommunicationServiceRules:(id)arg6 withLDAPCredentials:(id)arg7;
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
- (id)payloadCommunicationServiceRules;
- (id)payloadLDAPAccountDescription;
- (id)payloadLDAPAccountHostName;
- (id)payloadLDAPAccountUseSSL;
- (id)payloadLDAPCredentials;
- (id)payloadLDAPSearchSettings;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCommunicationServiceRules:(id)arg1;
- (void)setPayloadLDAPAccountDescription:(id)arg1;
- (void)setPayloadLDAPAccountHostName:(id)arg1;
- (void)setPayloadLDAPAccountUseSSL:(id)arg1;
- (void)setPayloadLDAPCredentials:(id)arg1;
- (void)setPayloadLDAPSearchSettings:(id)arg1;

@end
