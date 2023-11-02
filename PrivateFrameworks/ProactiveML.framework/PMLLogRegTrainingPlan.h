
@interface PMLLogRegTrainingPlan : NSObject <PMLPlanProtocol> {
    PMLModelWeights * _currentModelWeights;
    unsigned long long  _currentServerIteration;
    unsigned long long  _evaluationLevel;
    bool  _intercept;
    bool  _isMultiLabel;
    unsigned long long  _localGradientIterations;
    float  _localLearningRate;
    unsigned long long  _localMinimumIterations;
    unsigned long long  _maxSessionsLimit;
    <PMLNoiseStrategy> * _noiseStrategy;
    NSString * _planId;
    unsigned long long  _positiveLabel;
    bool  _reportScale;
    PMLSessionDescriptor * _sessionDescriptor;
    unsigned long long  _sessionsInBatch;
    double  _skew;
    float  _stoppingThreshold;
    PMLTrainingStore * _store;
    double  _threshold;
    <PMLLogRegTrackerProtocol> * _tracker;
    bool  _useOnlyAppleInternalSessions;
}

@property (nonatomic, readonly) PMLModelWeights *currentModelWeights;
@property (nonatomic, readonly) unsigned long long currentServerIteration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long evaluationLevel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool intercept;
@property (nonatomic, readonly) bool isMultiLabel;
@property (nonatomic, readonly) unsigned long long localGradientIterations;
@property (nonatomic, readonly) float localLearningRate;
@property (nonatomic, readonly) unsigned long long localMinimumIterations;
@property (nonatomic, readonly) unsigned long long maxSessionsLimit;
@property (nonatomic, readonly) NSString *planId;
@property (nonatomic, readonly) unsigned long long positiveLabel;
@property (nonatomic, readonly) bool reportScale;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) float stoppingThreshold;
@property (nonatomic, readonly) PMLTrainingStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PMLLogRegTrackerProtocol> *tracker;
@property (nonatomic, readonly) bool useOnlyAppleInternalSessions;

+ (id)planWithStore:(id)arg1 tracker:(id)arg2 sessionDescriptor:(id)arg3 arguments:(id)arg4;

- (void).cxx_destruct;
- (id)currentModelWeights;
- (unsigned long long)currentServerIteration;
- (id)description;
- (unsigned long long)evaluationLevel;
- (id)evaluationMetricsForPredictions:(id)arg1 objectives:(id)arg2 predicate:(id /* block */)arg3 start:(id)arg4;
- (id)init;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(id)arg4 sessionDescriptor:(id)arg5 maxSessionsLimit:(unsigned long long)arg6 sessionsInBatch:(unsigned long long)arg7 currentServerIteration:(unsigned long long)arg8 currentModelWeights:(id)arg9 localLearningRate:(float)arg10 stoppingThreshold:(float)arg11 localMinimumIterations:(unsigned long long)arg12 localGradientIterations:(unsigned long long)arg13 useOnlyAppleInternalSessions:(bool)arg14 skew:(double)arg15 threshold:(double)arg16 isMultiLabel:(bool)arg17 intercept:(bool)arg18 positiveLabel:(unsigned long long)arg19 evaluationLevel:(unsigned long long)arg20 reportScale:(bool)arg21;
- (bool)intercept;
- (bool)isMultiLabel;
- (void)loadSessionsWithBlock:(id /* block */)arg1;
- (unsigned long long)localGradientIterations;
- (float)localLearningRate;
- (unsigned long long)localMinimumIterations;
- (unsigned long long)maxSessionsLimit;
- (id)normalizeRegressor:(id)arg1;
- (id)planId;
- (unsigned long long)positiveLabel;
- (bool)reportScale;
- (id)runWithError:(id*)arg1;
- (id)sessionDescriptor;
- (float)stoppingThreshold;
- (id)store;
- (id)toPlistWithChunks:(id)arg1;
- (id)tracker;
- (bool)useOnlyAppleInternalSessions;

@end
