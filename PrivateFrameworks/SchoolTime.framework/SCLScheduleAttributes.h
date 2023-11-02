
@interface SCLScheduleAttributes : NSObject {
    bool  _hasSingleIntervalPerDay;
    bool  _hasUniformIntervals;
    SCLSchedule * _schedule;
    long long  _scheduledDays;
    bool  _valid;
    NSError * _validationError;
    unsigned long long  _validationOptions;
}

@property (nonatomic, readonly) bool hasSingleIntervalPerDay;
@property (nonatomic, readonly) bool hasUniformIntervals;
@property (nonatomic, readonly) SCLSchedule *schedule;
@property (nonatomic, readonly) long long scheduledDays;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly) NSError *validationError;
@property (nonatomic, readonly) unsigned long long validationOptions;

- (void).cxx_destruct;
- (void)_prepareWithRecurrences:(id)arg1;
- (bool)hasSingleIntervalPerDay;
- (bool)hasUniformIntervals;
- (id)initWithSchedule:(id)arg1;
- (id)initWithSchedule:(id)arg1 options:(unsigned long long)arg2;
- (bool)isValid;
- (id)schedule;
- (long long)scheduledDays;
- (id)validationError;
- (unsigned long long)validationOptions;

@end
