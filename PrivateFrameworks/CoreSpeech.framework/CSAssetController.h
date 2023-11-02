
@interface CSAssetController : NSObject <CSEventMonitorDelegate> {
    NSObject<OS_dispatch_queue> * _assetsMigrationQueue;
    NSDictionary * _csAssetsDictionary;
    NSMutableDictionary * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *assetsMigrationQueue;
@property (nonatomic, retain) NSDictionary *csAssetsDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (void)addKeyValuePairForQuery:(id*)arg1 assetType:(unsigned long long)arg2;
+ (id)filteredAssetsForAssets:(id)arg1 assetType:(unsigned long long)arg2 language:(id)arg3;
+ (id)filteredAssetsForFetchRemoteMetaDataForAssets:(id)arg1 assetType:(unsigned long long)arg2;
+ (id)getAdBlockerAssetTypeString;
+ (unsigned long long)getAdBlockerCurrentCompatibilityVersion;
+ (id)getAssetTypeStringForType:(unsigned long long)arg1;
+ (unsigned long long)getEndpointAssetCurrentCompatibilityVersion;
+ (id)getEndpointAssetTypeString;
+ (id)getLanguageDetectorAssetTypeString;
+ (unsigned long long)getLanguageDetectorCurrentCompatibilityVersion;
+ (id)getSpeakerRecognitionAssetTypeString;
+ (unsigned long long)getSpeakerRecognitionCurrentCompatibilityVersion;
+ (unsigned long long)getVoiceTriggerAssetCurrentCompatibilityVersion;
+ (id)getVoiceTriggerAssetTypeString;
+ (id)sharedController;

- (void).cxx_destruct;
- (void)CSEventMonitorDidReceiveEvent:(id)arg1;
- (id)_assetQueryForAssetType:(unsigned long long)arg1;
- (void)_cleanUpMobileAssetV1Directory;
- (id)_defaultDownloadOptions;
- (void)_downloadAsset:(id)arg1 withComplete:(id /* block */)arg2;
- (void)_downloadAssetCatalogForAssetType:(unsigned long long)arg1 complete:(id /* block */)arg2;
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(id /* block */)arg3;
- (void)_fetchRemoteAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 query:(id)arg3 completion:(id /* block */)arg4;
- (id)_findLatestInstalledAsset:(id)arg1;
- (void)_installedAssetOfType:(unsigned long long)arg1 query:(id)arg2 withLanguage:(id)arg3 completion:(id /* block */)arg4;
- (id)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;
- (void)_installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(id /* block */)arg3;
- (bool)_isRetryRecommendedWithResult:(long long)arg1;
- (void)_runAssetQuery:(id)arg1 completion:(id /* block */)arg2;
- (void)_setAssetQueryParameters:(id)arg1;
- (void)_startDownloadingAsset:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_updateFromRemoteToLocalAssets:(id)arg1 forAssetType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)addObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (id)allInstalledAssetsOfType:(unsigned long long)arg1 language:(id)arg2;
- (id)assetOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 compatibilityVersion:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)assetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(id /* block */)arg3;
- (id)assetsMigrationQueue;
- (id)csAssetsDictionary;
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1;
- (void)fetchRemoteMetaOfType:(unsigned long long)arg1 allowRetry:(bool)arg2;
- (id)init;
- (id)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2;
- (void)installedAssetOfType:(unsigned long long)arg1 language:(id)arg2 completion:(id /* block */)arg3;
- (id)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2;
- (void)installedAssetOfType:(unsigned long long)arg1 withLanguage:(id)arg2 completion:(id /* block */)arg3;
- (id)observers;
- (id)queue;
- (void)removeObserver:(id)arg1 forAssetType:(unsigned long long)arg2;
- (void)setAssetsMigrationQueue:(id)arg1;
- (void)setCsAssetsDictionary:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;

@end
