
@interface RERelevanceEngineLogger : NSObject {
    REObserverStore * _loggables;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)addLoggable:(id)arg1;
- (void)collectLogs:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)enumerateLoggables:(id /* block */)arg1;
- (id)init;
- (void)removeLoggable:(id)arg1;

@end
