
@interface ATXAppGroupedNotificationDigestRanker : NSObject {
    ATXNotificationDigestRankingConstants * _c;
    <ATXNotificationDigestFeedbackProtocol> * _digestFeedback;
}

- (void).cxx_destruct;
- (id)bfsSelectGlobalMarqueeGroupsFromApps:(id)arg1 maxCount:(unsigned long long)arg2 groupFilter:(id /* block */)arg3;
- (id)createDigestForAppGroupedNotificationStacks:(id)arg1 maxGlobalMarqueeGroups:(unsigned long long)arg2 maxAppMarqueeGroups:(unsigned long long)arg3 outError:(id*)arg4;
- (id)getRankedAppsFromAppGroupedNotificationStacks:(id)arg1 maxAppMarqueeGroups:(unsigned long long)arg2;
- (id)init;
- (id)initWithDigestFeedback:(id)arg1;

@end
