
@interface CKAssetRepairScheduler : NSObject {
    NSMutableDictionary * _assetCache;
    NSMutableSet * _assetsBeingRequested;
    NSMutableSet * _assetsBeingUploaded;
    long long  _cacheCountLimit;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableSet * _confirmedMissingAssets;
    CKContainer * _container;
    double  _defaultSuspensionTime;
    <CKAssetRepairSchedulerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableDictionary * _remainingAssetsToRequestCallbacks;
    long long  _repairBatchCountLimit;
    CKUploadRequestConfiguration * _repairContainerOverrides;
    long long  _repairRetryCount;
    NSOperationQueue * _requestOperationQueue;
    double  _requestTimeout;
    NSMutableDictionary * _retryCountForAssets;
    NSURL * _temporaryAssetDirectory;
    NSOperationQueue * _uploadOperationQueue;
    NSObject<OS_dispatch_source> * _uploadPendingRequestTimer;
    NSObject<OS_dispatch_source> * _uploadSuspensionTimer;
}

@property (nonatomic) long long cacheCountLimit;
@property (nonatomic) double defaultSuspensionTime;
@property <CKAssetRepairSchedulerDelegate> *delegate;
@property (nonatomic) long long repairBatchCountLimit;
@property (nonatomic) long long repairRetryCount;
@property (nonatomic) double requestTimeout;
@property (readonly, copy) NSURL *temporaryAssetDirectory;

+ (long long)canCopyFromFileURL:(id)arg1 toDirectoryURL:(id)arg2;
+ (long long)estimatedSizeForAssetOrPackage:(id)arg1;
+ (id)nameForEvent:(long long)arg1;
+ (unsigned long long)remainingCapacityAtURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)addUploadRequestsWithMetadata:(id)arg1 requestBlocks:(id)arg2;
- (id)allRemainingRequestableAssets;
- (id)allRemainingUploadableAssets;
- (long long)cacheCountLimit;
- (void)cancelAllOperations;
- (void)clearAssetCache;
- (id)clonedAsset:(id)arg1 withError:(id*)arg2;
- (void)dealloc;
- (double)defaultSuspensionTime;
- (id)delegate;
- (bool)hasPendingWork;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;
- (void)removeUploadRequestWithRecordID:(id)arg1;
- (long long)repairBatchCountLimit;
- (long long)repairRetryCount;
- (double)requestTimeout;
- (void)setCacheCountLimit:(long long)arg1;
- (void)setDefaultSuspensionTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRepairBatchCountLimit:(long long)arg1;
- (void)setRepairRetryCount:(long long)arg1;
- (void)setRequestTimeout:(double)arg1;
- (id)temporaryAssetDirectory;
- (void)tickle;

@end
