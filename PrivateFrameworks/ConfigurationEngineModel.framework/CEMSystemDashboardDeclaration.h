
@interface CEMSystemDashboardDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadWhiteList;
    NSNumber * _payloadWhiteListEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadWhiteList;
@property (nonatomic, copy) NSNumber *payloadWhiteListEnabled;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withWhiteListEnabled:(id)arg2 withWhiteList:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withWhiteListEnabled:(id)arg2 withWhiteList:(id)arg3;
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
- (id)payloadWhiteList;
- (id)payloadWhiteListEnabled;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadWhiteList:(id)arg1;
- (void)setPayloadWhiteListEnabled:(id)arg1;

@end
