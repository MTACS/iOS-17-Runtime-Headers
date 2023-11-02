
@interface MTRDoorLockClusterGetHolidayScheduleResponseParams : NSObject <NSCopying> {
    NSNumber * _holidayIndex;
    NSNumber * _localEndTime;
    NSNumber * _localStartTime;
    NSNumber * _operatingMode;
    NSNumber * _status;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *holidayIndex;
@property (nonatomic, copy) NSNumber *localEndTime;
@property (nonatomic, copy) NSNumber *localStartTime;
@property (nonatomic, copy) NSNumber *operatingMode;
@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)holidayIndex;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)localEndTime;
- (id)localStartTime;
- (id)operatingMode;
- (void)setHolidayIndex:(id)arg1;
- (void)setLocalEndTime:(id)arg1;
- (void)setLocalStartTime:(id)arg1;
- (void)setOperatingMode:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)status;
- (id)timedInvokeTimeoutMs;

@end
