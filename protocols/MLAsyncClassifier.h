
@protocol MLAsyncClassifier <MLClassifier>

@required

- (void)classify:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: <MLFeatureProvider> *, MLPredictionOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MLClassifierResult *, NSError *, void*

@end
