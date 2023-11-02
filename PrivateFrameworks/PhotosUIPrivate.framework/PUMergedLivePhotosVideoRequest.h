
@interface PUMergedLivePhotosVideoRequest : PXObservable <PXChangeObserver> {
    PUAssetReference * _assetReference;
    PUAssetsDataSource * _assetsDataSource;
    unsigned long long  _requestLogID;
    NSObject<OS_dispatch_queue> * _stateQueue;
    NSError * _stateQueue_error;
    PUMergedLivePhotosVideo * _stateQueue_mergedVideo;
    long long  _stateQueue_state;
    NSObject<OS_dispatch_queue> * _workQueue;
    PUCompositeVideoGenerator * _workQueue_generator;
}

@property (nonatomic, readonly) PUAssetReference *assetReference;
@property (nonatomic, readonly) PUAssetsDataSource *assetsDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUMergedLivePhotosVideo *mergedVideo;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_stateQueue_signalStateChange;
- (id)_workQueue_fetchMergeableAssets;
- (void)_workQueue_finishWithMergedVideo:(id)arg1 error:(id)arg2;
- (void)_workQueue_generateVideoUsingAssets:(id)arg1;
- (void)_workQueue_handleGeneratorDidChangeState;
- (void)_workQueue_start;
- (id)assetReference;
- (id)assetsDataSource;
- (void)cancel;
- (id)error;
- (id)init;
- (id)initWithAssetReference:(id)arg1 dataSource:(id)arg2;
- (id)mergedVideo;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)start;
- (long long)state;

@end
