
@interface FIQuantityTimeSlice : NSObject {
    HKQuantity * _committedTotal;
    NSDate * _endDate;
    bool  _finalized;
    NSDate * _lastCommitDate;
    HKQuantityType * _quantityType;
    NSDate * _startDate;
    NSArray * _uncommittedSamples;
}

@property (nonatomic, readonly) HKQuantity *committedAndAddedTotal;
@property (nonatomic, readonly) HKQuantity *committedTotal;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) bool finalized;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)_commitingSamples:(id)arg1 toPreviousCommittedTotal:(id)arg2 untilDate:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)_totalByCommittingSample:(id)arg1 toPreviousTotal:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)addingSample:(id)arg1 error:(id*)arg2;
- (id)addingSamples:(id)arg1 error:(id*)arg2;
- (id)committedAndAddedTotal;
- (id)committedTotal;
- (id)committingUntilDate:(id)arg1;
- (id)description;
- (id)endDate;
- (bool)finalized;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 uncommitedSamples:(id)arg4 lastCommitDate:(id)arg5 committedTotal:(id)arg6 finalized:(bool)arg7;
- (id)quantityType;
- (id)settingEndDate:(id)arg1;
- (id)startDate;

@end
