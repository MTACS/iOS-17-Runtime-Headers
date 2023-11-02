
@interface FITrailingQuantityTimeSlice : NSObject {
    NSArray * _committedSamples;
    HKQuantity * _committedTotal;
    NSDate * _endDate;
    bool  _finalized;
    NSDate * _lastCommitDate;
    HKQuantityType * _quantityType;
    NSDate * _startDate;
    NSArray * _uncommittedSamples;
}

@property (nonatomic, readonly) HKQuantity *committedAndAddedTotal;
@property (nonatomic, readonly) double committedDuration;
@property (nonatomic, readonly) NSArray *committedSamples;
@property (nonatomic, readonly) HKQuantity *committedTotal;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) bool finalized;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)_commitingSamples:(id)arg1 toPreviousCommittedTotal:(id)arg2 toPreviousCommittedSamples:(id)arg3 untilDate:(id)arg4 startDate:(id)arg5 endDate:(id)arg6;
- (id)_totalByCommittingSample:(id)arg1 toPreviousTotal:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (double)activeDurationUntilDate:(id)arg1;
- (id)addingSample:(id)arg1 error:(id*)arg2;
- (id)addingSamples:(id)arg1 error:(id*)arg2;
- (id)autoCommitDateForSamples:(id)arg1;
- (id)committedAndAddedTotal;
- (double)committedDuration;
- (id)committedSamples;
- (id)committedTotal;
- (id)committingUntilDate:(id)arg1;
- (id)description;
- (id)endDate;
- (bool)finalized;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 committedSamples:(id)arg4 uncommittedSamples:(id)arg5 lastCommitDate:(id)arg6 committedTotal:(id)arg7 finalized:(bool)arg8;
- (id)quantityType;
- (id)settingEndDate:(id)arg1;
- (id)settingStartDate:(id)arg1;
- (id)settingTotalQuantityLimit:(id)arg1;
- (id)startDate;

@end
