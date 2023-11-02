
@interface SiriAnalyticsClockInactivityScheduler : NSObject {
    void creation;
    void expiration;
    void inactivityTimer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  interval;
    void queue;
    void timerLock;
}

- (void).cxx_destruct;
- (void)clockCreated;
- (void)clockExpiredWithCompletion:(id /* block */)arg1;
- (void)clockForcefullyDestroyedWithCompletion:(id /* block */)arg1;
- (void)destroyInactivityTimer;
- (id)init;
- (id)initWithSeconds:(long long)arg1 queue:(id)arg2 expiration:(id /* block */)arg3 creation:(id /* block */)arg4;
- (void)startScheduling;

@end
