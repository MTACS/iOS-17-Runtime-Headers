
@interface MTRDoorLockClusterGetYearDayScheduleResponseParams : NSObject <NSCopying> {
    NSNumber * _localEndTime;
    NSNumber * _localStartTime;
    NSNumber * _status;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _userIndex;
    NSNumber * _yearDayIndex;
}

@property (nonatomic, copy) NSNumber *localEndTime;
@property (nonatomic, copy) NSNumber *localStartTime;
@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *userIndex;
@property (nonatomic, copy) NSNumber *yearDayIndex;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)localEndTime;
- (id)localStartTime;
- (void)setLocalEndTime:(id)arg1;
- (void)setLocalStartTime:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUserIndex:(id)arg1;
- (void)setYearDayIndex:(id)arg1;
- (id)status;
- (id)timedInvokeTimeoutMs;
- (id)userIndex;
- (id)yearDayIndex;

@end
