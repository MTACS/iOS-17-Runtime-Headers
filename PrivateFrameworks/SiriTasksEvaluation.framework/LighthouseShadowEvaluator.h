
@interface LighthouseShadowEvaluator : NSObject <ODCurareDataProviderProtocol, ODCurareEvaluatorProtocol, ODCurarePersonalizationProtocol> {
    NSMutableArray * _evaluationResults;
    NSMutableDictionary * _jsonSELFResults;
}

@property (nonatomic, retain) NSMutableArray *evaluationResults;
@property (nonatomic, retain) NSMutableDictionary *jsonSELFResults;

- (void).cxx_destruct;
- (id)evaluateAbandonedSiriTasks:(id)arg1;
- (id)evaluateAppLaunchedTasks:(id)arg1 startTime:(id)arg2;
- (bool)evaluateTaskSuccess:(id)arg1 finalInteraction:(id)arg2;
- (id)evaluateWithModel:(id)arg1;
- (id)evaluateWithPSEBasedModel:(id)arg1;
- (id)evaluationResults;
- (id)fetchSiriIntentEvents:(id)arg1;
- (bool)findInteraction:(id)arg1;
- (id)generateCandidateModels:(id)arg1;
- (id)getDateString:(id)arg1;
- (id)getEvaluationResults;
- (long long)getIntentEventType:(id)arg1;
- (id)getLastEvaluationTime:(id)arg1;
- (id)getTaskConfigurationFromInteractionID:(id)arg1;
- (id)init;
- (bool)isPSEBasedCandidateModel:(id)arg1;
- (bool)isSuccess:(id)arg1 intentType:(id)arg2 intentResultType:(id)arg3;
- (id)jsonSELFResults;
- (bool)performSiriEvaluationTaskWithTaskName:(id)arg1 bmStreamIdentifier:(id)arg2 outError:(id*)arg3;
- (id)personalizeModel:(id)arg1;
- (void)setEvaluationResults:(id)arg1;
- (void)setJsonSELFResults:(id)arg1;

@end
