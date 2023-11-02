
@interface CEMSystemAllowedMediaDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    CEMSystemAllowedMediaDeclaration_MediaItems * _payloadLogoutEject;
    CEMSystemAllowedMediaDeclaration_MediaItems * _payloadMountControls;
    CEMSystemAllowedMediaDeclaration_MediaItems * _payloadUnmountControls;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMSystemAllowedMediaDeclaration_MediaItems *payloadLogoutEject;
@property (nonatomic, copy) CEMSystemAllowedMediaDeclaration_MediaItems *payloadMountControls;
@property (nonatomic, copy) CEMSystemAllowedMediaDeclaration_MediaItems *payloadUnmountControls;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withLogoutEject:(id)arg2 withMountControls:(id)arg3 withUnmountControls:(id)arg4;
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
- (id)payloadLogoutEject;
- (id)payloadMountControls;
- (id)payloadUnmountControls;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadLogoutEject:(id)arg1;
- (void)setPayloadMountControls:(id)arg1;
- (void)setPayloadUnmountControls:(id)arg1;

@end
