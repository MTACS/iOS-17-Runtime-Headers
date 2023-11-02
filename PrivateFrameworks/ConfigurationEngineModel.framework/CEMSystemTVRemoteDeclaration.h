
@interface CEMSystemTVRemoteDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadAllowedRemotes;
    NSArray * _payloadAllowedTVs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadAllowedRemotes;
@property (nonatomic, copy) NSArray *payloadAllowedTVs;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowedRemotes:(id)arg2 withAllowedTVs:(id)arg3;
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
- (id)payloadAllowedRemotes;
- (id)payloadAllowedTVs;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowedRemotes:(id)arg1;
- (void)setPayloadAllowedTVs:(id)arg1;

@end
