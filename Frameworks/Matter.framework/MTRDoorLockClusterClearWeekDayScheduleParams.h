
@interface MTRDoorLockClusterClearWeekDayScheduleParams : NSObject <NSCopying> {
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _userIndex;
    NSNumber * _weekDayIndex;
}

@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *userIndex;
@property (nonatomic, copy) NSNumber *weekDayIndex;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUserIndex:(id)arg1;
- (void)setWeekDayIndex:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)userIndex;
- (id)weekDayIndex;

@end
