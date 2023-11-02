
@interface ACHRemoteTemplateSource : NSObject <ACHTemplateAssetSource, ACHTemplateSource> {
    NSDictionary * _assetVersionsByUniqueName;
    int  _availabilityChangeToken;
    ACHBackCompatRemoteAchievementAvailabilityKeyWriter * _backCompatAvailabilityKeyWriter;
    NSString * _buildVersionOverride;
    ACHMobileAssetProvider * _mobileAssetProvider;
    NSObject<OS_dispatch_queue> * _queue;
    ACHRemoteTemplateAvailabilityKeyProvider * _remoteTemplateAvailabilityKeyProvider;
    NSDictionary * _resourceAssetURLsByUniqueName;
    NSDictionary * _stickerAssetURLsByUniqueName;
    NSObject<ACHTemplateAssetSourceDelegate> * assetSourceDelegate;
    NSObject<ACHTemplateSourceDelegate> * delegate;
}

@property (nonatomic) NSObject<ACHTemplateAssetSourceDelegate> *assetSourceDelegate;
@property (nonatomic, retain) NSDictionary *assetVersionsByUniqueName;
@property (nonatomic) int availabilityChangeToken;
@property (nonatomic, retain) ACHBackCompatRemoteAchievementAvailabilityKeyWriter *backCompatAvailabilityKeyWriter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) ACHMobileAssetProvider *mobileAssetProvider;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) ACHRemoteTemplateAvailabilityKeyProvider *remoteTemplateAvailabilityKeyProvider;
@property (nonatomic, retain) NSDictionary *resourceAssetURLsByUniqueName;
@property (nonatomic, readonly) long long runCadence;
@property (nonatomic, retain) NSDictionary *stickerAssetURLsByUniqueName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAssetVersionsByUniqueNameToDictionary:(id)arg1 fromAsset:(id)arg2;
- (void)_addURLsByUniqueNameToDictionary:(id)arg1 fromAsset:(id)arg2;
- (void)_removeURLsByUniqueNameFromDictionary:(id)arg1 fromAsset:(id)arg2;
- (id)_resourceAssetURLForTemplate:(id)arg1;
- (id)assetSourceDelegate;
- (id)assetVersionsByUniqueName;
- (int)availabilityChangeToken;
- (id)backCompatAvailabilityKeyWriter;
- (id)buildVersion;
- (void)dealloc;
- (id)delegate;
- (id)identifier;
- (id)initWithMobileAssetProvider:(id)arg1 backCompatWriter:(id)arg2 remoteTemplateAvailabilityKeyProvider:(id)arg3;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (id)mobileAssetProvider;
- (long long)mobileAssetVersionForTemplate:(id)arg1;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)queue;
- (id)remoteTemplateAvailabilityKeyProvider;
- (id)resourceAssetURLsByUniqueName;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (long long)runCadence;
- (void)setAssetSourceDelegate:(id)arg1;
- (void)setAssetVersionsByUniqueName:(id)arg1;
- (void)setAvailabilityChangeToken:(int)arg1;
- (void)setBackCompatAvailabilityKeyWriter:(id)arg1;
- (void)setBuildVersionOverride:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMobileAssetProvider:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteTemplateAvailabilityKeyProvider:(id)arg1;
- (void)setResourceAssetURLsByUniqueName:(id)arg1;
- (void)setStickerAssetURLsByUniqueName:(id)arg1;
- (bool)sourceShouldRunForDate:(id)arg1;
- (id)stickerAssetURLsByUniqueName;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (void)templatesForDate:(id)arg1 completion:(id /* block */)arg2;

@end
