
@interface MTRThermostatClusterGetWeeklyScheduleParams : NSObject <NSCopying> {
    NSNumber * _daysToReturn;
    NSNumber * _modeToReturn;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *daysToReturn;
@property (nonatomic, copy) NSNumber *modeToReturn;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daysToReturn;
- (id)description;
- (id)init;
- (id)modeToReturn;
- (id)serverSideProcessingTimeout;
- (void)setDaysToReturn:(id)arg1;
- (void)setModeToReturn:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
