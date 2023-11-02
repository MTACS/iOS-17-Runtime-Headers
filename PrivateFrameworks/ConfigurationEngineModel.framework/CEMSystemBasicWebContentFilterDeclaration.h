
@interface CEMSystemBasicWebContentFilterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadFilterBlackList;
    NSArray * _payloadFilterWhiteList;
    NSNumber * _payloadRestrictWeb;
    NSArray * _payloadSiteWhiteList;
    NSNumber * _payloadUseContentFilter;
    NSNumber * _payloadWhiteListEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadFilterBlackList;
@property (nonatomic, copy) NSArray *payloadFilterWhiteList;
@property (nonatomic, copy) NSNumber *payloadRestrictWeb;
@property (nonatomic, copy) NSArray *payloadSiteWhiteList;
@property (nonatomic, copy) NSNumber *payloadUseContentFilter;
@property (nonatomic, copy) NSNumber *payloadWhiteListEnabled;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withRestrictWeb:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withRestrictWeb:(id)arg2 withUseContentFilter:(id)arg3 withWhiteListEnabled:(id)arg4 withSiteWhiteList:(id)arg5 withFilterWhiteList:(id)arg6 withFilterBlackList:(id)arg7;
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
- (id)payloadFilterBlackList;
- (id)payloadFilterWhiteList;
- (id)payloadRestrictWeb;
- (id)payloadSiteWhiteList;
- (id)payloadUseContentFilter;
- (id)payloadWhiteListEnabled;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadFilterBlackList:(id)arg1;
- (void)setPayloadFilterWhiteList:(id)arg1;
- (void)setPayloadRestrictWeb:(id)arg1;
- (void)setPayloadSiteWhiteList:(id)arg1;
- (void)setPayloadUseContentFilter:(id)arg1;
- (void)setPayloadWhiteListEnabled:(id)arg1;
- (id)synthesizeProfileOutUUIDs:(id)arg1 withOldUUIDs:(id)arg2 assetProviders:(id)arg3;

@end
