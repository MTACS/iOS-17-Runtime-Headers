
@interface FCUserVectorManager : NSObject <FCAppActivityObserving> {
    <FCReadonlyAggregateStoreProviderType> * _aggregateStoreProvider;
    FCCloudContext * _context;
    NSDate * _lastUpdated;
    FCAsyncSerialQueue * _queue;
    FCUserVector * _userVector;
}

@property (nonatomic, retain) <FCReadonlyAggregateStoreProviderType> *aggregateStoreProvider;
@property (nonatomic, retain) FCCloudContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastUpdated;
@property (nonatomic, retain) FCAsyncSerialQueue *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCUserVector *userVector;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_applicationDidEnterForeground;
- (void)_cacheGSToken;
- (void)_fetchUserVector:(id /* block */)arg1;
- (void)_submitPersonalizationVector;
- (void)activityObservingApplicationWillTerminate;
- (void)activityObservingApplicationWindowDidBecomeBackground;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (id)aggregateStoreProvider;
- (id)context;
- (id)initWithContext:(id)arg1;
- (id)lastUpdated;
- (id)queue;
- (void)setAggregateStoreProvider:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setUserVector:(id)arg1;
- (id)userVector;

@end
