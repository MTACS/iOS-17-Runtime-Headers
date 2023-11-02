
@interface _HKMobileAssetDownloadOperation : NSObject {
    MAAsset * _asset;
    id /* block */  _completion;
    MADownloadOptions * _downloadOptions;
    long long  _maxNumberOfRetriesAllowed;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _retryCount;
    long long  _state;
}

- (void).cxx_destruct;
- (void)_queue_callCompletionWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_queue_downloadAsset;
- (void)_queue_run;
- (void)_queue_transitionToCompleted;
- (void)_queue_transitionToDownloadingAsset;
- (void)_queue_transitionToFailureWithDownloadResult:(long long)arg1;
- (void)_queue_transitionToInitialized;
- (void)_queue_transitionToState:(long long)arg1;
- (id)description;
- (id)initWithAsset:(id)arg1 queue:(id)arg2 downloadOptions:(id)arg3 maxNumberOfRetriesAllowed:(long long)arg4 completion:(id /* block */)arg5;
- (void)run;

@end
