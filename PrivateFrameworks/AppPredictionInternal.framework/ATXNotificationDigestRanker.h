
@interface ATXNotificationDigestRanker : NSObject {
    ATXNotificationDigestRankingConstants * _c;
    <ATXNotificationDigestFeedbackProtocol> * _digestFeedback;
}

- (void).cxx_destruct;
- (id)appsForNotificationGroups:(id)arg1;
- (id)chooseAppsForMarquee:(id)arg1;
- (id)createDigestForNotificationStacks:(id)arg1 outError:(id*)arg2;
- (id)init;
- (id)initWithDigestFeedback:(id)arg1;
- (id)sampleAppsForMarquee:(id)arg1 numToSample:(unsigned long long)arg2 hasAutomaticMarqueeBeenUsedFlag:(bool*)arg3;

@end
