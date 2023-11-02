
@interface SGPreferenceManager : NSObject {
    bool  _isQueueSuspended;
    NSObject<OS_dispatch_queue> * _settingsUpdateQueue;
    NSUserDefaults * _suggestionsDefaults;
}

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_resumeNotificationQueue;
- (void)_suspendNotificationQueue;
- (id)init;
- (int)registerBlock:(id /* block */)arg1;

@end
