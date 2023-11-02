
@protocol CPLSyncSessionPredictorObserver <NSObject>

@required

- (void)predictor:(CPLSyncSessionPredictor *)arg1 changedPrediction:(CPLSyncSessionPrediction *)arg2;

@end
