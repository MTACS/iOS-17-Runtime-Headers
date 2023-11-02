
@interface TITypingSessionAlignmentConfidenceAnalyzer : NSObject <TITypingSessionAnalyzing> {
    TITypingSessionAligned * _alignedSession;
    NSMutableDictionary * _payload;
    TITypingSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_generateCountsOfWordsForAlignmentConfidences;
- (id)_generateFeatureUsageMetricsForContext:(id)arg1;
- (id)_generateMetadataForTypingSessionFromContext:(id)arg1;
- (id)_generatePercentageOfTotalWordsForAlignmentConfidencesFromRawCounts:(id)arg1;
- (bool)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3;
- (void)dispatchEventWithPayload:(id)arg1;
- (unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2;
- (id)init;
- (void)registerEventSpec;

@end
