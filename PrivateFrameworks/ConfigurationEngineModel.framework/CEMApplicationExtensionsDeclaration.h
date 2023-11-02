
@interface CEMApplicationExtensionsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadAllowedExtensions;
    NSArray * _payloadDeniedExtensionPoints;
    NSArray * _payloadDeniedExtensions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadAllowedExtensions;
@property (nonatomic, copy) NSArray *payloadDeniedExtensionPoints;
@property (nonatomic, copy) NSArray *payloadDeniedExtensions;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowedExtensions:(id)arg2 withDeniedExtensions:(id)arg3 withDeniedExtensionPoints:(id)arg4;
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
- (id)payloadAllowedExtensions;
- (id)payloadDeniedExtensionPoints;
- (id)payloadDeniedExtensions;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowedExtensions:(id)arg1;
- (void)setPayloadDeniedExtensionPoints:(id)arg1;
- (void)setPayloadDeniedExtensions:(id)arg1;

@end
