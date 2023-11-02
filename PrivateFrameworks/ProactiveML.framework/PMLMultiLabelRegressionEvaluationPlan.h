
@interface PMLMultiLabelRegressionEvaluationPlan : NSObject <PMLPlanProtocol> {
    unsigned long long  _evaluationLevel;
    NSArray * _evaluationPoints;
    bool  _intercept;
    unsigned long long  _maxSessionsLimit;
    <PMLMultiLabelClassifierModelProtocol> * _multiLabelRegressionModel;
    NSString * _planId;
    NSArray * _positiveLabels;
    PMLSessionDescriptor * _sessionDescriptor;
    unsigned long long  _sessionsInBatch;
    PMLTrainingStore * _store;
    <PMLMultiLabelEvaluationTrackerProtocol> * _tracker;
    NSArray * _weightsArray;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long evaluationLevel;
@property (nonatomic, readonly) NSArray *evaluationPoints;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool intercept;
@property (nonatomic, readonly) unsigned long long maxSessionsLimit;
@property (nonatomic, readonly) <PMLMultiLabelClassifierModelProtocol> *multiLabelRegressionModel;
@property (nonatomic, readonly) NSString *planId;
@property (nonatomic, readonly) NSArray *positiveLabels;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) unsigned long long sessionsInBatch;
@property (nonatomic, readonly) PMLTrainingStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PMLMultiLabelEvaluationTrackerProtocol> *tracker;
@property (nonatomic, readonly) NSArray *weightsArray;

- (void).cxx_destruct;
- (id)_precisionAtEvaluationPointsForSessions:(id)arg1;
- (id)_rankedLabelsForSession:(id)arg1;
- (unsigned long long)evaluationLevel;
- (id)evaluationPoints;
- (id)init;
- (id)initWithPlanId:(id)arg1 store:(id)arg2 sessionDescriptor:(id)arg3 maxSessionsLimit:(unsigned long long)arg4 sessionsInBatch:(unsigned long long)arg5 labelAndWeights:(id)arg6 modelClassName:(id)arg7 intercept:(bool)arg8 evaluationPoints:(id)arg9 tracker:(id)arg10 evaluationLevel:(unsigned long long)arg11;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)intercept;
- (unsigned long long)maxSessionsLimit;
- (id)multiLabelRegressionModel;
- (id)planId;
- (id)positiveLabels;
- (id)runWithError:(id*)arg1;
- (id)sessionDescriptor;
- (unsigned long long)sessionsInBatch;
- (id)store;
- (id)toPlistWithChunks:(id)arg1;
- (id)tracker;
- (id)weightsArray;

@end
