
@interface ACTRejectCandidate : ACTUserAction {
    TIKeyboardCandidate * _candidate;
    double  _timestamp;
}

@property (nonatomic, readonly) TIKeyboardCandidate *candidate;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (void)applyWithTyper:(id)arg1 log:(id)arg2;
- (id)candidate;
- (id)description;
- (id)initWithCandidate:(id)arg1 timestamp:(double)arg2;
- (double)timestamp;

@end
