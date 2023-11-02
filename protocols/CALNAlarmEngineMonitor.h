
@protocol CALNAlarmEngineMonitor <NSObject>

@required

- (void)addAlarmsFiredObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeAlarmsFiredObserver:(id)arg1;

@end
