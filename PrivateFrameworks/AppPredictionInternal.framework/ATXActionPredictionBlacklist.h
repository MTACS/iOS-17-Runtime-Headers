
@interface ATXActionPredictionBlacklist : NSObject {
    ATXAppPredictionBlacklist * _appPredictionBlacklist;
    id  _blacklistNotificationToken;
    _PASLock * _lock;
    int  _prefsChangeNotificationToken;
}

+ (id)sharedInstanceWithAppPredictionBlacklist;
+ (id)sharedInstanceWithoutAppPredictionBlacklist;

- (void).cxx_destruct;
- (void)_handlePrefsChange;
- (id)_prefsDisabledApps;
- (void)addToBlacklists:(id)arg1 blacklistAppList:(id)arg2 blacklistActionList:(id)arg3 blacklistAppAndActionList:(id)arg4;
- (void)dealloc;
- (id)disabledBundlesInSettings;
- (id)homeScreenDisabledShortcutsInSettings;
- (id)init;
- (id)initWithAppPredictionBlacklist:(id)arg1;
- (bool)isBundleIdBlacklisted:(id)arg1;
- (void)setBlacklistFromAssetData:(id)arg1 predictionBlacklist:(id)arg2 shortcutBlacklist:(id)arg3 primaryShortcutBlacklist:(id)arg4;
- (bool)shouldPredictBundleId:(id)arg1 action:(id)arg2;
- (bool)shouldPredictBundleIdForShortcuts:(id)arg1 action:(id)arg2;
- (bool)shouldPredictBundleIdForShortcuts:(id)arg1 action:(id)arg2 forPrimaryShortcuts:(bool)arg3;
- (id)shouldPredictBundleIdHelper:(id)arg1 action:(id)arg2;

@end
