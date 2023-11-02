
@interface MTRThermostatClusterGetWeeklyScheduleResponseParams : NSObject <NSCopying> {
    NSNumber * _dayOfWeekForSequence;
    NSNumber * _modeForSequence;
    NSNumber * _numberOfTransitionsForSequence;
    NSNumber * _timedInvokeTimeoutMs;
    NSArray * _transitions;
}

@property (nonatomic, copy) NSNumber *dayOfWeekForSequence;
@property (nonatomic, copy) NSNumber *modeForSequence;
@property (nonatomic, copy) NSNumber *numberOfTransitionsForSequence;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSArray *transitions;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dayOfWeekForSequence;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)modeForSequence;
- (id)numberOfTransitionsForSequence;
- (void)setDayOfWeekForSequence:(id)arg1;
- (void)setModeForSequence:(id)arg1;
- (void)setNumberOfTransitionsForSequence:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setTransitions:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)transitions;

@end
