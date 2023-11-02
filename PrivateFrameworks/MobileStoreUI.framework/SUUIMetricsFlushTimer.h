
@interface SUUIMetricsFlushTimer : NSObject {
    NSHashTable * _metricsControllers;
    NSObject<OS_dispatch_source> * _timer;
    unsigned long long  _timerStartTime;
}

+ (id)sharedTimer;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_cancelFlushTimer;
- (void)_performFlush;
- (void)addMetricsController:(id)arg1;
- (void)dealloc;
- (void)flushAllMetricsControllers;
- (id)init;
- (void)reloadFlushInterval;
- (void)removeMetricsController:(id)arg1;

@end
