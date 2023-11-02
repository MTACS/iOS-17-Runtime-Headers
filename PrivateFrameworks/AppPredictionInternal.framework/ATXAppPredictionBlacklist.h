
@interface ATXAppPredictionBlacklist : NSObject {
    id  _blacklistNotificationToken;
    _ATXGlobals * _globals;
    _PASLock * _lock;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSUserDefaults * _userDefaults;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_createBlacklistFromPreferencesDisabledApps;
- (void)_listenForUpdates;
- (void)_performMigrationsIfNeeded;
- (void)_resetBlacklistWithSet:(id)arg1;
- (void)_updateBlacklist;
- (void)_updateBlacklistFromGlobalsBlacklistedApps;
- (void)dealloc;
- (void)deregisterPrefsChangeHandlerWithToken:(int)arg1;
- (id)disabledBundleIds;
- (id)init;
- (id)initWithUserDefaults:(id)arg1 globals:(id)arg2;
- (int)registerPrefsChangeHandler:(id /* block */)arg1;

@end
