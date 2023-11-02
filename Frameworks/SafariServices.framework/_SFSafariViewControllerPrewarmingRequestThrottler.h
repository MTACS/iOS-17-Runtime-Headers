
@interface _SFSafariViewControllerPrewarmingRequestThrottler : NSObject {
    id /* block */  _connectionHandler;
    unsigned long long  _maximumValidConnectionCount;
    double  _minimumRequestDelay;
    NSHashTable * _prewarmedTokens;
    NSMutableSet * _prewarmedURLs;
    NSTimer * _requestDelayTimer;
    NSHashTable * _requestedTokens;
    bool  _suspended;
    NSMutableDictionary * _tokensByID;
}

@property (nonatomic, copy) id /* block */ connectionHandler;
@property (nonatomic) unsigned long long maximumValidConnectionCount;
@property (nonatomic) double minimumRequestDelay;

- (void).cxx_destruct;
- (id)_URLsToPrewarmForToken:(id)arg1;
- (void)_didPartiallyPrewarmToken:(id)arg1;
- (void)_didPrewarmToken:(id)arg1;
- (id)_nextTokenToPrewarm;
- (void)_performNextRequest;
- (void)_prewarmURLs:(id)arg1;
- (id)_prewarmedURLsWithValidTokens;
- (void)_startRequestTimer;
- (void)_stopRequestTimer;
- (id /* block */)connectionHandler;
- (void)dealloc;
- (id)init;
- (void)invalidateTokenWithID:(unsigned long long)arg1;
- (unsigned long long)maximumValidConnectionCount;
- (double)minimumRequestDelay;
- (void)requestToken:(id)arg1;
- (void)resume;
- (void)setConnectionHandler:(id /* block */)arg1;
- (void)setMaximumValidConnectionCount:(unsigned long long)arg1;
- (void)setMinimumRequestDelay:(double)arg1;
- (void)suspend;

@end
