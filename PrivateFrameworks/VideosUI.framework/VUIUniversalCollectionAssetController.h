
@interface VUIUniversalCollectionAssetController : NSObject <VUIMediaEntityAssetController> {
    NSArray * _assetControllers;
    NSObject<OS_dispatch_queue> * _completionDispatchQueueInternal;
    MPMediaItemCollection * _mediaItemCollection;
    VUIMediaEntityAssetControllerState * _stateInternal;
}

@property (nonatomic, readonly) bool allowsManualDownloadRenewal;
@property (nonatomic, retain) NSArray *assetControllers;
@property (nonatomic, readonly) NSString *brandID;
@property (nonatomic, readonly) NSString *brandName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal;
@property (nonatomic, readonly) bool contentAllowsCellularDownload;
@property (nonatomic, readonly) VUIContentRating *contentRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPMediaItemCollection *mediaItemCollection;
@property (nonatomic, readonly, copy) VUIMediaEntityAssetControllerState *state;
@property (nonatomic, retain) VUIMediaEntityAssetControllerState *stateInternal;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsRedownloadingContent;
@property (nonatomic, readonly) bool supportsStartingDownload;

- (void).cxx_destruct;
- (void)_assetControllerDidChange:(id)arg1;
- (void)_updateDownloadStateAndNotifyListeners;
- (id)assetControllers;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (id)completionDispatchQueue;
- (id)completionDispatchQueueInternal;
- (bool)contentAllowsCellularDownload;
- (void)dealloc;
- (void)deleteAndRedownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 completion:(id /* block */)arg4;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithMediaItemCollection:(id)arg1;
- (void)invalidate;
- (id)mediaItemCollection;
- (void)pauseDownload;
- (void)resumeDownload;
- (void)setAssetControllers:(id)arg1;
- (void)setCompletionDispatchQueue:(id)arg1;
- (void)setCompletionDispatchQueueInternal:(id)arg1;
- (void)setMediaItemCollection:(id)arg1;
- (void)setStateInternal:(id)arg1;
- (void)startDownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 preferEnhancedDownload:(bool)arg4 completion:(id /* block */)arg5;
- (id)state;
- (id)stateInternal;
- (bool)supportsRedownloadingContent;
- (bool)supportsStartingDownload;

@end
