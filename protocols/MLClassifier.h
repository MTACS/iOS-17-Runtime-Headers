
@protocol MLClassifier <MLModeling>

@required

- (NSArray *)classLabels;
- (MLClassifierResult *)classify:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id*)arg3;

@end
