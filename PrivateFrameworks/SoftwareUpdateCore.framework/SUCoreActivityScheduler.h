
@interface SUCoreActivityScheduler : NSObject {
    NSMutableArray * _activityArray;
    <_CDContext> * _context;
    SUCorePersistedState * _persistedState;
    NSMutableArray * _registrationArray;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_contextStoreRegisteredActivities;
- (id)_copyRegisteredActivities;
- (void)_loadPersistedRegistrationMap;
- (void)_queue_addRegistration:(id)arg1 forActivity:(id)arg2;
- (void)_queue_persistRegistrationMap;
- (id)_queue_registrationForActivity:(id)arg1;
- (void)_queue_removeRegistrationForActivity:(id)arg1;
- (void)_registerRegistration:(id)arg1 forActivity:(id)arg2;
- (void)_unregisterAllActivitiesWithName:(id)arg1;
- (void)_unregisterRegistrationForActivity:(id)arg1;
- (id)copyScheduledActivities;
- (id)initWithPersistedStatePath:(id)arg1;
- (void)scheduleActivity:(id)arg1 withHandler:(id /* block */)arg2;
- (id)sharedMemoryStore;
- (void)unregisterActivitiesWithName:(id)arg1;
- (void)unregisterActivity:(id)arg1;

@end
