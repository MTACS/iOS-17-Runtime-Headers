
@protocol SWSystemSleepObserver <NSObject>

@optional

- (void)systemSleepMonitor:(void *)arg1 prepareForSleepWithCompletion:(void *)arg2; // needs 2 arg types, found 6: SWSystemSleepMonitor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)systemSleepMonitor:(void *)arg1 sleepRequestedWithResult:(void *)arg2; // needs 2 arg types, found 8: SWSystemSleepMonitor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, SWPreventSystemSleepAssertion *, id /* block */, bool, NSString *, void*
- (void)systemSleepMonitorDidWakeFromSleep:(SWSystemSleepMonitor *)arg1;
- (void)systemSleepMonitorSleepRequestAborted:(SWSystemSleepMonitor *)arg1;
- (void)systemSleepMonitorWillWakeFromSleep:(SWSystemSleepMonitor *)arg1;

@end
