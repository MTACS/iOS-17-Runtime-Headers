
@interface CEMDeviceNameDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowDeviceNameModification;
    NSString * _payloadName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowDeviceNameModification;
@property (nonatomic, copy) NSString *payloadName;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withName:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withName:(id)arg2 withAllowDeviceNameModification:(id)arg3;
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
- (id)payloadAllowDeviceNameModification;
- (id)payloadName;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowDeviceNameModification:(id)arg1;
- (void)setPayloadName:(id)arg1;

@end
