
@interface MTRDoorLockClusterSetHolidayScheduleParams : NSObject <NSCopying> {
    NSNumber * _holidayIndex;
    NSNumber * _localEndTime;
    NSNumber * _localStartTime;
    NSNumber * _operatingMode;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *holidayIndex;
@property (nonatomic, copy) NSNumber *localEndTime;
@property (nonatomic, copy) NSNumber *localStartTime;
@property (nonatomic, copy) NSNumber *operatingMode;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)holidayIndex;
- (id)init;
- (id)localEndTime;
- (id)localStartTime;
- (id)operatingMode;
- (id)serverSideProcessingTimeout;
- (void)setHolidayIndex:(id)arg1;
- (void)setLocalEndTime:(id)arg1;
- (void)setLocalStartTime:(id)arg1;
- (void)setOperatingMode:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
