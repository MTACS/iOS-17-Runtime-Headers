
@interface CEMManagementTestDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadEcho;
    NSString * _payloadReturnStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadEcho;
@property (nonatomic, copy) NSString *payloadReturnStatus;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEcho:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withEcho:(id)arg2 withReturnStatus:(id)arg3;
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
- (id)payloadEcho;
- (id)payloadReturnStatus;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadEcho:(id)arg1;
- (void)setPayloadReturnStatus:(id)arg1;

@end
