
@protocol ATXModeEntityScorerProtocol

@required

- (NSArray *)rankedAppsForDenyListForMode:(unsigned long long)arg1;
- (void)rankedAppsForDenyListForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)rankedAppsForMode:(unsigned long long)arg1;
- (void)rankedAppsForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)rankedAppsForNotificationsForMode:(unsigned long long)arg1;
- (void)rankedAppsForNotificationsForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)rankedContactsForDenyListForMode:(unsigned long long)arg1;
- (void)rankedContactsForDenyListForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rankedContactsForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)rankedContactsForNotificationsForMode:(unsigned long long)arg1;
- (void)rankedContactsForNotificationsForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)rankedNotificationsForMode:(unsigned long long)arg1;
- (void)rankedNotificationsForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)rankedWidgetsForMode:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)scoreApps:(NSArray *)arg1 mode:(unsigned long long)arg2;
- (void)scoreApps:(void *)arg1 mode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)scoreAppsForDenyList:(NSArray *)arg1 mode:(unsigned long long)arg2;
- (void)scoreAppsForDenyList:(void *)arg1 mode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)scoreContacts:(void *)arg1 mode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)scoreContactsForDenyList:(NSArray *)arg1 mode:(unsigned long long)arg2;
- (void)scoreContactsForDenyList:(void *)arg1 mode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)scoreNotifications:(NSArray *)arg1 mode:(unsigned long long)arg2;
- (void)scoreNotifications:(void *)arg1 mode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)scoreUserNotifications:(NSArray *)arg1 mode:(unsigned long long)arg2;
- (void)scoreUserNotifications:(void *)arg1 mode:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
