
@interface CEMSystemSearchDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowDefinitionLookup;
    NSNumber * _payloadAllowSpotlightInternetResults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowDefinitionLookup;
@property (nonatomic, copy) NSNumber *payloadAllowSpotlightInternetResults;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowSpotlightInternetResults:(id)arg2 withAllowDefinitionLookup:(id)arg3;
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
- (id)payloadAllowDefinitionLookup;
- (id)payloadAllowSpotlightInternetResults;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowDefinitionLookup:(id)arg1;
- (void)setPayloadAllowSpotlightInternetResults:(id)arg1;

@end
