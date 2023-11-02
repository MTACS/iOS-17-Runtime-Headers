
@interface PMLMetaTrainingVariables : NSObject <PMLPlistAndChunksSerializableProtocol> {
    unsigned long long  _currentServerIteration;
    unsigned long long  _epochsPerBatch;
    unsigned long long  _evaluationLevel;
    NSArray * _labelsToTrainOn;
    double  _lossThresholdForStopping;
    unsigned long long  _maxSessionsToTrainOn;
    <PMLNoiseStrategy> * _noiseStrategy;
    NSString * _planId;
    double  _probThreshold;
    bool  _reportScale;
    PMLSessionDescriptor * _sessionDescriptor;
    PMLTrainingStore * _store;
    bool  _summableMetricsOnly;
    unsigned long long  _trainingSetSize;
}

@property (nonatomic, readonly) unsigned long long currentServerIteration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long epochsPerBatch;
@property (nonatomic, readonly) unsigned long long evaluationLevel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *labelsToTrainOn;
@property (nonatomic, readonly) double lossThresholdForStopping;
@property (nonatomic, readonly) unsigned long long maxSessionsToTrainOn;
@property (nonatomic, readonly) <PMLNoiseStrategy> *noiseStrategy;
@property (nonatomic, readonly) NSString *planId;
@property (nonatomic, readonly) double probThreshold;
@property (nonatomic, readonly) bool reportScale;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) PMLTrainingStore *store;
@property (nonatomic, readonly) bool summableMetricsOnly;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long trainingSetSize;

- (void).cxx_destruct;
- (unsigned long long)currentServerIteration;
- (unsigned long long)epochsPerBatch;
- (unsigned long long)evaluationLevel;
- (id)init;
- (id)initWithPlanId:(id)arg1 store:(id)arg2 noiseStrategy:(id)arg3 sessionDescriptor:(id)arg4 maxSessionsToTrainOn:(unsigned long long)arg5 trainingSetSize:(unsigned long long)arg6 labelsToTrainOn:(id)arg7 currentServerIteration:(unsigned long long)arg8 lossThresholdForStopping:(double)arg9 epochsPerBatch:(unsigned long long)arg10 probThreshold:(double)arg11 evaluationLevel:(unsigned long long)arg12 reportScale:(bool)arg13 summableMetricsOnly:(bool)arg14;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMetaTrainingVariables:(id)arg1;
- (id)labelsToTrainOn;
- (double)lossThresholdForStopping;
- (unsigned long long)maxSessionsToTrainOn;
- (id)noiseStrategy;
- (id)planId;
- (double)probThreshold;
- (bool)reportScale;
- (id)sessionDescriptor;
- (id)store;
- (bool)summableMetricsOnly;
- (id)toPlistWithChunks:(id)arg1;
- (unsigned long long)trainingSetSize;

@end
