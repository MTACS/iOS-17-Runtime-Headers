
@interface PSGInputSuggesterServerRequestHandler : NSObject <PSGInputSuggesterProtocol> {
    _PASBundleIdResolver * _bundleIdResolver;
    NSString * _clientProcessName;
    <PSGInputSuggesterProtocol> * _clientProxy;
    PSGExperimentResolver * _experimentResolver;
    PSGInputSuggesterMetricsLogger * _metricsLogger;
}

@property (nonatomic, retain) _PASBundleIdResolver *bundleIdResolver;
@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (void)_forwardFeedbackToPortraitWithResponseItems:(id)arg1 feedbackType:(unsigned int)arg2;
- (void)_forwardFeedbackToQuickResponsesPersonalizationWithResponseItems:(id)arg1 request:(id)arg2 isSelected:(bool)arg3;
- (id)_getExperimentConfigForLogging:(id)arg1;
- (void)_logRequest:(id)arg1 config:(id)arg2;
- (id)_mlStringsFromResponseItems:(id)arg1;
- (id)_quickResponsesConfigFromPSGInputSuggestionsRequest:(id)arg1;
- (id)_quickResponsesForResponseContext:(id)arg1 conversationTurns:(id)arg2 localeIdentifier:(id)arg3 maxResponses:(unsigned long long)arg4 recipients:(id)arg5 chunkPath:(id)arg6 plistPath:(id)arg7 espressoBinFilePath:(id)arg8 vocabFilePath:(id)arg9;
- (id)_quickTypeTriggerForContext:(id)arg1 localeIdentifier:(id)arg2 modelConfigPath:(id)arg3 espressoBinFilePath:(id)arg4;
- (id)_wordBoundaryResponseForRequest:(id)arg1 config:(id)arg2;
- (id)_zkwResponseForRequest:(id)arg1 config:(id)arg2;
- (id)bundleIdResolver;
- (id)clientProcessName;
- (id)init;
- (id)initWithExperimentResolver:(id)arg1 metricsLogger:(id)arg2;
- (void)inputSuggestionsWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)logEngagement:(id)arg1 request:(id)arg2 position:(unsigned long long)arg3;
- (void)logErrorForRequest:(id)arg1 trigger:(id)arg2 errorType:(unsigned char)arg3;
- (void)logImpression:(id)arg1 request:(id)arg2;
- (void)logPrediction:(id)arg1 request:(id)arg2 latencyMillis:(double)arg3;
- (void)logSpeedMetricForLocaleIdentifier:(id)arg1 messageDurationMilliseconds:(int)arg2 messageLength:(int)arg3 messageWords:(int)arg4;
- (void)logTrigger:(id)arg1 request:(id)arg2;
- (void)setBundleIdResolver:(id)arg1;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)warmUpWithCompletion:(id /* block */)arg1;

@end
