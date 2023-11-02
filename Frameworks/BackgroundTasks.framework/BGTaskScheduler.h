
@interface BGTaskScheduler : NSObject <_DASActivityBackgroundTasksSchedulerDelegate> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  __lock;
    NSSet * __permittedIdentifiers;
    NSMutableSet * __queuedExpiredLaunchActivities;
    NSMutableSet * __queuedLaunchActivities;
    NSMutableDictionary * __registrations;
    NSMapTable * __runningTasksMap;
    <_DASActivityBackgroundTasksScheduler> * __scheduler;
}

@property (setter=_setLock:, nonatomic) struct os_unfair_lock_s { unsigned int x1; } _lock;
@property (setter=_setPermittedIdentifiers:, nonatomic, retain) NSSet *_permittedIdentifiers;
@property (setter=_setQueuedExpiredLaunchActivities:, nonatomic, retain) NSMutableSet *_queuedExpiredLaunchActivities;
@property (setter=_setQueuedLaunchActivities:, nonatomic, retain) NSMutableSet *_queuedLaunchActivities;
@property (setter=_setRegistrations:, nonatomic, retain) NSMutableDictionary *_registrations;
@property (setter=_setRunningTasksMap:, nonatomic, retain) NSMapTable *_runningTasksMap;
@property (setter=_setScheduler:, nonatomic, retain) <_DASActivityBackgroundTasksScheduler> *_scheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_applicationDidFinishLaunching:(id)arg1;
+ (bool)_isRunningInExtension;
+ (id)_log;
+ (id)_sharedSchedulerIfExists;
+ (void)load;
+ (id)sharedScheduler;

- (void).cxx_destruct;
- (void)_callExpirationHandlersForActivities:(id)arg1 shouldQueue:(bool)arg2;
- (void)_callRegisteredHandlersForActivities:(id)arg1;
- (void)_handleAppLaunch;
- (id)_init;
- (bool)_isRunningTaskOfClass:(Class)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })_lock;
- (id)_permittedIdentifiers;
- (id)_queueForRegistration:(id)arg1;
- (id)_queuedExpiredLaunchActivities;
- (id)_queuedLaunchActivities;
- (id)_registrations;
- (void)_runTask:(id)arg1 registration:(id)arg2;
- (id)_runningTasks;
- (id)_runningTasksMap;
- (id)_scheduler;
- (void)_setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)_setPermittedIdentifiers:(id)arg1;
- (void)_setQueuedExpiredLaunchActivities:(id)arg1;
- (void)_setQueuedLaunchActivities:(id)arg1;
- (void)_setRegistrations:(id)arg1;
- (void)_setRunningTasksMap:(id)arg1;
- (void)_setScheduler:(id)arg1;
- (void)_simulateExpirationForTaskWithIdentifier:(id)arg1;
- (void)_simulateLaunchForTaskWithIdentifier:(id)arg1;
- (bool)_unsafe_registerForTaskWithIdentifier:(id)arg1 usingQueue:(id)arg2 launchHandler:(id /* block */)arg3;
- (id)_unsafe_registrationForIdentifier:(id)arg1;
- (bool)_unsafe_submitTaskRequest:(id)arg1 error:(id*)arg2;
- (void)cancelAllTaskRequests;
- (void)cancelTaskRequestWithIdentifier:(id)arg1;
- (void)getPendingTaskRequestsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (bool)registerForTaskWithIdentifier:(id)arg1 usingQueue:(id)arg2 launchHandler:(id /* block */)arg3;
- (void)scheduler:(id)arg1 handleLaunchForActivities:(id)arg2;
- (void)scheduler:(id)arg1 willExpireActivities:(id)arg2;
- (bool)submitTaskRequest:(id)arg1 error:(id*)arg2;

@end
