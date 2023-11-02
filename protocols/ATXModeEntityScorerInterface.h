
@protocol ATXModeEntityScorerInterface

@required

- (void)assignModeEntityScores:(void *)arg1 entityTypeIdentifier:(void *)arg2 entityIdentifier:(void *)arg3 score:(void *)arg4 modeConfigurationType:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: unsigned long long, NSString *, NSString *, double, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(void *)arg1 modeIdentifier:(void *)arg2 modeConfigurationType:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)rankedAppsForDenyListForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rankedAppsForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rankedAppsForNotificationsForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rankedContactsForDenyListForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rankedContactsForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rankedContactsForNotificationsForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rankedNotificationsForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rankedWidgetsForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)scoreApps:(void *)arg1 mode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)scoreAppsForDenyList:(void *)arg1 mode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)scoreContacts:(void *)arg1 mode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)scoreContactsForDenyList:(void *)arg1 mode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)scoreNotifications:(void *)arg1 mode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
