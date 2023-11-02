
@interface SBBackgroundMultitaskingManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_appToBackgroundTasks;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_appProcessStateDidChange:(id)arg1;
- (void)_backgroundTaskFinished:(id)arg1 forAppInfo:(id)arg2;
- (id)_createBackgroundFetchTaskForAppInfo:(id)arg1;
- (id)init;

@end
