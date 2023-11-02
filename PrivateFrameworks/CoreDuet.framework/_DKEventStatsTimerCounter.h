
@interface _DKEventStatsTimerCounter : NSObject <_DKEventStatsCounterInternalProperty> {
    _DKEventStatsCounterInternal * _internal;
}

@property (retain) _DKEventStatsCounterInternal *internal;

- (void).cxx_destruct;
- (id)eventName;
- (id)internal;
- (void)setInternal:(id)arg1;

@end
