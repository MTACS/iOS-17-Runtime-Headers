
@interface CEMAccountmacOSServerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadAccountDescription;
    NSArray * _payloadConfiguredAccounts;
    NSString * _payloadCredentials;
    NSString * _payloadHostName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAccountDescription;
@property (nonatomic, copy) NSArray *payloadConfiguredAccounts;
@property (nonatomic, copy) NSString *payloadCredentials;
@property (nonatomic, copy) NSString *payloadHostName;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withHostName:(id)arg2 withConfiguredAccounts:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withHostName:(id)arg2 withAccountDescription:(id)arg3 withConfiguredAccounts:(id)arg4 withCredentials:(id)arg5;
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
- (id)payloadConfiguredAccounts;
- (id)payloadCredentials;
- (id)payloadHostName;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAccountDescription:(id)arg1;
- (void)setPayloadConfiguredAccounts:(id)arg1;
- (void)setPayloadCredentials:(id)arg1;
- (void)setPayloadHostName:(id)arg1;

@end
