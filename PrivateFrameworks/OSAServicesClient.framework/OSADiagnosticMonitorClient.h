
@interface OSADiagnosticMonitorClient : NSObject {
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forTypes:(id)arg2;
- (id)init;
- (id)q_shimWrappingObserver:(id)arg1 creatingIfAbsent:(bool)arg2 removingIfPresent:(bool)arg3;
- (void)removeObserver:(id)arg1;

@end
