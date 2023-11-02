
@interface CEMDeviceDesktopDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadLocked;
    NSString * _payloadOverridePicturePath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadLocked;
@property (nonatomic, copy) NSString *payloadOverridePicturePath;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withLocked:(id)arg2 withOverridePicturePath:(id)arg3;
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
- (id)payloadLocked;
- (id)payloadOverridePicturePath;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadLocked:(id)arg1;
- (void)setPayloadOverridePicturePath:(id)arg1;

@end
