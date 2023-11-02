
@interface NTKBundleComplicationMigrationCompanionDevicePrewarmer : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _queue_failureCount;
    bool  _queue_servicing;
}

+ (void)run;

- (void).cxx_destruct;
- (unsigned long long)_failureCountForDevice:(id)arg1;
- (void)_handlePairedNotification;
- (void)_handleUnpairedNotification;
- (void)_incrementFailureCountForDevice:(id)arg1;
- (id)_nextDeviceToPrewarm;
- (void)_purgeCaches;
- (void)_queue_prewarmIfNeeded;
- (id)init;

@end
