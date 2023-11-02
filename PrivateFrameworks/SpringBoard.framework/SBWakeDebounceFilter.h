
@interface SBWakeDebounceFilter : NSObject {
    double  _filterInterval;
    unsigned long long  _intervalActivationLimit;
    long long  _oldestWakeEventIndex;
    NSNumber * _overrideTime;
    NSMutableArray * _wakeEvents;
}

@property (nonatomic) double filterInterval;
@property (nonatomic) unsigned long long intervalActivationLimit;
@property (getter=_overrideTime, setter=_setOverrideTime:, nonatomic, copy) NSNumber *overrideTime;

- (void).cxx_destruct;
- (id)_overrideTime;
- (void)_setOverrideTime:(id)arg1;
- (double)filterInterval;
- (unsigned long long)intervalActivationLimit;
- (void)setFilterInterval:(double)arg1;
- (void)setIntervalActivationLimit:(unsigned long long)arg1;
- (bool)wakeEventOccurred;

@end
