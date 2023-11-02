
@interface CEMSystemCameraDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowCamera;
    NSNumber * _payloadAllowScreenRecording;
    NSNumber * _payloadAllowScreenShot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowCamera;
@property (nonatomic, copy) NSNumber *payloadAllowScreenRecording;
@property (nonatomic, copy) NSNumber *payloadAllowScreenShot;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowCamera:(id)arg2 withAllowScreenShot:(id)arg3 withAllowScreenRecording:(id)arg4;
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
- (id)payloadAllowCamera;
- (id)payloadAllowScreenRecording;
- (id)payloadAllowScreenShot;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowCamera:(id)arg1;
- (void)setPayloadAllowScreenRecording:(id)arg1;
- (void)setPayloadAllowScreenShot:(id)arg1;

@end
