
@interface ATXLockscreenSuggestionSender : NSObject {
    ATXActionNotificationServer * _actionNotificationServer;
    ATXLockscreenBlacklist * _lockscreenBlacklist;
    NSUserDefaults * _userDefaults;
}

- (void).cxx_destruct;
- (id)_cachedExecutableIdentifier;
- (void)_updateCachedExecutableIdentifierWithSuggestion:(id)arg1;
- (void)blendingLayerDidUpdateLockscreenUICache:(id)arg1;
- (id)init;
- (id)initWithLockscreenBlacklist:(id)arg1 actionNotificationServer:(id)arg2 userDefaults:(id)arg3;

@end
