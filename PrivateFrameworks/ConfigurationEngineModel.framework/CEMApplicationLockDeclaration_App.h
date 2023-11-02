
@interface CEMApplicationLockDeclaration_App : CEMPayloadBase {
    NSString * _payloadIdentifier;
    CEMApplicationLockDeclaration_AppOptions * _payloadOptions;
    CEMApplicationLockDeclaration_AppUserEnabledOptions * _payloadUserEnabledOptions;
}

@property (nonatomic, copy) NSString *payloadIdentifier;
@property (nonatomic, copy) CEMApplicationLockDeclaration_AppOptions *payloadOptions;
@property (nonatomic, copy) CEMApplicationLockDeclaration_AppUserEnabledOptions *payloadUserEnabledOptions;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withOptions:(id)arg2 withUserEnabledOptions:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadIdentifier;
- (id)payloadOptions;
- (id)payloadUserEnabledOptions;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadIdentifier:(id)arg1;
- (void)setPayloadOptions:(id)arg1;
- (void)setPayloadUserEnabledOptions:(id)arg1;

@end
