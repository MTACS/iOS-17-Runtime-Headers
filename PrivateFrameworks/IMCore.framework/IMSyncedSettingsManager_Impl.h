
@interface IMSyncedSettingsManager_Impl : NSObject {
    void connection;
    void daemonController;
    void notificationCenter;
}

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 key:(long long)arg3;
- (void)dealloc;
- (void)didUpdateSettingsKeys:(id)arg1;
- (id)init;
- (id)initWithDaemonController:(id)arg1 connection:(id)arg2 notificationCenter:(id)arg3;
- (void)removeObserver:(id)arg1 key:(long long)arg2;
- (void)setSettingValue:(id)arg1 forKey:(long long)arg2;
- (void)settingValueForKey:(long long)arg1 reply:(id /* block */)arg2;

@end
