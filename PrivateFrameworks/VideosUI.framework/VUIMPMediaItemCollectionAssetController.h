
@interface VUIMPMediaItemCollectionAssetController : NSObject <VUIMediaEntityAssetController> {
    NSArray * _assetControllers;
    NSObject<OS_dispatch_queue> * _completionDispatchQueue;
    unsigned long long  _fullyDownloadedAssetBytes;
    MPMediaItemCollection * _mediaItemCollection;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
    VUIMediaEntityAssetControllerState * _state;
    bool  _supportsStartingDownload;
}

@property (nonatomic, readonly) bool allowsManualDownloadRenewal;
@property (nonatomic, retain) NSArray *assetControllers;
@property (nonatomic, readonly) NSString *brandID;
@property (nonatomic, readonly) NSString *brandName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (nonatomic, readonly) bool contentAllowsCellularDownload;
@property (nonatomic, readonly) VUIContentRating *contentRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long fullyDownloadedAssetBytes;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPMediaItemCollection *mediaItemCollection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic, copy) VUIMediaEntityAssetControllerState *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsRedownloadingContent;
@property (nonatomic, readonly) bool supportsStartingDownload;

+ (id)_downloadingAssetControllersWithAssetControllers:(id)arg1;
+ (id)_stateFromDownloadingAssetControllers:(id)arg1 fullyDownloadedAssetBytes:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)_allAssetsDownloaded;
- (void)_assetControllerStateDidChange:(id)arg1;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id /* block */)arg1;
- (void)_enqueueCompletionQueueBlock:(id /* block */)arg1;
- (void)_notifyDelegateStateDidChange:(id)arg1;
- (void)_onProcessingQueue_cancelAndRemoveDownload;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)_onProcessingQueue_setState:(id)arg1 andNotifyDelegate:(bool)arg2;
- (void)_onProcessingQueue_startDownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 completion:(id /* block */)arg4;
- (void)_onProcessingQueue_updateStateAndNotifyListeners:(bool)arg1;
- (id)assetControllers;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (id)completionDispatchQueue;
- (bool)contentAllowsCellularDownload;
- (void)dealloc;
- (void)deleteAndRedownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 completion:(id /* block */)arg4;
- (void)fetchNewKeysForDownloadedVideo;
- (unsigned long long)fullyDownloadedAssetBytes;
- (id)init;
- (id)initWithMediaItemCollection:(id)arg1 serialProcessingDispatchQueue:(id)arg2;
- (void)invalidate;
- (id)mediaItemCollection;
- (void)pauseDownload;
- (void)resumeDownload;
- (id)serialProcessingDispatchQueue;
- (void)setAssetControllers:(id)arg1;
- (void)setCompletionDispatchQueue:(id)arg1;
- (void)setFullyDownloadedAssetBytes:(unsigned long long)arg1;
- (void)setMediaItemCollection:(id)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;
- (void)setState:(id)arg1;
- (void)startDownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 preferEnhancedDownload:(bool)arg4 completion:(id /* block */)arg5;
- (id)state;
- (bool)supportsRedownloadingContent;
- (bool)supportsStartingDownload;

@end
