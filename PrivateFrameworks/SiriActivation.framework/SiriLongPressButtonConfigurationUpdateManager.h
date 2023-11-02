
@interface SiriLongPressButtonConfigurationUpdateManager : NSObject {
    long long  _currentLongPressBehavior;
    NSMapTable * _delegatesBySource;
    NSUserDefaults * _internalUserDefaults;
    bool  _monitoringForUpdates;
}

@property (nonatomic) long long currentLongPressBehavior;
@property (nonatomic, retain) NSMapTable *delegatesBySource;
@property (nonatomic) bool monitoringForUpdates;

- (void).cxx_destruct;
- (void)_addDelegate:(id)arg1 forSource:(id)arg2;
- (void)_setupKVOMonitoring;
- (void)_stopKVOMonitoring;
- (long long)currentLongPressBehavior;
- (void)dealloc;
- (id)delegatesBySource;
- (id)init;
- (bool)monitoringForUpdates;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCurrentLongPressBehavior:(long long)arg1;
- (void)setDelegatesBySource:(id)arg1;
- (void)setMonitoringForUpdates:(bool)arg1;
- (void)startManagingConfigurationFromSource:(id)arg1 withDelegate:(id)arg2;
- (void)stopManagingAllConfigurations;
- (void)stopManagingConfigurationFromSource:(id)arg1;
- (id)userDefaults;

@end
