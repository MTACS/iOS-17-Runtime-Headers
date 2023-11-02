
@interface _DKEventTypeResultStatsCounter : NSObject <_DKEventStatsCounterInternalProperty> {
    _DKEventStatsCounterInternal * _internal;
}

@property (retain) _DKEventStatsCounterInternal *internal;

- (void).cxx_destruct;
- (id)eventName;
- (id)eventType;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)typeValues;

@end
