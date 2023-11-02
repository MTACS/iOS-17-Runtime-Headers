
@interface PPUniversalSearchFeedbackListener : NSObject <SFFeedbackListener> {
    PPNamedEntityStore * _entityStore;
    PPSpotlightSessionState * _sessionState;
    PPTopicStore * _topicStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)fetchFeedbackCSSIParsedResults:(id)arg1 feedbackBundleId:(id)arg2 queryId:(long long)arg3;
- (id)init;
- (id)protectionClassForBundleId:(id)arg1;
- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;
- (void)sendFeedbackWithEngagementStrings:(id)arg1 rejectionStrings:(id)arg2 store:(id)arg3;
- (void)sendMetricsFeedback:(unsigned long long)arg1 engagedCSSICount:(unsigned long long)arg2;

@end
