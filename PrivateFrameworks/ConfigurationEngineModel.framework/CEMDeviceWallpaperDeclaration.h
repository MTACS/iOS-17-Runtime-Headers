
@interface CEMDeviceWallpaperDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowWallpaperModification;
    NSString * _payloadHomeScreenAsset;
    NSString * _payloadLockScreenAsset;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowWallpaperModification;
@property (nonatomic, copy) NSString *payloadHomeScreenAsset;
@property (nonatomic, copy) NSString *payloadLockScreenAsset;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withLockScreenAsset:(id)arg2 withHomeScreenAsset:(id)arg3 withAllowWallpaperModification:(id)arg4;
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
- (id)payloadAllowWallpaperModification;
- (id)payloadHomeScreenAsset;
- (id)payloadLockScreenAsset;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowWallpaperModification:(id)arg1;
- (void)setPayloadHomeScreenAsset:(id)arg1;
- (void)setPayloadLockScreenAsset:(id)arg1;

@end
