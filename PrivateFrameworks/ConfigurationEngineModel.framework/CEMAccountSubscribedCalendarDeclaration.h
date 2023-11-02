
@interface CEMAccountSubscribedCalendarDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadSubCalAccountCredentials;
    NSString * _payloadSubCalAccountDescription;
    NSString * _payloadSubCalAccountHostName;
    NSNumber * _payloadSubCalAccountUseSSL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadSubCalAccountCredentials;
@property (nonatomic, copy) NSString *payloadSubCalAccountDescription;
@property (nonatomic, copy) NSString *payloadSubCalAccountHostName;
@property (nonatomic, copy) NSNumber *payloadSubCalAccountUseSSL;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withSubCalAccountHostName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withSubCalAccountDescription:(id)arg2 withSubCalAccountHostName:(id)arg3 withSubCalAccountUseSSL:(id)arg4 withSubCalAccountCredentials:(id)arg5;
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
- (id)payloadSubCalAccountCredentials;
- (id)payloadSubCalAccountDescription;
- (id)payloadSubCalAccountHostName;
- (id)payloadSubCalAccountUseSSL;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadSubCalAccountCredentials:(id)arg1;
- (void)setPayloadSubCalAccountDescription:(id)arg1;
- (void)setPayloadSubCalAccountHostName:(id)arg1;
- (void)setPayloadSubCalAccountUseSSL:(id)arg1;

@end
