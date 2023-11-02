
@interface VUIMPMediaItemCloudDownloadController : VUIMPMediaItemDownloadController <MPStoreDownloadManagerObserver> {
    MPStoreDownload * _storeDownload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPStoreDownload *storeDownload;
@property (readonly) Class superclass;

+ (id)_stateFromStoreDownload:(id)arg1;

- (void).cxx_destruct;
- (void)_addStoreObserver;
- (void)_onProcessingQueue_cancelDownload;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)_removeStoreObserver;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (id)initWithMediaItem:(id)arg1 serialProcessingDispatchQueue:(id)arg2;
- (id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3;
- (bool)isRestoreDownload;
- (void)setStoreDownload:(id)arg1;
- (id)storeDownload;
- (bool)supportsPausing;

@end
