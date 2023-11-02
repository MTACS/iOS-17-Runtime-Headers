
@interface MPMediaDownloadManager : NSObject <ATDownloadProgressObserver, MPStoreDownloadManagerObserver, NSXPCListenerDelegate> {
    NSXPCConnection * __downloadProgressConnection;
    NSXPCConnection * __keepLocalTaskConnection;
    NSMutableOrderedSet * _cachedATDownloads;
    NSMutableDictionary * _cachedATPausedDownloads;
    NSMutableOrderedSet * _cachedATUnEnqueuedDownloads;
    NSMutableDictionary * _cachedProgressMap;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSHashTable * _downloadObservers;
    bool  _hasRequiredAirTrafficEntitlement;
    NSObject<OS_dispatch_queue> * _queue;
    MPStoreDownloadManager * _storeDownloadManager;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (nonatomic, readonly) long long activeDownloadsCount;
@property (nonatomic, readonly) NSArray *allMediaDownloadLibraryIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_downloadProgressConnection;
- (bool)_hasRequiredAirTrafficEntitlement;
- (id)_init;
- (bool)_isValidMediaAsset:(id)arg1;
- (id)_keepLocalTaskConnection;
- (void)_notifyObserversOfAssetDownloadProgress:(id)arg1;
- (void)_notifyObserversOfDownloadCompleteForAssets:(id)arg1 withError:(id)arg2;
- (void)_notifyObserversOfDownloadPauseReasonChangedForAssets:(id)arg1;
- (void)_prefectchAllATDownloads;
- (id)_statusChangeObservers;
- (id)_updateCacheAndGetItemToReportForATAssetDownloadPauseReasonChange:(id)arg1;
- (id)_updateCacheAndGetMediaDownloadToReportForStoreDownloadProgress:(id)arg1;
- (id)_updateCacheAndItemToReportForATAssetDownloadProgressChange:(id)arg1;
- (id)activeDownloadForMediaItemPersistentID:(long long)arg1;
- (id)activeDownloadForStoreID:(long long)arg1;
- (long long)activeDownloadsCount;
- (void)addObserver:(id)arg1;
- (id)allMediaDownloadLibraryIdentifiers;
- (void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2;
- (void)atcDidEnqueueAsset:(id)arg1;
- (void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2;
- (void)atcDidUpdateDownloadStateForAssets:(id)arg1;
- (void)atcWillEnqueueDownloads:(id)arg1 cancelDownloads:(id)arg2;
- (void)cancelDownloads:(id)arg1;
- (void)dealloc;
- (id)downloadForIdentifierSet:(id)arg1 downloadState:(long long*)arg2;
- (void)downloadLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2;
- (void)enqueueAssetForDownload:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)hasActiveDownloads;
- (id)init;
- (void)prioritizeDownload:(long long)arg1;
- (void)registerObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)sendKeepLocalStatusChanged:(long long)arg1 forLibraryIdentifier:(long long)arg2 entityType:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)unregisterObserver:(id)arg1;

@end
