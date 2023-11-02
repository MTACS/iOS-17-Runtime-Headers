
@interface VUIMPMediaItemAssetController : NSObject <MPStoreDownloadManagerObserver, VUIMPMediaItemDownloadControllerObserver, VUIMediaEntityAssetController> {
    NSObject<OS_dispatch_queue> * _completionDispatchQueue;
    VUIMPMediaItemDownloadController * _downloadController;
    MPMediaItem * _mediaItem;
    bool  _requestingPermissionToDownload;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
    VUIMediaEntityAssetControllerState * _state;
    bool  _supportsStartingDownload;
    NSTimer * _waitForDeletionTimer;
}

@property (nonatomic, readonly) bool allowsManualDownloadRenewal;
@property (nonatomic, readonly) NSString *brandID;
@property (nonatomic, readonly) NSString *brandName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (nonatomic, readonly) bool contentAllowsCellularDownload;
@property (nonatomic, readonly) VUIContentRating *contentRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIMPMediaItemDownloadController *downloadController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (getter=isRequestingPermissionToDownload, nonatomic) bool requestingPermissionToDownload;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic, readonly, copy) VUIMediaEntityAssetControllerState *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsRedownloadingContent;
@property (nonatomic, readonly) bool supportsStartingDownload;
@property (nonatomic, retain) NSTimer *waitForDeletionTimer;

+ (unsigned long long)_assetControllerStatusFromDownloadControllerState:(id)arg1;
+ (bool)_supportsStartingDownloadWithMediaItem:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id /* block */)arg1;
- (void)_enqueueCompletionQueueBlock:(id /* block */)arg1;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (bool)_isDownloaded;
- (void)_onProcessingQueue_calculateStateAndNotify:(bool)arg1;
- (void)_onProcessingQueue_cancelAndRemoveDownloadWithCompletion:(id /* block */)arg1;
- (id)_onProcessingQueue_downloadController;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_invalidateAndSetState;
- (void)_onProcessingQueue_setDownloadController:(id)arg1;
- (void)_onProcessingQueue_startDownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 completion:(id /* block */)arg3;
- (void)_onProcessingQueue_startMonitoringDownload;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 downloadState:(id)arg2 supportsPausing:(bool)arg3 supportsCancellation:(bool)arg4 notify:(bool)arg5;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 notify:(bool)arg2;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (id)completionDispatchQueue;
- (bool)contentAllowsCellularDownload;
- (void)dealloc;
- (void)deleteAndRedownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 completion:(id /* block */)arg4;
- (id)downloadController;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)fetchNewKeysForDownloadedVideo;
- (id)init;
- (id)initWithMediaItem:(id)arg1 serialProcessingDispatchQueue:(id)arg2;
- (void)invalidate;
- (bool)isRequestingPermissionToDownload;
- (id)mediaItem;
- (void)mediaItemDownloadController:(id)arg1 stateDidChange:(id)arg2;
- (void)pauseDownload;
- (void)resumeDownload;
- (id)serialProcessingDispatchQueue;
- (void)setCompletionDispatchQueue:(id)arg1;
- (void)setDownloadController:(id)arg1;
- (void)setRequestingPermissionToDownload:(bool)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;
- (void)setWaitForDeletionTimer:(id)arg1;
- (void)startDownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 preferEnhancedDownload:(bool)arg4 completion:(id /* block */)arg5;
- (id)state;
- (bool)supportsRedownloadingContent;
- (bool)supportsStartingDownload;
- (id)waitForDeletionTimer;

@end
