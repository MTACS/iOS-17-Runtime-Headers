
@interface SBTodayWidgetXCodeDebuggingUtility : NSObject {
    SBLockScreenManager * _lockScreenManager;
    SBMainDisplayPolicyAggregator * _policyAggregator;
}

- (void).cxx_destruct;
- (void)_reallyLaunchTodayViewFromCurrentContextWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)launchTodayViewFromCurrentContextWithCompletion:(id /* block */)arg1;

@end
