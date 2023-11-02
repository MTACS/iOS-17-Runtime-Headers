
@protocol _ATXFeedbackProtocol

@required

- (double)currentAlpha;
- (double)currentBeta;
- (void)decayCounts;
- (void)feedbackLaunchedWithConsumerType:(unsigned long long)arg1 forBundleId:(NSString *)arg2 rejected:(NSArray *)arg3 context:(ATXPredictionContext *)arg4;
- (void)feedbackLaunchedWithConsumerType:(unsigned long long)arg1 forBundleId:(NSString *)arg2 rejected:(NSArray *)arg3 explicitlyRejected:(NSArray *)arg4 context:(ATXPredictionContext *)arg5;
- (void)removeFeedbackForBundle:(NSString *)arg1;
- (void)resetData;

@optional

- (void)doDecayAtTime:(double)arg1;

@end
