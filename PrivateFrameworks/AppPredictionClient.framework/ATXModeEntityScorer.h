
@interface ATXModeEntityScorer : NSObject <ATXModeEntityScorerProtocol> {
    <ATXModeEntityScorerInterface> * _modeEntityScorerClient;
}

- (void).cxx_destruct;
- (void)_attachNotificationEntityScores:(id)arg1 toNotifications:(id)arg2;
- (bool)assignModeEntityScores:(unsigned long long)arg1 entityTypeIdentifier:(id)arg2 entityIdentifier:(id)arg3 score:(double)arg4 modeConfigurationType:(long long)arg5;
- (void)copyScoreMetadataFromContactModeEntities:(id)arg1 toContactModeEntities:(id)arg2;
- (void)copyScoreMetadataFromEntities:(id)arg1 toEntities:(id)arg2;
- (id)init;
- (id)initWithModeEntityScorerClient:(id)arg1;
- (id)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)arg1 modeIdentifier:(id)arg2 modeConfigurationType:(long long)arg3;
- (id)rankedAppsForDenyListForMode:(unsigned long long)arg1;
- (void)rankedAppsForDenyListForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (id)rankedAppsForMode:(unsigned long long)arg1;
- (void)rankedAppsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (id)rankedAppsForNotificationsForMode:(unsigned long long)arg1;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (id)rankedContactsForDenyListForMode:(unsigned long long)arg1;
- (void)rankedContactsForDenyListForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)rankedContactsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (id)rankedContactsForNotificationsForMode:(unsigned long long)arg1;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (id)rankedNotificationsForMode:(unsigned long long)arg1;
- (void)rankedNotificationsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)rankedWidgetsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)scoreApps:(id)arg1 mode:(unsigned long long)arg2;
- (void)scoreApps:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreAppsForDenyList:(id)arg1 mode:(unsigned long long)arg2;
- (void)scoreAppsForDenyList:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreContacts:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreContactsForDenyList:(id)arg1 mode:(unsigned long long)arg2;
- (void)scoreContactsForDenyList:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreNotifications:(id)arg1 mode:(unsigned long long)arg2;
- (void)scoreNotifications:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreUserNotifications:(id)arg1 mode:(unsigned long long)arg2;
- (void)scoreUserNotifications:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;

@end
