
@interface _CDMutablePerfMetric : _CDPerfMetric {
    _DKEventStatsTimerCounter * _eventStatsTimerCounter;
    NSObject<OS_os_activity> * _os_activity;
    struct os_activity_scope_state_s { 
        unsigned long long opaque[2]; 
    }  _os_activity_scope_state;
}

- (void).cxx_destruct;
- (id)description;
- (void)endTimingWithEvent:(struct _CDPerfEvent { double x1; double x2; }*)arg1 resultCount:(unsigned long long)arg2 incrementErrorCount:(bool)arg3;
- (id)initWithName:(id)arg1 string:(id)arg2 family:(id)arg3;
- (void)startTelemetryWithOSActivity:(id)arg1;

@end
