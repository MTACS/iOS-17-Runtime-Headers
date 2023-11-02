
@interface ICMediaRedownloadRequest : ICRequestOperation {
    bool  _includeKeybagSyncData;
    bool  _includeSubscriptionKeybagSyncData;
    ICUnfairLock * _lock;
    bool  _playbackRequest;
    NSDictionary * _redownloadParameters;
    ICMediaRedownloadResponse * _redownloadResponse;
    ICStoreRequestContext * _requestContext;
    NSString * _requestURLBagKey;
    ICStoreURLRequest * _storeURLRequest;
    bool  _streamingRental;
    ICURLAggregatedPerformanceMetrics * _urlMetrics;
    ICURLSession * _urlSession;
    bool  _usePrioritizedURLSession;
}

@property (nonatomic) bool includeKeybagSyncData;
@property (nonatomic) bool includeSubscriptionKeybagSyncData;
@property (getter=isPlaybackRequest, nonatomic) bool playbackRequest;
@property (nonatomic, copy) NSDictionary *redownloadParameters;
@property (nonatomic, copy) ICStoreRequestContext *requestContext;
@property (nonatomic, copy) NSString *requestURLBagKey;
@property (getter=isStreamingRental, nonatomic) bool streamingRental;
@property (nonatomic, retain) ICURLSession *urlSession;
@property (nonatomic) bool usePrioritizedURLSession;

- (void).cxx_destruct;
- (void)_executeWithActiveICloudAccountProperties:(id)arg1;
- (void)cancel;
- (void)execute;
- (bool)includeKeybagSyncData;
- (bool)includeSubscriptionKeybagSyncData;
- (id)init;
- (id)initWithRequestContext:(id)arg1 redownloadParameters:(id)arg2;
- (id)initWithRequestContext:(id)arg1 redownloadParametersString:(id)arg2;
- (bool)isPlaybackRequest;
- (bool)isStreamingRental;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;
- (id)redownloadParameters;
- (id)requestContext;
- (id)requestURLBagKey;
- (void)setIncludeKeybagSyncData:(bool)arg1;
- (void)setIncludeSubscriptionKeybagSyncData:(bool)arg1;
- (void)setPlaybackRequest:(bool)arg1;
- (void)setRedownloadParameters:(id)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setRequestURLBagKey:(id)arg1;
- (void)setStreamingRental:(bool)arg1;
- (void)setUrlSession:(id)arg1;
- (void)setUsePrioritizedURLSession:(bool)arg1;
- (id)urlSession;
- (bool)usePrioritizedURLSession;

@end
