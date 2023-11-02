
@interface GEOSystemMonitor : NSObject {
    geo_isolater * _isolater;
    unsigned int  _notifier;
    struct IONotificationPort { } * _notifyPortRef;
    NSObject<OS_dispatch_queue> * _queue;
    GEOObserverHashTable * _systemSleepObservers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addSystemSleepObserver:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;
- (bool)isBackgroundAppRefreshEnabledForBundleIdentifier:(id)arg1 isDisabledGlobally:(bool*)arg2;
- (void)removeSystemSleepObserver:(id)arg1;

@end
