
@interface _SBIdleTimerGlobalBoolSettingMonitor : _SBIdleTimerGlobalNumericSettingMonitor

@property (nonatomic, readonly) bool boolValue;

- (bool)boolValue;
- (id)formattedValue;
- (id)initWithLabel:(id)arg1 delegate:(id)arg2 updatingForNotification:(id)arg3 fetchingWith:(id /* block */)arg4;

@end
