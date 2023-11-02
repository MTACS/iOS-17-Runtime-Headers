
@interface CEMSystemAirPlaySecurityDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadAccessType;
    NSString * _payloadPassword;
    NSString * _payloadSecurityType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAccessType;
@property (nonatomic, copy) NSString *payloadPassword;
@property (nonatomic, copy) NSString *payloadSecurityType;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withSecurityType:(id)arg2 withAccessType:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withSecurityType:(id)arg2 withAccessType:(id)arg3 withPassword:(id)arg4;
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
- (id)payloadAccessType;
- (id)payloadPassword;
- (id)payloadSecurityType;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAccessType:(id)arg1;
- (void)setPayloadPassword:(id)arg1;
- (void)setPayloadSecurityType:(id)arg1;

@end
