
@interface HDBackgroundTask : NSObject {
    NSObject<OS_xpc_object> * _job;
}

@property (nonatomic) bool allowsPowerOptimizedScheduling;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) bool shiftsDatesWithSystemClockChanges;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSDictionary *userContext;

- (void).cxx_destruct;
- (bool)allowsPowerOptimizedScheduling;
- (id)description;
- (id)endDate;
- (id)init;
- (void)setAllowsPowerOptimizedScheduling:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setShiftsDatesWithSystemClockChanges:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUserContext:(id)arg1;
- (bool)shiftsDatesWithSystemClockChanges;
- (id)startDate;
- (bool)taskExpired;
- (bool)taskSatisfied;
- (bool)taskValid;
- (id)userContext;

@end
