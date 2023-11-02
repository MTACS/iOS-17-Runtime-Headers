
@interface PPAppLaunchMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _contextHandlerQueue;
    _PASLock * _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)deregisterForAppLaunchWithToken:(id)arg1;
- (id)init;
- (id)registerForAppLaunchWithBundleId:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;

@end
