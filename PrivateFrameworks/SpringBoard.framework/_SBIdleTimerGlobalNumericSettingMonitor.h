
@interface _SBIdleTimerGlobalNumericSettingMonitor : _SBIdleTimerGlobalSettingMonitor {
    id /* block */  _fetchSettingFromSource;
    NSNumber * _settingCache;
}

@property (nonatomic, readonly) NSNumber *numericValue;

- (void).cxx_destruct;
- (void)_settingChanged:(id)arg1;
- (bool)_updateCache;
- (void)dealloc;
- (id)formattedValue;
- (id)initWithLabel:(id)arg1 delegate:(id)arg2 updatingForNotification:(id)arg3 fetchingWith:(id /* block */)arg4;
- (id)numericValue;

@end
