
@interface SBPowerLogMetricsAggregator : NSObject {
    NSObject<OS_dispatch_queue> * _backgroundPowerLogQueue;
    NSMutableDictionary * _eventsWithDuration;
    bool  _flushScheduled;
    NSCalendar * _gregorian;
}

- (void).cxx_destruct;
- (void)_flushEvents;
- (void)_startTimerIfNecessary;
- (void)emitEventOfType:(unsigned long long)arg1;
- (void)emitEventOfType:(unsigned long long)arg1 withDuration:(double)arg2;
- (void)flushEventsDueToIminentPowerdown;
- (id)init;

@end
