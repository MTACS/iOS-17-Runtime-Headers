
@interface ACTAcceptCandidate : ACTUserAction {
    TIKeyboardCandidate * _candidate;
    NSString * _intendedCandidate;
    double  _timestamp;
}

@property (nonatomic, readonly) TIKeyboardCandidate *candidate;
@property (nonatomic, readonly) NSString *intendedCandidate;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (void)applyWithTyper:(id)arg1 log:(id)arg2;
- (id)candidate;
- (id)description;
- (id)initWithCandidate:(id)arg1 timestamp:(double)arg2;
- (id)initWithCandidate:(id)arg1 timestamp:(double)arg2 intendedCandidate:(id)arg3;
- (id)intendedCandidate;
- (double)timestamp;

@end
