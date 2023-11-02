
@interface PLManagedAssetRecoveryManager : NSObject {
    unsigned long long  _fixedCount;
    PLLazyObject * _imageClient;
    PLLibraryServicesManager * _lsm;
    NSMutableArray * _recoveryErrors;
    unsigned long long  _resourceDownloadBytesLimit;
    long long  _state;
    unsigned long long  _totalCount;
    unsigned long long  _totalDownloadedResourceBytes;
    PLLazyObject * _videoClient;
    PLVolumeInfo * _volumeInfo;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) long long state;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)_assetsWithJPGFilenameAndRawPrimaryImageResourcePredicate;
+ (id)_imagesWithZeroWidthHeightPredicate;
+ (id)_irisesWithZeroVideoCpDuration;
+ (id)_predicateForAdjustedAssetsFailedDeferredRendering;
+ (id)_predicateForAdjustedAssetsWithMissingResources;

- (void).cxx_destruct;
- (void)_downloadResources:(id)arg1 forAsset:(id)arg2 usingCloudPhotoLibraryManager:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_fixDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_fixIrisWithZeroVideoComplementDuration:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)_fixIrisWithZeroVideoComplementDuration:(id)arg1 usingExistingVideoComplementAtPath:(id)arg2 error:(id*)arg3;
- (void)_fixMissingFullSizeAdjustedResources:(id)arg1 cloudPhotoLibraryManager:(id)arg2 recoveryState:(unsigned long long)arg3 usingSyncableLibrary:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)_fixOriginalAssetDimensionsForAsset:(id)arg1 cloudPhotoLibraryManager:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)_fixRawUTIForAsset:(id)arg1 error:(id*)arg2;
- (void)_generateMissingFullSizeAdjustedResourcesForAsset:(id)arg1 recipesToGenerate:(id)arg2 cloudPhotoLibraryManager:(id)arg3 recoveryState:(unsigned long long)arg4 usingSyncableLibrary:(id)arg5 completionBlock:(id /* block */)arg6;
- (id)_loadObjectWithObjectID:(id)arg1 managedObjectContext:(id)arg2;
- (id)_newPhotoLibraryWithName:(const char *)arg1 nonSyncable:(bool)arg2;
- (void)_performAssetRecoveryTaskForInconsistentState:(id)arg1 state:(unsigned long long)arg2 cloudPhotoLibraryManager:(id)arg3 usingSyncableLibrary:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)_performTransactionOnLibrary:(id)arg1 withObjectID:(id)arg2 usingBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)_recoverNextAssetWithEnumerator:(id)arg1 cloudPhotoLibraryManager:(id)arg2 transaction:(id)arg3 usingNonSyncableLibrary:(id)arg4 andSyncableLibrary:(id)arg5;
- (void)_recoverNextRecoveryState:(id)arg1 forAsset:(id)arg2 cloudPhotoLibraryManager:(id)arg3 usingSyncableLibrary:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)_recoveryStatesToProcessForAttributes:(id)arg1;
- (void)_setCloudRecoveryState:(unsigned long long)arg1 forAssetsWithFetchRequestPredicate:(id)arg2 resultsFilterPredicate:(id)arg3 usingNonSyncableLibrary:(id)arg4;
- (void)_startRecoveryUsingCloudPhotoLibraryManager:(id)arg1 transaction:(id)arg2;
- (void)identifyAssetsWithInconsistentCloudState;
- (id)initWithLibraryServicesManager:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startRecoveryUsingCloudPhotoLibraryManager:(id)arg1 transaction:(id)arg2 shouldIdentifyInconsistentAssets:(bool)arg3;
- (long long)state;
- (id)workQueue;

@end
