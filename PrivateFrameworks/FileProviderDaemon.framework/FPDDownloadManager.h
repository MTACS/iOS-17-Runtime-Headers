
@interface FPDDownloadManager : NSObject {
    NSObject<OS_dispatch_queue> * _preflightQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)acquireDownloadSlotForItem:(id)arg1;
+ (void)initialize;
+ (void)releaseDownloadSlot:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_downloadItem:(id)arg1 downloader:(id)arg2 request:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_downloadItemAtLocator:(id)arg1 downloader:(id)arg2 request:(id)arg3 completion:(id /* block */)arg4;
- (void)_recursivelyDownloadItem:(id)arg1 forceDiskIteration:(bool)arg2 skipAlreadyDownloadedItems:(bool)arg3 downloader:(id)arg4 request:(id)arg5 perItemCompletion:(id /* block */)arg6 completion:(id /* block */)arg7;
- (void)downloadItem:(id)arg1 recursively:(unsigned long long)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(id /* block */)arg5 withCompletion:(id /* block */)arg6;
- (void)downloadItems:(id)arg1 recursively:(unsigned long long)arg2 downloader:(id)arg3 request:(id)arg4 perItemCompletion:(id /* block */)arg5 withCompletion:(id /* block */)arg6;
- (id)init;
- (void)progressComputationPreflightForRecursiveRoot:(id)arg1 downloader:(id)arg2 itemProgressNeedsSetup:(id /* block */)arg3 itemProgressSetup:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)retrieveFPItemForURL:(id)arg1 domain:(id)arg2 request:(id)arg3 completion:(id /* block */)arg4;
- (void)verifyIfSubtreeIsFullyMaterializedBelowItem:(id)arg1 recursively:(unsigned long long)arg2 downloader:(id)arg3 completion:(id /* block */)arg4;

@end
