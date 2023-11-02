
@interface HDCloudSyncPeriodicActivityScheduler : NSObject {
    bool  _allowLiteSync;
    HDDaemon * _daemon;
    id /* block */  _isSleepFocusOn;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HDCloudSyncStatus * _lock_cloudSyncStatus;
}

@property (nonatomic, copy) id /* block */ isSleepFocusOn;
@property (nonatomic, readonly, copy) HDCloudSyncStatus *syncStatus;

- (void).cxx_destruct;
- (long long)baseIntervalForActivityType:(long long)arg1;
- (id)initWithDaemon:(id)arg1;
- (id /* block */)isSleepFocusOn;
- (const char *)priorityForActivityType:(long long)arg1;
- (bool)requireInexpensiveNetworking;
- (void)setIsSleepFocusOn:(id /* block */)arg1;
- (void)setLastSuccessfulLitePushDate:(id)arg1;
- (void)setLastSuccessfulPullDate:(id)arg1;
- (void)setLastSuccessfulPushDate:(id)arg1;
- (bool)shouldRegisterForPeriodicSyncActivities;
- (bool)shouldRunLiteSync;
- (id)syncContextForPeriodicActivity:(id)arg1;
- (id)syncStatus;
- (void)unitTest_setAllowLiteSync:(bool)arg1;

@end
