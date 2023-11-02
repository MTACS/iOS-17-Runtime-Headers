
@interface ATDeviceDiskUsageProvider : NSObject {
    ATClientController * _clientController;
    ATUserDefaults * _defaults;
    NSMutableDictionary * _diskUsageInfo;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _usageUpdateCompletionHandlers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cacheDeletePurgeableStorageData;
- (id)_diskUsageForDataClass:(id)arg1;
- (id)getCurrentUsage;
- (void)getCurrentUsageWithUpdatedDataClasses:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getUpdatedUsageWithCompletion:(id /* block */)arg1;
- (id)init;

@end
