
@interface CEMSystemTimeServerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadTimeServer;
    NSString * _payloadTimeZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadTimeServer;
@property (nonatomic, copy) NSString *payloadTimeZone;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withTimeServer:(id)arg2 withTimeZone:(id)arg3;
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
- (id)payloadTimeServer;
- (id)payloadTimeZone;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadTimeServer:(id)arg1;
- (void)setPayloadTimeZone:(id)arg1;

@end
