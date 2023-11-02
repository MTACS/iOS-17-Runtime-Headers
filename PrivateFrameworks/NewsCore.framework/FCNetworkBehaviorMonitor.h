
@interface FCNetworkBehaviorMonitor : NSObject <FCNetworkReachabilityObserving, FCOperationThrottlerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDate * _dateOfLastNetworkIssue;
    NSMutableArray * _events;
    FCKeyValueStore * _localStore;
    NSHashTable * _observers;
    <FCOperationThrottler> * _saveThrottler;
    NSMutableIndexSet * _sessionIDsThisLaunch;
    NSMutableArray * _sessions;
}

@property (copy) NSDate *dateOfLastNetworkIssue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *networkEvents;
@property (nonatomic, readonly, copy) NSArray *sessions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)dateOfLastNetworkIssue;
- (id)init;
- (id)initForLoggingOnly;
- (id)initWithCacheDirectory:(id)arg1;
- (void)logNetworkEvent:(id)arg1;
- (id)networkEvents;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)populateTelemetry:(id)arg1 withNetworkEventsFromDate:(id)arg2 toDate:(id)arg3;
- (void)removeObserver:(id)arg1;
- (id)sessions;
- (void)setDateOfLastNetworkIssue:(id)arg1;
- (void)wifiReachabilityDidChange:(id)arg1;

@end
