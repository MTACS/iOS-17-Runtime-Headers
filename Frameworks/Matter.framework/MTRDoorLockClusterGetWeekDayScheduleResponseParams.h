
@interface MTRDoorLockClusterGetWeekDayScheduleResponseParams : NSObject <NSCopying> {
    NSNumber * _daysMask;
    NSNumber * _endHour;
    NSNumber * _endMinute;
    NSNumber * _startHour;
    NSNumber * _startMinute;
    NSNumber * _status;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _userIndex;
    NSNumber * _weekDayIndex;
}

@property (nonatomic, copy) NSNumber *daysMask;
@property (nonatomic, copy) NSNumber *endHour;
@property (nonatomic, copy) NSNumber *endMinute;
@property (nonatomic, copy) NSNumber *startHour;
@property (nonatomic, copy) NSNumber *startMinute;
@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *userIndex;
@property (nonatomic, copy) NSNumber *weekDayIndex;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daysMask;
- (id)description;
- (id)endHour;
- (id)endMinute;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setDaysMask:(id)arg1;
- (void)setEndHour:(id)arg1;
- (void)setEndMinute:(id)arg1;
- (void)setStartHour:(id)arg1;
- (void)setStartMinute:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUserIndex:(id)arg1;
- (void)setWeekDayIndex:(id)arg1;
- (id)startHour;
- (id)startMinute;
- (id)status;
- (id)timedInvokeTimeoutMs;
- (id)userIndex;
- (id)weekDayIndex;

@end
