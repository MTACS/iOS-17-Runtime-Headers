
@interface FPDDownloader : NSObject <FPCancellable> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSProgress * _cancellationProgress;
    NSMutableDictionary * _childProxies;
    FPDDomain * _domain;
    bool  _dryRun;
    NSObservation * _observation;
    NSMutableDictionary * _parentToChildMap;
    NSProgress * _progress;
}

@property (nonatomic, readonly) NSProgress *cancellationProgress;
@property (nonatomic, readonly) FPDDomain *domain;
@property (getter=isDryRun, nonatomic) bool dryRun;
@property (nonatomic, readonly) NSProgress *progress;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_createChildItem:(id)arg1;
- (void)_didDownloadItem:(id)arg1 withError:(id)arg2;
- (void)_downloadItem:(id)arg1 recursively:(unsigned long long)arg2 retryCount:(int)arg3 request:(id)arg4 withCompletion:(id /* block */)arg5;
- (void)_logRootProgress;
- (void)_nonRecursiveDownloadOfItem:(id)arg1 request:(id)arg2 perItemCompletion:(id /* block */)arg3 withCompletion:(id /* block */)arg4;
- (void)_progressComputationPreflightForRecursiveRoot:(id)arg1 completion:(id /* block */)arg2;
- (void)_recursiveDownloadOfItem:(id)arg1 request:(id)arg2 recursively:(unsigned long long)arg3 perItemCompletion:(id /* block */)arg4 withCompletion:(id /* block */)arg5;
- (void)_stopTrackingFileURLs;
- (void)cancel;
- (id)cancellationProgress;
- (void)dealloc;
- (id)domain;
- (void)downloadItem:(id)arg1 recursively:(unsigned long long)arg2 request:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)downloadURL:(id)arg1 recursively:(unsigned long long)arg2 request:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)initWithDomain:(id)arg1 callbackQueue:(id)arg2;
- (bool)isDryRun;
- (id)progress;
- (void)setDryRun:(bool)arg1;

@end
