
@interface ATStoreDownloadService : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSOperationQueue * _downloadOperationQueue;
    NSMutableDictionary * _downloadOperations;
    ICUnfairLock * _lock;
    NSMutableSet * _observers;
    NSOperationQueue * _prepareOperationQueue;
    NSOperationQueue * _processAssetsOperationQueue;
    NSMutableDictionary * _progressForAsset;
}

+ (id)downloadDirectoryPath;
+ (id)sharedService;

- (void).cxx_destruct;
- (void)_finishAsset:(id)arg1 withError:(id)arg2 cancelPendingDownloads:(bool)arg3;
- (id)_newAssetOperationForAsset:(id)arg1 prepareOperationResult:(id)arg2;
- (id)_newPrepareOperationForAsset:(id)arg1;
- (id)_newProcessAssetOperationForasset:(id)arg1 assetsOperationResult:(id)arg2;
- (void)_prepareDownloadDirectory;
- (void)_updateProgressForAsset:(id)arg1 progress:(float)arg2;
- (void)_updateStateForAsset:(id)arg1 oldState:(long long)arg2 newState:(long long)arg3;
- (void)addDownloadObserver:(id)arg1;
- (void)cancelAsset:(id)arg1;
- (void)enqueueAsset:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prioritizeAsset:(id)arg1;
- (void)removeDownloadObserver:(id)arg1;

@end
