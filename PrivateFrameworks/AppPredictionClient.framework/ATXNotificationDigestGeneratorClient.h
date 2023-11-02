
@interface ATXNotificationDigestGeneratorClient : NSObject {
    <ATXNotificationDigestRankerInterface> * _digestRankerClient;
    ATXUserNotificationDigestBiomeStream * _digestStream;
    ATXMissedNotificationRankingBiomeStream * _missedNotificationRankingStream;
    ATXDNDModeConfigurationClient * _modeConfigurationClient;
    <ATXModeEntityScorerProtocol> * _modeEntityScorer;
}

- (void).cxx_destruct;
- (id)_flattenNestedNotificationArrays:(id)arg1;
- (id)digestRankerClient;
- (void)generateDigestForAppGroupedNotificationStacks:(id)arg1 maxGlobalMarqueeGroups:(unsigned long long)arg2 maxAppMarqueeGroups:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)generateDigestForNotificationArrays:(id)arg1 reply:(id /* block */)arg2;
- (id)generateDigestForNotifications:(id)arg1 digestTime:(long long)arg2;
- (void)generateMissedNotificationRankingForNotificationArrays:(id)arg1 atxMode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)generateMissedNotificationRankingForNotificationArrays:(id)arg1 modeUUID:(id)arg2 reply:(id /* block */)arg3;
- (id)init;
- (id)initWithDigestRankerClient:(id)arg1;
- (id)initWithMissedNotificationRankingBiomeStream:(id)arg1 notificationDigestBiomeStream:(id)arg2 modeConfigurationClient:(id)arg3 modeEntityScorer:(id)arg4 digestRankerClient:(id)arg5;
- (id)models;
- (id)overallDigestScoreModel;

@end
