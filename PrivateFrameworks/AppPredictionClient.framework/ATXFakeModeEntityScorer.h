
@interface ATXFakeModeEntityScorer : NSObject <ATXModeEntityScorerProtocol> {
    double  _defaultAppScore;
    double  _defaultContactScore;
    NSMutableDictionary * _entityToScoreMapping;
    NSMutableDictionary * _entityToScoreMappingForDenyList;
}

+ (unsigned long long)atxModeFromString:(id)arg1;

- (void).cxx_destruct;
- (id)init;
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
- (void)setDefaultScoreForAllApps:(double)arg1;
- (void)setDefaultScoreForAllContacts:(double)arg1;
- (void)setScoreForBundleId:(id)arg1 score:(double)arg2;
- (void)setScoreForContactId:(id)arg1 score:(double)arg2;
- (void)setScoreForEntity:(id)arg1 score:(double)arg2;

@end
