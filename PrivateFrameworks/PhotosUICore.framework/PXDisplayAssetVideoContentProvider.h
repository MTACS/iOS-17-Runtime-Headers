
@interface PXDisplayAssetVideoContentProvider : PXVideoContentProvider <PXDisplayAssetVideoContentProviderRequestDelegate> {
    ISWrappedAVAudioSession * _audioSession;
    NSString * _contentIdentifier;
    NSObject<OS_dispatch_queue> * _loadingQueue;
    <PXDisplayAsset> * _loadingQueue_asset;
    long long  _loadingQueue_lastRequestedPriority;
    NSMutableDictionary * _loadingQueue_requestsByPriority;
    PXMediaProvider * _mediaProvider;
    NSObject<OS_dispatch_queue> * _postprocessingQueue;
    bool  _requestURLOnly;
    NSArray * _strategies;
    double  _videoAspectRatio;
    long long  _videoRequestID;
}

@property (nonatomic, retain) <PXDisplayAsset> *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) bool needsPostprocessing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleMediaServicesWereResetNotification:(id)arg1;
- (void)_handlePostprocessedPlayerItem:(id)arg1 priority:(long long)arg2 description:(id)arg3;
- (void)_loadingQueueBeginLoadingWithPriority:(long long)arg1;
- (void)_loadingQueue_beginRequestForPriorityIfNeeded:(long long)arg1;
- (void)_loadingQueue_cancelAllRequests;
- (bool)_loadingQueue_needsNewRequestForPriority:(long long)arg1;
- (void)_loadingQueue_reloadContent;
- (void)_loadingQueue_setAsset:(id)arg1;
- (void)_postprocessingQueue_performPostprocessingOfItem:(id)arg1 info:(id)arg2 priority:(long long)arg3;
- (id)analyticsPayload;
- (id)asset;
- (id)audioSession;
- (void)beginLoadingWithPriority:(long long)arg1;
- (void)cancelLoading;
- (id)contentIdentifier;
- (id)description;
- (id)init;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 deliveryStrategies:(id)arg3 audioSession:(id)arg4 requestURLOnly:(bool)arg5;
- (void)makeUniqueContentIdentifier;
- (id)mediaProvider;
- (bool)needsPostprocessing;
- (void)postprocessPlayerItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reloadContent;
- (void)request:(id)arg1 didFinishWithPlayerItem:(id)arg2 videoURL:(id)arg3 downloadedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg4 info:(id)arg5;
- (void)requestLoadingProgressDidChange:(id)arg1;
- (void)setAsset:(id)arg1;
- (id)videoAspectRatio;

@end
