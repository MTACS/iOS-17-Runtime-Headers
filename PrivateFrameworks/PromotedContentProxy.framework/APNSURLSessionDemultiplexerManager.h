
@interface APNSURLSessionDemultiplexerManager : NSObject {
    APUnfairRecursiveLock * _lock;
    APProxySessionConfigurationProvider * _sessionConfigProvider;
    APOrderedMutableDictionary * _sessionDemultiplexerForIdentifier;
    NSOperationQueue * _sessionSharedDelegateQueue;
}

@property (nonatomic, retain) APUnfairRecursiveLock *lock;
@property (nonatomic, retain) APProxySessionConfigurationProvider *sessionConfigProvider;
@property (nonatomic, retain) APOrderedMutableDictionary *sessionDemultiplexerForIdentifier;
@property (nonatomic, retain) NSOperationQueue *sessionSharedDelegateQueue;

- (void).cxx_destruct;
- (id)_getSessionDemultiplexerForId:(id)arg1 maximumRequestCount:(long long)arg2;
- (void)_unregisterOldSessionIfRequired;
- (void)_unregisterSessionDemultiplexerWithIdentifier:(id)arg1;
- (id)initWithProxySessionConfigProvider:(id)arg1;
- (id)lock;
- (long long)pretapRequestCountForIdentifier:(id)arg1;
- (id)sessionConfigProvider;
- (id)sessionDemultiplexerForAdByIdentifier:(id)arg1 maximumRequestCount:(long long)arg2;
- (id)sessionDemultiplexerForIdentifier;
- (id)sessionSharedDelegateQueue;
- (void)setLock:(id)arg1;
- (void)setSessionConfigProvider:(id)arg1;
- (void)setSessionDemultiplexerForIdentifier:(id)arg1;
- (void)setSessionSharedDelegateQueue:(id)arg1;
- (void)unregisterSessionDemultiplexerWithIdentifier:(id)arg1;

@end
