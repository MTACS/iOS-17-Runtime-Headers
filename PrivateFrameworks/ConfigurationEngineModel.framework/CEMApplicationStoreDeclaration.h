
@interface CEMApplicationStoreDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAppClips;
    NSNumber * _payloadAllowAppInstallation;
    NSNumber * _payloadAllowAppRemoval;
    NSNumber * _payloadAllowAutomaticAppDownloads;
    NSNumber * _payloadAllowInAppPurchases;
    NSNumber * _payloadAllowSystemAppRemoval;
    NSNumber * _payloadAllowUIAppInstallation;
    NSNumber * _payloadForceITunesStorePasswordEntry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAppClips;
@property (nonatomic, copy) NSNumber *payloadAllowAppInstallation;
@property (nonatomic, copy) NSNumber *payloadAllowAppRemoval;
@property (nonatomic, copy) NSNumber *payloadAllowAutomaticAppDownloads;
@property (nonatomic, copy) NSNumber *payloadAllowInAppPurchases;
@property (nonatomic, copy) NSNumber *payloadAllowSystemAppRemoval;
@property (nonatomic, copy) NSNumber *payloadAllowUIAppInstallation;
@property (nonatomic, copy) NSNumber *payloadForceITunesStorePasswordEntry;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowAppInstallation:(id)arg2 withAllowAppClips:(id)arg3 withAllowUIAppInstallation:(id)arg4 withAllowAutomaticAppDownloads:(id)arg5 withAllowSystemAppRemoval:(id)arg6 withAllowAppRemoval:(id)arg7 withAllowInAppPurchases:(id)arg8 withForceITunesStorePasswordEntry:(id)arg9;
+ (id)buildWithIdentifier:(id)arg1 withAllowAppInstallation:(id)arg2 withAllowUIAppInstallation:(id)arg3 withAllowAutomaticAppDownloads:(id)arg4 withAllowSystemAppRemoval:(id)arg5 withAllowAppRemoval:(id)arg6 withAllowInAppPurchases:(id)arg7 withForceITunesStorePasswordEntry:(id)arg8;
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
- (id)payloadAllowAppClips;
- (id)payloadAllowAppInstallation;
- (id)payloadAllowAppRemoval;
- (id)payloadAllowAutomaticAppDownloads;
- (id)payloadAllowInAppPurchases;
- (id)payloadAllowSystemAppRemoval;
- (id)payloadAllowUIAppInstallation;
- (id)payloadForceITunesStorePasswordEntry;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAppClips:(id)arg1;
- (void)setPayloadAllowAppInstallation:(id)arg1;
- (void)setPayloadAllowAppRemoval:(id)arg1;
- (void)setPayloadAllowAutomaticAppDownloads:(id)arg1;
- (void)setPayloadAllowInAppPurchases:(id)arg1;
- (void)setPayloadAllowSystemAppRemoval:(id)arg1;
- (void)setPayloadAllowUIAppInstallation:(id)arg1;
- (void)setPayloadForceITunesStorePasswordEntry:(id)arg1;

@end
