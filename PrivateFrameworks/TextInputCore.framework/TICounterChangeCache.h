
@interface TICounterChangeCache : NSObject {
    NSMutableDictionary * _cache;
    TIEventDescriptorRegistry * _eventDescriptorRegistry;
    TIMetricDescriptorRegistry * _metricDescriptorRegistry;
    NSMutableSet * _referencedCounters;
    double  _timeOfLastPersist;
    bool  _userModelRateLimitingDisabled;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (void)addCounterReferencesForMetric:(id)arg1;
- (void)addStatisticChanges:(id)arg1 withContext:(id)arg2;
- (void)close;
- (id)initWithEventDescriptorRegistry:(id)arg1 metricDescriptorRegistry:(id)arg2;
- (void)keyboardDidSuspendForDate:(id)arg1;
- (void)loadReferencedCounters;
- (void)persistForDate:(id)arg1;
- (void)queueCompletionHandler:(id /* block */)arg1;

@end
