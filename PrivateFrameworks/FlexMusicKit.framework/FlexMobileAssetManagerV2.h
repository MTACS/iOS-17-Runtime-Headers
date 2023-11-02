
@interface FlexMobileAssetManagerV2 : FlexCloudManager <NSCacheDelegate> {
    bool  _XMLPresent;
    int  _assetInstalledNotificationToken;
    int  _catalogUpdatedNotificationToken;
    NSString * _clientID;
    NSMapTable * _dowloadOptionsMapping;
    NSObject<OS_dispatch_queue> * _downloadRequestQueue;
    NSObject * _downloadThrottleLock;
    bool  _includeArtworkInQueries;
    NSObject * _mobileAssetCacheLock;
    NSString * _mobileAssetTypeIdentifier;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableOrderedSet * _pendingDownloadSet;
    NSMutableOrderedSet * _pendingPurgeSet;
    NSMutableSet * _processingDownloadSet;
    NSMutableSet * _processingPurgeSet;
    NSObject<OS_dispatch_queue> * _purgeQueue;
    NSObject<OS_dispatch_queue> * _triggerDownloadAndPurgeQueue;
}

@property (nonatomic) bool XMLPresent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *downloadRequestQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeArtworkInQueries;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *purgeQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *triggerDownloadAndPurgeQueue;

+ (id)_assetURLForMobileAsset:(id)arg1;
+ (id)assetWithNewestContentVersionInAssets:(id)arg1 preferInstalled:(bool)arg2;
+ (id)compatibilityFilterPredicate;

- (void).cxx_destruct;
- (bool)XMLPresent;
- (id)_assetIDForMobileAsset:(id)arg1;
- (void)_dispatchNextAsyncAssetDownloadAndPurge;
- (bool)_isDownloadingAsset:(id)arg1;
- (bool)_isPurgingAsset:(id)arg1;
- (void)_loadBundledArtworkForSongID:(id)arg1;
- (void)_loadBundledSongForSongID:(id)arg1;
- (id)_metadataMappingForUUIDSet:(id)arg1;
- (id)_mobileAssetCancelDownloadResultStringValue:(long long)arg1;
- (id)_mobileAssetDownloadOptionsForClientOptions:(id)arg1;
- (id)_mobileAssetDownloadResultStringValue:(long long)arg1;
- (id)_mobileAssetPurgeResultStringValue:(long long)arg1;
- (id)_mobileAssetQueryResultStringValue:(long long)arg1;
- (id)_mobileAssetsForAssetType:(id)arg1 andUIDs:(id)arg2;
- (id)_newestContentSetFromAssets:(id)arg1 metadataMapping:(id)arg2;
- (id)_processResults:(id)arg1 metadataMapping:(id)arg2;
- (void)_purgeAsset:(id)arg1;
- (void)_registerAndHandleSystemMobileAssetNotifications;
- (long long)_responseForDownloadResult:(long long)arg1;
- (void)_runAsyncAssetDownloadForMobileAsset:(id)arg1;
- (void)_runNextAsyncAssetDownloadAndPurge;
- (void)_updateExistingSong:(id)arg1 usingAsset:(id)arg2 metadataAsset:(id)arg3;
- (void)_updateExistingSong:(id)arg1 usingAsset:(id)arg2 metadataAsset:(id)arg3 forceUpdate:(bool)arg4;
- (void)_updateMetadataOnExistingSong:(id)arg1 usingMetadataAsset:(id)arg2;
- (id)_weightedKeywordsFromMetadataAsset:(id)arg1;
- (unsigned long long)assetStatus:(id)arg1;
- (void)cancelDownloadOfAllAssets;
- (void)cancelDownloadOfAsset:(id)arg1;
- (id)downloadRequestQueue;
- (void)fetchAllSongsWithCompletion:(id /* block */)arg1;
- (id)fetchSongWithUID:(id)arg1;
- (id)fetchSongsWithOptions:(id)arg1;
- (id)filterByClientIDForAssets:(id)arg1 forMetadataMapping:(id)arg2;
- (bool)includeArtworkInQueries;
- (id)initWithLibrary:(id)arg1 options:(id)arg2;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (id)purgeQueue;
- (void)requestDownloadOfAsset:(id)arg1 withOptions:(id)arg2;
- (void)requestPurgeOfAsset:(id)arg1;
- (void)setDownloadRequestQueue:(id)arg1;
- (void)setIncludeArtworkInQueries:(bool)arg1;
- (void)setPurgeQueue:(id)arg1;
- (void)setTriggerDownloadAndPurgeQueue:(id)arg1;
- (void)setXMLPresent:(bool)arg1;
- (id)triggerDownloadAndPurgeQueue;

@end
