
@interface CEMPolicyCategoryDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadCategories;
    NSArray * _payloadCategoriesVersion2;
    NSString * _payloadMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadCategories;
@property (nonatomic, copy) NSArray *payloadCategoriesVersion2;
@property (nonatomic, copy) NSString *payloadMode;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withMode:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withMode:(id)arg2 withCategories:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withMode:(id)arg2 withCategories:(id)arg3 withCategoriesVersion2:(id)arg4;
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
- (id)payloadCategories;
- (id)payloadCategoriesVersion2;
- (id)payloadMode;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCategories:(id)arg1;
- (void)setPayloadCategoriesVersion2:(id)arg1;
- (void)setPayloadMode:(id)arg1;

@end
