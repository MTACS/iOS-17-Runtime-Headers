
@interface FITrailingIntervalController : NSObject {
    NSArray * _pauseResumeEvents;
    HKQuantityType * _quantityType;
    NSArray * _slices;
    HKQuantity * _threshold;
    bool  _thresholdReached;
    NSArray * _uncommittedSamples;
}

@property (nonatomic, readonly) double committedDuration;
@property (nonatomic, readonly) NSArray *pauseResumeEvents;
@property (nonatomic, readonly) HKQuantity *quantity;
@property (nonatomic, retain) HKQuantity *threshold;
@property (nonatomic, readonly) bool thresholdReached;

- (void).cxx_destruct;
- (void)_addPauseEvent:(id)arg1;
- (void)_addResumeEvent:(id)arg1;
- (void)_determineAndProcessThresholdReached;
- (void)_processUncommittedSamples;
- (void)_updateSlicesWithSamples:(id)arg1;
- (double)activeDurationUntilDate:(id)arg1;
- (bool)addEvent:(id)arg1 withError:(id*)arg2;
- (void)addSample:(id)arg1;
- (void)addSamples:(id)arg1;
- (double)committedDuration;
- (double)idleDurationUntilDate:(id)arg1;
- (id)initWithQuantityType:(id)arg1 threshold:(id)arg2 startDate:(id)arg3;
- (id)pauseResumeEvents;
- (id)quantity;
- (void)setThreshold:(id)arg1;
- (id)threshold;
- (bool)thresholdReached;

@end
