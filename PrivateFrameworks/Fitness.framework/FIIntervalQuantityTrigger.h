
@interface FIIntervalQuantityTrigger : NSObject {
    id /* block */  _completion;
    bool  _finalized;
    FIQuantityTimeSlice * _slice;
    HKQuantity * _threshold;
    NSDate * _triggeredDate;
}

@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) bool triggered;
@property (nonatomic, readonly) NSDate *triggeredDate;

- (void).cxx_destruct;
- (id)_finalizedTriggerByAddingSample:(id)arg1 toSlice:(id)arg2 withPreviousTotal:(id)arg3 threshold:(id)arg4;
- (id)addingSample:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)initWithQuantityTimeslice:(id)arg1 threshold:(id)arg2 triggeredDate:(id)arg3;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 threshold:(id)arg3;
- (id)quantityType;
- (id)settingTimeSlice:(id)arg1;
- (bool)triggered;
- (id)triggeredDate;

@end
