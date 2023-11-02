
@interface CEMNetworkDomainsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadEmailDomains;
    NSArray * _payloadSafariPasswordAutoFillDomains;
    NSArray * _payloadWebDomains;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadEmailDomains;
@property (nonatomic, copy) NSArray *payloadSafariPasswordAutoFillDomains;
@property (nonatomic, copy) NSArray *payloadWebDomains;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withEmailDomains:(id)arg2 withWebDomains:(id)arg3 withSafariPasswordAutoFillDomains:(id)arg4;
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
- (id)payloadEmailDomains;
- (id)payloadSafariPasswordAutoFillDomains;
- (id)payloadWebDomains;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadEmailDomains:(id)arg1;
- (void)setPayloadSafariPasswordAutoFillDomains:(id)arg1;
- (void)setPayloadWebDomains:(id)arg1;

@end
