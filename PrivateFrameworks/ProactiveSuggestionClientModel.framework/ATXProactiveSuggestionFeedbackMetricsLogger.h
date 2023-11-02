
@interface ATXProactiveSuggestionFeedbackMetricsLogger : NSObject {
    <ATXUniversalBlendingLayerHyperParametersProtocol> * _hyperParameters;
    <ATXPETEventTracker2Protocol> * _petEventTracker;
}

@property (nonatomic, readonly) <ATXUniversalBlendingLayerHyperParametersProtocol> *hyperParameters;
@property (nonatomic, readonly) <ATXPETEventTracker2Protocol> *petEventTracker;

// Image: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel

- (void).cxx_destruct;
- (void)handleNewFeedbackResult:(id)arg1 previousSessionId:(id)arg2;
- (id)hyperParameters;
- (id)init;
- (id)initWithHyperParameters:(id)arg1;
- (id)initWithPETEventTracker:(id)arg1 hyperParameters:(id)arg2;
- (void)logClientModelClientCacheAgeMetricForFeedbackResult:(id)arg1;
- (void)logClientModelEngagementMetricForFeedbackResult:(id)arg1;
- (void)logClientModelUICacheAgeMetricForFeedbackResult:(id)arg1;
- (void)logMetricsWithTestResults:(id)arg1;
- (void)logMetricsWithUIFeedbackQuery:(id)arg1;
- (void)logSessionEngagementMetricForFeedbackResult:(id)arg1;
- (id)petEventTracker;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (id)bookmarkURLPathForConsumerSubType:(unsigned char)arg1;
- (void)logMetricsForiOSUIFeedbackQueries;

@end
