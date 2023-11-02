
@interface ATXModeEntityScorerClient : NSObject <ATXModeEntityScorerInterface> {
    NSXPCConnection * _xpcConnection;
}

- (void).cxx_destruct;
- (void)assignModeEntityScores:(unsigned long long)arg1 entityTypeIdentifier:(id)arg2 entityIdentifier:(id)arg3 score:(double)arg4 modeConfigurationType:(long long)arg5 reply:(id /* block */)arg6;
- (void)dealloc;
- (id)init;
- (void)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)arg1 modeIdentifier:(id)arg2 modeConfigurationType:(long long)arg3 reply:(id /* block */)arg4;
- (void)rankedAppsForDenyListForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)rankedAppsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)rankedContactsForDenyListForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)rankedContactsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)rankedNotificationsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)rankedWidgetsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)scoreApps:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreAppsForDenyList:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreContacts:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreContactsForDenyList:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreNotifications:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;

@end
