
@protocol MLRegressor <MLModeling>

@required

- (MLRegressorResult *)regress:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id*)arg3;

@end
