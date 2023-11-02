
@interface UNSApplicationLauncher : NSObject {
    NSMutableDictionary * _bundleIdentifierToAssertions;
    UNSLocationMonitor * _locationMonitor;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_queue_acquireActivityKitAssertionIfNeededForBundleIdentifier:(id)arg1 withResponse:(id)arg2;
- (id)_queue_actionForNotificationResponse:(id)arg1 bundleIdentifier:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_queue_addProcessAssertion:(id)arg1 forBundleID:(id)arg2;
- (void)_queue_backgroundLaunchApplication:(id)arg1 withResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_queue_foregroundLaunchApplication:(id)arg1 withResponse:(id)arg2 launchImageName:(id)arg3 origin:(id)arg4 endpoint:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)_queue_newProcessAssertionForBundleID:(id)arg1 PID:(int)arg2 flags:(unsigned int)arg3 reason:(unsigned int)arg4 name:(id)arg5 watchdogInterval:(double)arg6 acquisitionHandler:(id /* block */)arg7 invalidationHandler:(id /* block */)arg8;
- (void)_queue_removeAllProcessAssertionsAndInvalidate:(bool)arg1;
- (void)_queue_removeProcessAssertion:(id)arg1 forBundleID:(id)arg2 invalidate:(bool)arg3;
- (void)_queue_removeProcessAssertionsHavingReason:(unsigned int)arg1 forBundleID:(id)arg2 invalidate:(bool)arg3;
- (void)_queue_willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_removeAllProcessAssertionsAndInvalidate:(bool)arg1;
- (void)backgroundLaunchApplication:(id)arg1 withResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (void)foregroundLaunchApplication:(id)arg1 withResponse:(id)arg2 launchImageName:(id)arg3 origin:(id)arg4 endpoint:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)initWithLocationMonitor:(id)arg1;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
