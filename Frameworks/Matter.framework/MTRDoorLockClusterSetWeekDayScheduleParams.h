
@interface MTRDoorLockClusterSetWeekDayScheduleParams : NSObject <NSCopying> {
    NSNumber * _daysMask;
    NSNumber * _endHour;
    NSNumber * _endMinute;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _startHour;
    NSNumber * _startMinute;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _userIndex;
    NSNumber * _weekDayIndex;
}

@property (nonatomic, copy) NSNumber *daysMask;
@property (nonatomic, copy) NSNumber *endHour;
@property (nonatomic, copy) NSNumber *endMinute;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *startHour;
@property (nonatomic, copy) NSNumber *startMinute;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *userIndex;
@property (nonatomic, copy) NSNumber *weekDayIndex;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daysMask;
- (id)description;
- (id)endHour;
- (id)endMinute;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setDaysMask:(id)arg1;
- (void)setEndHour:(id)arg1;
- (void)setEndMinute:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setStartHour:(id)arg1;
- (void)setStartMinute:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUserIndex:(id)arg1;
- (void)setWeekDayIndex:(id)arg1;
- (id)startHour;
- (id)startMinute;
- (id)timedInvokeTimeoutMs;
- (id)userIndex;
- (id)weekDayIndex;

@end
