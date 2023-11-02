
@interface MLModelEngine : NSObject <MLModeling> {
    MLModelConfiguration * _configuration;
    MLModelDescription * _modelDescription;
    unsigned long long  _signpostID;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;

- (void).cxx_destruct;
- (id)configuration;
- (void)enableInstrumentsTracing;
- (id)executionSchedule;
- (id)initWithDescription:(id)arg1 configuration:(id)arg2;
- (id)metadata;
- (id)modelDescription;
- (id)modelPath;
- (id)newRequestForModel:(id)arg1 inputFeatures:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)predictionTypeForKTrace;
- (id)predictionsFromBatch:(id)arg1 error:(id*)arg2;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)recordsPredictionEvent;
- (void)setModelPath:(id)arg1 modelName:(id)arg2;
- (unsigned long long)signpostID;
- (void)submitPredictionRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)supportsConcurrentSubmissions;
- (id)vectorizeInput:(id)arg1 error:(id*)arg2;

@end
