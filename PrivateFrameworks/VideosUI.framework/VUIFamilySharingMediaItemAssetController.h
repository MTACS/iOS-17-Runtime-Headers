
@interface VUIFamilySharingMediaItemAssetController : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, VUIMediaEntityAssetController> {
    NSObject<OS_dispatch_queue> * _completionDispatchQueueInternal;
    SSDownload * _downloadInternal;
    VUIFamilySharingMediaItem * _mediaItemInternal;
    bool  _observingDownload;
    NSObject<OS_dispatch_queue> * _serialQueue;
    SSDownloadManager * _ssDownloadManager;
    VUIMediaEntityAssetControllerState * _stateInternal;
    NSTimer * _waitForDeletionTimer;
}

@property (nonatomic, readonly) bool allowsManualDownloadRenewal;
@property (nonatomic, readonly) NSString *brandID;
@property (nonatomic, readonly) NSString *brandName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal;
@property (nonatomic, readonly) bool contentAllowsCellularDownload;
@property (nonatomic, readonly) VUIContentRating *contentRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SSDownload *downloadInternal;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUIFamilySharingMediaItem *mediaItemInternal;
@property (nonatomic) bool observingDownload;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) SSDownloadManager *ssDownloadManager;
@property (nonatomic, readonly, copy) VUIMediaEntityAssetControllerState *state;
@property (nonatomic, retain) VUIMediaEntityAssetControllerState *stateInternal;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsRedownloadingContent;
@property (nonatomic, readonly) bool supportsStartingDownload;
@property (nonatomic, retain) NSTimer *waitForDeletionTimer;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_cancelAndRemoveDownloadWithCompletion:(id /* block */)arg1;
- (void)_updateDownloadStateAndNotifyListeners;
- (void)_updateObservedDownload;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (id)completionDispatchQueue;
- (id)completionDispatchQueueInternal;
- (bool)contentAllowsCellularDownload;
- (void)deleteAndRedownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 completion:(id /* block */)arg4;
- (id)downloadInternal;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)fetchNewKeysForDownloadedVideo;
- (id)init;
- (id)initWithFamilySharingMediaItem:(id)arg1;
- (id)initWithVideosPlayable:(id)arg1;
- (void)invalidate;
- (id)mediaItemInternal;
- (bool)observingDownload;
- (void)pauseDownload;
- (void)resumeDownload;
- (id)serialQueue;
- (void)setCompletionDispatchQueue:(id)arg1;
- (void)setCompletionDispatchQueueInternal:(id)arg1;
- (void)setDownloadInternal:(id)arg1;
- (void)setMediaItemInternal:(id)arg1;
- (void)setObservingDownload:(bool)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSsDownloadManager:(id)arg1;
- (void)setStateInternal:(id)arg1;
- (void)setWaitForDeletionTimer:(id)arg1;
- (id)ssDownloadManager;
- (void)startDownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 preferEnhancedDownload:(bool)arg4 completion:(id /* block */)arg5;
- (id)state;
- (id)stateInternal;
- (bool)supportsRedownloadingContent;
- (bool)supportsStartingDownload;
- (id)waitForDeletionTimer;

@end
