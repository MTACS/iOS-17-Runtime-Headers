
@interface SUCoreXPCActivityManager : NSObject {
    NSMutableArray * _activities;
    NSObject<OS_dispatch_queue> * _activityQueue;
    SUCoreLog * _logger;
    NSString * _managerName;
    NSObject<OS_dispatch_queue> * _managerQueue;
    SUCorePersistedState * _persistedState;
    NSObject<OS_dispatch_queue> * _persistedStateDispatchQueue;
}

@property (nonatomic, retain) NSMutableArray *activities;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *activityQueue;
@property (nonatomic, retain) SUCoreLog *logger;
@property (nonatomic, readonly, retain) NSString *managerName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *managerQueue;
@property (nonatomic, retain) SUCorePersistedState *persistedState;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *persistedStateDispatchQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_getActivityForNameInternal:(id)arg1;
- (bool)_isActivityTrackedButUnsheduledInternal:(id)arg1;
- (id)activities;
- (id)activityQueue;
- (bool)addActivityInfoToPersistedState:(id)arg1;
- (id)copyOptionsForActivity:(id)arg1;
- (id)description;
- (void)eventHandler:(id)arg1;
- (id)getActivityForName:(id)arg1;
- (id)getExpectedRunDateForActivity:(id)arg1;
- (id)initWithNameAndPersistedStateFilePath:(id)arg1 persistedStateFilePath:(id)arg2;
- (bool)isActivityScheduled:(id)arg1;
- (bool)isActivityScheduledInternal:(id)arg1;
- (bool)isActivityTrackedButUnsheduled:(id)arg1;
- (id)logger;
- (id)managerName;
- (id)managerQueue;
- (id)persistedState;
- (id)persistedStateDispatchQueue;
- (bool)removeActivityFromPersistedState:(id)arg1;
- (int)scheduleActivity:(id)arg1;
- (void)setActivities:(id)arg1;
- (void)setActivityQueue:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setManagerQueue:(id)arg1;
- (void)setPersistedState:(id)arg1;
- (void)setPersistedStateDispatchQueue:(id)arg1;
- (int)unscheduleActivity:(id)arg1;

@end
