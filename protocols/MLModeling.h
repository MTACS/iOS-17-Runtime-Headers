
@protocol MLModeling <NSObject>

@required

- (MLModelConfiguration *)configuration;
- (void)enableInstrumentsTracing;
- (MLModelExecutionSchedule *)executionSchedule;
- (MLModelMetadata *)metadata;
- (MLModelDescription *)modelDescription;
- (MLLayerPath *)modelPath;
- (<MLPredictionRequest> *)newRequestForModel:(MLModel *)arg1 inputFeatures:(id <MLFeatureProvider>)arg2 options:(MLPredictionOptions *)arg3 error:(id*)arg4;
- (id)parameterValueForKey:(MLParameterKey *)arg1 error:(id*)arg2;
- (<MLFeatureProvider> *)predictionFromFeatures:(id <MLFeatureProvider>)arg1 error:(id*)arg2;
- (<MLFeatureProvider> *)predictionFromFeatures:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id*)arg3;
- (unsigned long long)predictionTypeForKTrace;
- (<MLBatchProvider> *)predictionsFromBatch:(id <MLBatchProvider>)arg1 error:(id*)arg2;
- (<MLBatchProvider> *)predictionsFromBatch:(id <MLBatchProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id*)arg3;
- (bool)recordsPredictionEvent;
- (void)setModelPath:(MLLayerPath *)arg1 modelName:(NSString *)arg2;
- (unsigned long long)signpostID;
- (void)submitPredictionRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: <MLPredictionRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MLFeatureProvider> *, NSError *, void*
- (bool)supportsConcurrentSubmissions;

@end
