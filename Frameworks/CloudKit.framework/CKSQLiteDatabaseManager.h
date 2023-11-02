
@interface CKSQLiteDatabaseManager : CKSQLiteSharedTableGroup {
    CKSQLiteDatabaseActivities * _activities;
    NSObject<OS_dispatch_queue> * _activityQueue;
    NSObject<OS_dispatch_source> * _activityTimer;
    NSDate * _nextActivityDate;
    CKSQLiteDatabaseRegistry * _registry;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _timerLock;
}

+ (id)managerInDatabase:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)activitiesStartingBeforeDate:(id)arg1;
- (id)activityEntryForTarget:(id)arg1 error:(id*)arg2;
- (id)addActivityTriggerWithTarget:(id)arg1 date:(id)arg2 coalescingInterval:(double)arg3 minimumSeparation:(double)arg4;
- (id)createTables:(id*)arg1;
- (void)databaseWasRemoved:(id)arg1;
- (id)earliestActivityDate;
- (id)finishInitializing;
- (void)flush;
- (id)init;
- (id)migrateDataFromGroup:(id)arg1;
- (id)nextActivityDate;
- (id)nextActivityDateForTarget:(id)arg1;
- (id)registerDatabase:(id)arg1;
- (void)runActivities:(id)arg1;
- (void)scheduleActivityDate:(id)arg1;
- (void)setSchedulingDataInActivity:(id)arg1 date:(id)arg2 coalescingInterval:(double)arg3 minimumSeparation:(double)arg4;
- (void)target:(id)arg1 group:(id)arg2 didRunActivity:(id)arg3;
- (id)target:(id)arg1 group:(id)arg2 willRunActivity:(id)arg3;
- (void)waitForComplete;
- (void)waitForTargetActivityComplete:(id)arg1;

@end
