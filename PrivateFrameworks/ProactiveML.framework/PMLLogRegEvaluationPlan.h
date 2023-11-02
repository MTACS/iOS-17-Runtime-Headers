
@interface PMLLogRegEvaluationPlan : NSObject <PMLPlanProtocol> {
    PMLModelWeights * _currentModelWeights;
    unsigned long long  _evaluationLevel;
    bool  _intercept;
    bool  _isMultiLabel;
    unsigned long long  _maxSessionsLimit;
    NSString * _planId;
    unsigned long long  _positiveLabel;
    PMLSessionDescriptor * _sessionDescriptor;
    unsigned long long  _sessionsInBatch;
    double  _skew;
    PMLTrainingStore * _store;
    double  _threshold;
    <PMLEvaluationTrackerProtocol> * _tracker;
}

@property (nonatomic, readonly) PMLModelWeights *currentModelWeights;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maxSessionsLimit;
@property (nonatomic, readonly) NSString *planId;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) PMLTrainingStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PMLEvaluationTrackerProtocol> *tracker;

- (void).cxx_destruct;
- (id)currentModelWeights;
- (id)description;
- (id)init;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 planId:(id)arg3 sessionDescriptor:(id)arg4 maxSessionsLimit:(unsigned long long)arg5 sessionsInBatch:(unsigned long long)arg6 currentModelWeights:(id)arg7 intercept:(bool)arg8 skew:(double)arg9 threshold:(double)arg10 isMultiLabel:(bool)arg11 positiveLabel:(unsigned long long)arg12 evaluationLevel:(unsigned long long)arg13;
- (void)loadSessionsWithBlock:(id /* block */)arg1;
- (unsigned long long)maxSessionsLimit;
- (id)normalizeRegressor:(id)arg1;
- (id)planId;
- (id)runWithError:(id*)arg1;
- (id)sessionDescriptor;
- (id)store;
- (id)toPlistWithChunks:(id)arg1;
- (id)tracker;

@end
