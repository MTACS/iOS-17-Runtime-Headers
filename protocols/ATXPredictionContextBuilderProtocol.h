
@protocol ATXPredictionContextBuilderProtocol

@required

- (ATXPredictionContext *)predictionContextForCurrentContext;
- (ATXPredictionContext *)updateContextStreamAndReturnPredictionContextForCurrentContext;

@end
