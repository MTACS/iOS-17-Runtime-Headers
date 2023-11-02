
@interface SCLSchedulingEngine : NSObject {
    <SCLSchedulingEngineDelegate> * _delegate;
    NSDate * _lastEvaluationDate;
    NSDate * _nextEvaluationDate;
    SCLSchedulingParameters * _schedulingParameters;
    SCLState * _state;
}

@property (nonatomic) <SCLSchedulingEngineDelegate> *delegate;
@property (nonatomic, readonly) NSDate *lastEvaluationDate;
@property (nonatomic, readonly) NSDate *nextEvaluationDate;
@property (nonatomic, retain) SCLSchedulingParameters *schedulingParameters;
@property (nonatomic, readonly) SCLState *state;

- (void).cxx_destruct;
- (bool)_evaluateChangeFromParameters:(id)arg1 toParameters:(id)arg2;
- (id)delegate;
- (id)initWithParametersBlock:(id /* block */)arg1 shouldStartManuallyActive:(bool)arg2;
- (id)lastEvaluationDate;
- (id)nextEvaluationDate;
- (void)reevaluateStateAtDate:(id)arg1;
- (id)schedulingParameters;
- (void)setDelegate:(id)arg1;
- (void)setSchedulingParameters:(id)arg1;
- (id)state;
- (void)updateParametersWithBlock:(id /* block */)arg1;

@end
