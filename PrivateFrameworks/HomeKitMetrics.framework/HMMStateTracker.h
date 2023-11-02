
@interface HMMStateTracker : NSObject {
    bool  _autoStopPreviousState;
    NSMutableArray * _closedStates;
    HMMStateData * _longestState;
    unsigned long long  _longestStateDuration;
    NSMutableDictionary * _openStates;
    unsigned long long  _startTime;
    bool  _started;
    unsigned long long  _stateEntryTransitionTime;
    unsigned long long  _totalDuration;
    unsigned long long  _totalStateDuration;
}

@property (nonatomic) bool autoStopPreviousState;
@property (nonatomic, retain) NSMutableArray *closedStates;
@property (nonatomic, readonly) HMMStateData *longestState;
@property (nonatomic) unsigned long long longestStateDuration;
@property (nonatomic, retain) NSMutableDictionary *openStates;
@property (nonatomic) unsigned long long startTime;
@property (getter=isStarted, nonatomic, readonly) bool started;
@property (nonatomic) unsigned long long stateEntryTransitionTime;
@property (nonatomic, readonly) NSArray *states;
@property (nonatomic, readonly) unsigned long long totalDuration;
@property (nonatomic, readonly) unsigned long long totalStateDuration;

- (void).cxx_destruct;
- (void)_exitState:(id)arg1 exitTime:(unsigned long long)arg2 exitData:(id)arg3;
- (bool)autoStopPreviousState;
- (id)closedStates;
- (void)endWithTime:(unsigned long long)arg1;
- (void)enterState:(id)arg1 enterTime:(unsigned long long)arg2 enterData:(id)arg3;
- (void)exitState:(id)arg1 exitTime:(unsigned long long)arg2 exitData:(id)arg3;
- (id)initAutoStopPreviousState:(bool)arg1;
- (bool)isStarted;
- (id)longestState;
- (unsigned long long)longestStateDuration;
- (id)openStates;
- (void)setAutoStopPreviousState:(bool)arg1;
- (void)setClosedStates:(id)arg1;
- (void)setLongestStateDuration:(unsigned long long)arg1;
- (void)setOpenStates:(id)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setStateEntryTransitionTime:(unsigned long long)arg1;
- (unsigned long long)startTime;
- (void)startWithTime:(unsigned long long)arg1;
- (unsigned long long)stateEntryTransitionTime;
- (id)states;
- (unsigned long long)totalDuration;
- (unsigned long long)totalStateDuration;
- (void)updateStateDuration:(unsigned long long)arg1;

@end
