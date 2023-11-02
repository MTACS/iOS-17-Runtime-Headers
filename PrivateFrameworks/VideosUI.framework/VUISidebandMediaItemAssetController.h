
@interface VUISidebandMediaItemAssetController : NSObject <TVPDownloadDelegate, VUIDownloadManagerDelegate, VUIMediaEntityAssetController> {
    NSObject<OS_dispatch_queue> * _completionDispatchQueueInternal;
    TVPDownload * _downloadInternal;
    NSObject<OS_dispatch_queue> * _serialQueue;
    VUIMediaEntityAssetControllerState * _stateInternal;
    VUIVideoManagedObject * _videoManagedObjectInternal;
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
@property (nonatomic, retain) TVPDownload *downloadInternal;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly, copy) VUIMediaEntityAssetControllerState *state;
@property (nonatomic, retain) VUIMediaEntityAssetControllerState *stateInternal;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsRedownloadingContent;
@property (nonatomic, readonly) bool supportsStartingDownload;
@property (nonatomic, retain) VUIVideoManagedObject *videoManagedObjectInternal;

- (void).cxx_destruct;
- (void)_updateDownloadStateAndNotifyListeners;
- (void)_updateObservedDownload;
- (bool)allowsManualDownloadRenewal;
- (id)brandID;
- (id)brandName;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (id)completionDispatchQueue;
- (id)completionDispatchQueueInternal;
- (bool)contentAllowsCellularDownload;
- (void)dealloc;
- (void)deleteAndRedownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 completion:(id /* block */)arg4;
- (void)download:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)download:(id)arg1 progressDidChange:(double)arg2;
- (id)downloadInternal;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithVideoManagedObject:(id)arg1;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pauseDownload;
- (void)resumeDownload;
- (id)serialQueue;
- (void)setCompletionDispatchQueue:(id)arg1;
- (void)setCompletionDispatchQueueInternal:(id)arg1;
- (void)setDownloadInternal:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setStateInternal:(id)arg1;
- (void)setVideoManagedObjectInternal:(id)arg1;
- (void)startDownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 preferEnhancedDownload:(bool)arg4 completion:(id /* block */)arg5;
- (id)state;
- (id)stateInternal;
- (bool)supportsRedownloadingContent;
- (bool)supportsStartingDownload;
- (id)videoManagedObjectInternal;

@end
