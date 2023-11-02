
@interface SCLActiveDurationAnalyticsSource : NSObject {
    unsigned long long  _activeStartTimestamp;
    SCLState * _currentState;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _timebase;
}

@property (nonatomic) unsigned long long activeStartTimestamp;
@property (nonatomic, copy) SCLState *currentState;
@property (nonatomic, readonly) struct mach_timebase_info { unsigned int x1; unsigned int x2; } timebase;

- (void).cxx_destruct;
- (unsigned long long)activeStartTimestamp;
- (void)commitAnalyticsEventForTransitionFromState:(id)arg1 toState:(id)arg2;
- (id)currentState;
- (id)initWithInitialState:(id)arg1;
- (bool)isActiveForState:(id)arg1;
- (unsigned long long)secondsSinceContinuousTimestamp:(unsigned long long)arg1;
- (unsigned long long)secondsWithMachTimeInterval:(unsigned long long)arg1;
- (void)server:(id)arg1 didUpdateState:(id)arg2 fromState:(id)arg3;
- (void)setActiveStartTimestamp:(unsigned long long)arg1;
- (void)setCurrentState:(id)arg1;
- (struct mach_timebase_info { unsigned int x1; unsigned int x2; })timebase;

@end
