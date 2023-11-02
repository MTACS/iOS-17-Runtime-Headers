
@interface CESRAssetManager : NSObject {
    SFEntitledAssetManager * _manager;
}

@property (nonatomic, readonly) SFEntitledAssetManager *manager;

+ (id)assetNameForAssetType:(unsigned long long)arg1;
+ (id)assetSetNameForAssetType:(unsigned long long)arg1;
+ (id)assetSetUsageWithConfig:(id)arg1 regionId:(id)arg2;
+ (id)assetUsageKeyForAssetType:(unsigned long long)arg1;
+ (bool)isSubscribedToAssetWithConfig:(id)arg1 regionId:(id)arg2 subscriberId:(id)arg3;
+ (id)jsonFilenameForAssetType:(unsigned long long)arg1;
+ (id)modelAttributesStringWithAsset:(id)arg1;
+ (id)modelStatusStringWithAsset:(id)arg1;
+ (id)sharedInstance;
+ (id)stringForUAFSubscriptionDownloadStatus:(unsigned long long)arg1;
+ (void)subscribeToAssetWithConfig:(id)arg1 regionId:(id)arg2 subscriberId:(id)arg3 expiration:(id)arg4;
+ (void)subscribeToAssetWithConfig:(id)arg1 regionId:(id)arg2 subscriberId:(id)arg3 expiration:(id)arg4 completionHandler:(id /* block */)arg5;
+ (id)subscriberIdForDictationAssets;
+ (id)subscriptionNamePrefixForAssetType:(unsigned long long)arg1;
+ (id)subscriptionNameWithConfig:(id)arg1 regionId:(id)arg2;
+ (id)supportedLanguagesForAssetType:(unsigned long long)arg1;
+ (void)unsubscribeFromAssetWithConfig:(id)arg1 regionId:(id)arg2 subscriberId:(id)arg3;
+ (id)unsubscribeFromAssetsWithAssetType:(unsigned long long)arg1 exceptLanguages:(id)arg2 subscriberId:(id)arg3;

- (void).cxx_destruct;
- (id)_assetSetsWithAssetType:(unsigned long long)arg1;
- (id)assetSetDict;
- (id)detailedInstallationStatusForLanguagesWithAssetType:(unsigned long long)arg1 subscriberId:(id)arg2;
- (void)downloadStatusWithConfig:(id)arg1 regionId:(id)arg2 subscriberId:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)init;
- (id)initWithAssetSetDict:(id)arg1 cleanupDuration:(unsigned long long)arg2;
- (id)initWithSFEntitledAssetManager:(id)arg1;
- (id)installationStatusForLanguagesWithAssetType:(unsigned long long)arg1;
- (id)installedAssetWithConfig:(id)arg1;
- (id)installedAssetWithConfig:(id)arg1 regionId:(id)arg2;
- (id)installedAssetWithConfig:(id)arg1 regionId:(id)arg2 shouldSubscribe:(bool)arg3 subscriberId:(id)arg4 expiration:(id)arg5;
- (id)installedAudioSamplingConfigWithAssetName:(id)arg1;
- (id)manager;
- (id)modelQualityTypeStatusStringWithConfig:(id)arg1;
- (void)promoteAssetsForAssetType:(unsigned long long)arg1;
- (void)refreshAssetSetWithConfig:(id)arg1 regionId:(id)arg2;
- (void)registerAssetDelegate:(id)arg1 assetType:(unsigned long long)arg2;
- (void)releaseAssetSets;
- (void)releaseAssetSetsWithAssetType:(unsigned long long)arg1;
- (void)setAssetsProvisionalForAssetType:(unsigned long long)arg1;
- (bool)setPurgeabilityForAssetsWithAssetType:(unsigned long long)arg1 languages:(id)arg2 purgeable:(bool)arg3;
- (void)switchToNewAssetsForAssetType:(unsigned long long)arg1;
- (void)wait;

@end
