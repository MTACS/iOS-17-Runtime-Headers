
@protocol MLPredictionRequest <NSObject>

@required

- (void)cancel;
- (<MLFeatureProvider> *)inputFeatures;
- (bool)isCancelled;
- (MLPredictionOptions *)predictionOptions;
- (void)submitWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MLFeatureProvider> *, NSError *, void*

@end
