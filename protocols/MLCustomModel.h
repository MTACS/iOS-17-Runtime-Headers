
@protocol MLCustomModel

@required

- (id)initWithModelDescription:(MLModelDescription *)arg1 parameterDictionary:(NSDictionary *)arg2 error:(id*)arg3;
- (<MLFeatureProvider> *)predictionFromFeatures:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id*)arg3;

@optional

- (<MLBatchProvider> *)predictionsFromBatch:(id <MLBatchProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id*)arg3;

@end
