
@interface CEMApplicationLockDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    CEMApplicationLockDeclaration_App * _payloadApp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMApplicationLockDeclaration_App *payloadApp;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withApp:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withApp:(id)arg2;
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
- (id)payloadApp;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadApp:(id)arg1;

@end
