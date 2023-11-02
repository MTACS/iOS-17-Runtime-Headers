
@protocol SNMLModel <NSObject>

@required

- (MLModelDescription *)modelDescription;
- (<MLFeatureProvider> *)predictionFromFeatures:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id*)arg3;

@end
