
@interface PEEditActionBatch : NSObject {
    NSDictionary * _actionMap;
    long long  _actionType;
    NSArray * _assets;
    bool  _async;
    <PEEditActionBatchDelegate> * _delegate;
    bool  _forceRunAsUnadjustedAsset;
    NSMutableDictionary * _loadingIdMap;
    NSObject<OS_dispatch_queue> * _loadingQueue;
    <PELoadingStatusDelegate> * _loadingStatusManager;
    PEPhotoKitMediaDestination * _mediaDestination;
    NSMutableSet * _mediaRequestIds;
    NSProgress * _progress;
    NSMutableDictionary * _progressMap;
    PEResourceManager * _resourceManager;
    long long  _state;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic) bool async;
@property (nonatomic) <PEEditActionBatchDelegate> *delegate;
@property (nonatomic) bool forceRunAsUnadjustedAsset;
@property (nonatomic) <PELoadingStatusDelegate> *loadingStatusManager;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (void)_cancelLoading;
- (void)_commitComposition:(id)arg1 toResource:(id)arg2 changeType:(long long)arg3 completion:(id /* block */)arg4;
- (id)_presetForAsset:(id)arg1;
- (id)_processAssets:(id)arg1;
- (void)_processDidCompleteWithID:(id)arg1 error:(id)arg2;
- (void)_processDidUpdateWithID:(id)arg1 progress:(double)arg2;
- (void)_processResult:(id)arg1 targetPreset:(id)arg2 completion:(id /* block */)arg3;
- (id)_processWillBeginWithAsset:(id)arg1 progress:(double)arg2;
- (void)_requestResourcesForAsset:(id)arg1 progressHandler:(id /* block */)arg2 resultHandler:(id /* block */)arg3;
- (void)_setupWithActionMap:(id)arg1 assets:(id)arg2 progress:(id)arg3;
- (void)_updateProgress:(double)arg1 forLoadingID:(id)arg2;
- (long long)actionType;
- (bool)async;
- (void)cancel;
- (id)delegate;
- (bool)forceRunAsUnadjustedAsset;
- (bool)hasAssets;
- (id)initWithAssets:(id)arg1 action:(id)arg2 progress:(id)arg3;
- (id)initWithAssets:(id)arg1 actionMap:(id)arg2 progress:(id)arg3;
- (id)loadingStatusManager;
- (id)progress;
- (void)runActionWithBatchSize:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)setAsync:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceRunAsUnadjustedAsset:(bool)arg1;
- (void)setLoadingStatusManager:(id)arg1;
- (long long)state;

@end
