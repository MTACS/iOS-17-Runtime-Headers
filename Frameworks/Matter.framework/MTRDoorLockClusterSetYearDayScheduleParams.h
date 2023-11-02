
@interface MTRDoorLockClusterSetYearDayScheduleParams : NSObject <NSCopying> {
    NSNumber * _localEndTime;
    NSNumber * _localStartTime;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _userIndex;
    NSNumber * _yearDayIndex;
}

@property (nonatomic, copy) NSNumber *localEndTime;
@property (nonatomic, copy) NSNumber *localStartTime;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *userIndex;
@property (nonatomic, copy) NSNumber *yearDayIndex;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)localEndTime;
- (id)localStartTime;
- (id)serverSideProcessingTimeout;
- (void)setLocalEndTime:(id)arg1;
- (void)setLocalStartTime:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUserIndex:(id)arg1;
- (void)setYearDayIndex:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)userIndex;
- (id)yearDayIndex;

@end
