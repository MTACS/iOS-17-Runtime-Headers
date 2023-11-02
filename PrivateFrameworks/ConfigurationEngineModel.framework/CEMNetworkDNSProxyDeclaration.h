
@interface CEMNetworkDNSProxyDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadAppBundleIdentifier;
    NSString * _payloadProviderBundleIdentifier;
    CEMAnyPayload * _payloadProviderConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAppBundleIdentifier;
@property (nonatomic, copy) NSString *payloadProviderBundleIdentifier;
@property (nonatomic, copy) CEMAnyPayload *payloadProviderConfiguration;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withAppBundleIdentifier:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withAppBundleIdentifier:(id)arg2 withProviderBundleIdentifier:(id)arg3 withProviderConfiguration:(id)arg4;
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
- (id)payloadAppBundleIdentifier;
- (id)payloadProviderBundleIdentifier;
- (id)payloadProviderConfiguration;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAppBundleIdentifier:(id)arg1;
- (void)setPayloadProviderBundleIdentifier:(id)arg1;
- (void)setPayloadProviderConfiguration:(id)arg1;

@end
