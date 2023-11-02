
@interface CEMPasscodeScreensaverUserDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadIdleTime;
    NSString * _payloadModulePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadIdleTime;
@property (nonatomic, copy) NSString *payloadModulePath;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withModulePath:(id)arg2 withIdleTime:(id)arg3;
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
- (id)payloadIdleTime;
- (id)payloadModulePath;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadIdleTime:(id)arg1;
- (void)setPayloadModulePath:(id)arg1;

@end
