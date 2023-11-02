
@interface CSSiriQueueMonitor : NSObject {
    long long  _numberOfTransactions;
    NSMutableDictionary * _observersByIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_addQueue:(id)arg1 heartBeatInterval:(double)arg2 timeoutInterval:(double)arg3 timeoutHandler:(id /* block */)arg4;
- (void)_beginMonitoring;
- (void)_endMonitoring;
- (void)_removeQueue:(id)arg1;
- (void)addQueue:(id)arg1 heartBeatInterval:(double)arg2 timeoutInterval:(double)arg3 timeoutHandler:(id /* block */)arg4;
- (void)beginMonitoring;
- (void)endMonitoring;
- (id)init;
- (void)removeQueue:(id)arg1;

@end
