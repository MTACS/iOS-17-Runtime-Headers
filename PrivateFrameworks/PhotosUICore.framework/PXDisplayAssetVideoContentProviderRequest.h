
@interface PXDisplayAssetVideoContentProviderRequest : NSObject {
    <PXDisplayAsset> * _asset;
    <PXDisplayAssetVideoContentProviderRequestDelegate> * _delegate;
    bool  _isCancelled;
    double  _loadingProgress;
    NSObject<OS_dispatch_queue> * _loadingQueue;
    PXMediaProvider * _mediaProvider;
    long long  _priority;
    long long  _requestID;
    bool  _requestURLOnly;
    long long  _retriesAfterTransientErrorCount;
    bool  _shouldDownloadTimeRange;
    NSArray * _strategies;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic) <PXDisplayAssetVideoContentProviderRequestDelegate> *delegate;
@property (nonatomic, readonly) double loadingProgress;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *loadingQueue;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) bool requestURLOnly;
@property (nonatomic, readonly) NSArray *strategies;

+ (id)startRequestWithAsset:(id)arg1 mediaProvider:(id)arg2 strategies:(id)arg3 priority:(long long)arg4 requestURLOnly:(bool)arg5 delegate:(id)arg6 loadingQueue:(id)arg7;

- (void).cxx_destruct;
- (void)_handleLoadedPlayerItem:(id)arg1 videoURL:(id)arg2 info:(id)arg3 strategyAtIndex:(long long)arg4;
- (void)_handleLoadingProgress:(double)arg1;
- (bool)_isTransientError:(id)arg1;
- (void)_loadMediaWithStrategyAtIndex:(long long)arg1;
- (void)_start;
- (id)asset;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 strategies:(id)arg3 priority:(long long)arg4 requestURLOnly:(bool)arg5 delegate:(id)arg6 loadingQueue:(id)arg7;
- (double)loadingProgress;
- (id)loadingQueue;
- (id)mediaProvider;
- (long long)priority;
- (bool)requestURLOnly;
- (void)setDelegate:(id)arg1;
- (id)strategies;

@end
