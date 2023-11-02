
@interface ATXModeEntityScorerServer : NSObject <ATXModeEntityScorerInterface, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    ATXStableContactRepresentationDatastore * _stableContactRepresentationDataStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)assignModeEntityScores:(unsigned long long)arg1 entityTypeIdentifier:(id)arg2 entityIdentifier:(id)arg3 score:(double)arg4 modeConfigurationType:(long long)arg5 reply:(id /* block */)arg6;
- (id)dataFromFileHandle:(id)arg1;
- (void)dealloc;
- (id)emptyModeEntityScore;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)arg1 modeIdentifier:(id)arg2 modeConfigurationType:(long long)arg3;
- (void)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)arg1 modeIdentifier:(id)arg2 modeConfigurationType:(long long)arg3 reply:(id /* block */)arg4;
- (id)pathForModeEntityTypeIdentifier:(id)arg1 modeIdentifier:(id)arg2 modeConfigurationType:(long long)arg3;
- (id)rankedAppsForDenyListForMode:(unsigned long long)arg1;
- (void)rankedAppsForDenyListForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (id)rankedAppsForMode:(unsigned long long)arg1;
- (void)rankedAppsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (id)rankedContactsForDenyListForMode:(unsigned long long)arg1;
- (void)rankedContactsForDenyListForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (id)rankedContactsForMode:(unsigned long long)arg1;
- (void)rankedContactsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (id)rankedEntitiesForDenyListForMode:(unsigned long long)arg1 entityTypeIdentifier:(id)arg2;
- (id)rankedEntitiesForMode:(unsigned long long)arg1 entityTypeIdentifier:(id)arg2;
- (id)rankedEntitiesForMode:(unsigned long long)arg1 entityTypeIdentifier:(id)arg2 modeConfigurationType:(long long)arg3;
- (id)rankedNotificationsForMode:(unsigned long long)arg1;
- (void)rankedNotificationsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (id)rankedWidgetsForMode:(unsigned long long)arg1;
- (void)rankedWidgetsForMode:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (bool)saveScoredEntitiesToDisk:(id)arg1 mode:(id)arg2 modeEntityTypeIdentifier:(id)arg3 modeConfigurationType:(long long)arg4;
- (void)scoreApps:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreAppsForDenyList:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreContacts:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreContactsForDenyList:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)scoreEntities:(id)arg1 entityTypeIdentifier:(id)arg2 mode:(unsigned long long)arg3;
- (void)scoreEntities:(id)arg1 entityTypeIdentifier:(id)arg2 mode:(unsigned long long)arg3 modeConfigurationType:(long long)arg4;
- (void)scoreEntitiesForDenyList:(id)arg1 entityTypeIdentifier:(id)arg2 mode:(unsigned long long)arg3;
- (void)scoreNotificationModeEntity:(id)arg1 modeEntityScores:(id)arg2;
- (void)scoreNotifications:(id)arg1 mode:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (id)scoredNotificationEntityForAppFromNotificationEntity:(id)arg1 notificationScores:(id)arg2;
- (id)scoredNotificationEntityForContactFromNotificationEntity:(id)arg1 notificationScores:(id)arg2;

@end
