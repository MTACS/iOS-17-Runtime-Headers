
@interface CSAttSiriGazeTrackingTimedPulses : NSObject {
    NSString * _label;
    NSMutableArray * _pulses;
}

@property (nonatomic, copy) NSString *label;

- (void).cxx_destruct;
- (bool)_evaluateFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 strategy:(unsigned long long)arg3;
- (bool)_value:(double)arg1 between:(double)arg2 and:(double)arg3;
- (void)addEvent:(bool)arg1 timestamp:(unsigned long long)arg2;
- (bool)evaluateForAnyPulsesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (bool)evaluateForPulsesAroundStartAndEndFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)init;
- (id)label;
- (void)reset;
- (void)setLabel:(id)arg1;

@end
