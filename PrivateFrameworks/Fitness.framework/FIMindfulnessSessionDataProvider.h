
@interface FIMindfulnessSessionDataProvider : NSObject {
    HKHealthStore * _healthStore;
    HKSortedSampleArray * _mindfulnessSessions;
    HKAnchoredObjectQuery * _mindfulnessSessionsQuery;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (id)_createMindfulnessSessionsQueryWithRetryCount:(long long)arg1;
- (void)_queue_retryMindfulSessionQueryWithRetryCount:(long long)arg1;
- (void)_queue_startMindfulnessSessionQueryWithRetryCount:(long long)arg1;
- (void)_queue_stopMindfulSessionQuery;
- (id)allMindfulnessSessions;
- (void)allMindfulnessSessionsWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;
- (void)startMindfulnessSessionQueryIfNeeded;

@end
