
@interface ATXAppSessionModeLoggingHelper : NSObject

- (id)appLaunchesSinceDate:(id)arg1;
- (id)coalesceAppLaunches:(id)arg1;
- (bool)shouldCoalesceLaunch:(id)arg1 nextLaunch:(id)arg2;
- (id)stripStoreEvent:(id)arg1;

@end
