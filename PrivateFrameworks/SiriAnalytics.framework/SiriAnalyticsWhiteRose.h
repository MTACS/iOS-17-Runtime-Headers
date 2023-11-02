
@interface SiriAnalyticsWhiteRose : NSObject <SiriAnalyticsDebounceDelegate> {
    SiriAnalyticsRootClock * _activeClock;
    SiriAnalyticsDebounce * _clockPulse;
    SiriAnalyticsTimePeriodBuffer * _clockPulseTimer;
    <SiriAnalyticsWhiteRoseDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _inactivityTimer;
    double  _maximumClockLifeInterval;
    NSObject<OS_dispatch_source> * _maximumClockLifeTimer;
    double  _maximumInactivityInterval;
    SiriAnalyticsMetastore * _metastore;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_cancelInactivityTimer;
- (void)_cancelMaximumClockLifeTimer;
- (void)_destroyActiveClockWithReason:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_ensureActiveClockStartingAt:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_inactivityTimerElapsed;
- (void)_maximumClockLifeExpired;
- (void)_pulseActiveClock;
- (void)_startInactivityTimer;
- (void)_startMaximumClockLifeTimer;
- (void)bootstrapWithCompletion:(id /* block */)arg1;
- (void)createTag:(id)arg1 completion:(id /* block */)arg2;
- (void)debounceFired:(id)arg1 maximumReached:(bool)arg2;
- (void)destroyActiveClockWithReason:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2 metastore:(id)arg3;
- (id)markTimeForAnnotatedMessage:(id)arg1 withRootClock:(id)arg2;
- (void)markTimeForAnnotatedMessages:(id)arg1 completion:(id /* block */)arg2;
- (void)sensitiveCondition:(int)arg1 endedAt:(unsigned long long)arg2 ensureClockExists:(bool)arg3 completion:(id /* block */)arg4;
- (void)sensitiveCondition:(int)arg1 startedAt:(unsigned long long)arg2 ensureClockExists:(bool)arg3 completion:(id /* block */)arg4;

@end
