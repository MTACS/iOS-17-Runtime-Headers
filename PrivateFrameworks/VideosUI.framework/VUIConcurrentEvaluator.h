
@interface VUIConcurrentEvaluator : NSObject {
    long long  _activeFetchCount;
    long long  _concurrencyCount;
    NSMutableDictionary * _fetchers;
    NSMutableDictionary * _getters;
    long long  _numberOfSchedulingLocksAcquired;
    NSMutableArray * _orderedKeys;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _schedulingLock;
}

@property (nonatomic, readonly) long long concurrencyCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)idleEvaluator;

- (void).cxx_destruct;
- (id /* block */)_getterForKey:(id)arg1;
- (void)_insertFetcher:(id /* block */)arg1 getter:(id /* block */)arg2 forKey:(id)arg3;
- (id /* block */)_removeFetcherForKey:(id)arg1;
- (void)_scheduleFetchRelayed:(bool)arg1;
- (void)addEvaluationBlock:(id /* block */)arg1 forKey:(id)arg2;
- (long long)concurrencyCount;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 concurrencyCount:(long long)arg2;
- (void)lockSchedulingForEvaluation:(id /* block */)arg1;
- (id)objectForKey:(id)arg1;
- (id)queue;

@end
