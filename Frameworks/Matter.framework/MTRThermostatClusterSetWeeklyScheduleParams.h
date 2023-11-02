
@interface MTRThermostatClusterSetWeeklyScheduleParams : NSObject <NSCopying> {
    NSNumber * _dayOfWeekForSequence;
    NSNumber * _modeForSequence;
    NSNumber * _numberOfTransitionsForSequence;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSArray * _transitions;
}

@property (nonatomic, copy) NSNumber *dayOfWeekForSequence;
@property (nonatomic, copy) NSNumber *modeForSequence;
@property (nonatomic, copy) NSNumber *numberOfTransitionsForSequence;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSArray *transitions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dayOfWeekForSequence;
- (id)description;
- (id)init;
- (id)modeForSequence;
- (id)numberOfTransitionsForSequence;
- (id)serverSideProcessingTimeout;
- (void)setDayOfWeekForSequence:(id)arg1;
- (void)setModeForSequence:(id)arg1;
- (void)setNumberOfTransitionsForSequence:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setTransitions:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)transitions;

@end
