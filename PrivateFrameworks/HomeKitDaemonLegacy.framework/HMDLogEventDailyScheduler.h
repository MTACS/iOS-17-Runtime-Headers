
@interface HMDLogEventDailyScheduler : HMFObject <HMFLogging> {
    id /* block */  _dateFactory;
    NSDate * _lastRunTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    NSHashTable * _mutableTaskRunners;
    NSString * _preferencesKey;
    NSString * _xpcActivityIdentifier;
    <HMDXPCActivityInterfacing> * _xpcActivityInterface;
}

@property (copy) id /* block */ dateFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastRunTime;
@property (nonatomic, readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (nonatomic, retain) NSHashTable *mutableTaskRunners;
@property (nonatomic, readonly) NSString *preferencesKey;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *xpcActivityIdentifier;
@property (nonatomic, retain) <HMDXPCActivityInterfacing> *xpcActivityInterface;

+ (id)createSchedulerWithLogEventSubmitter:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)_criteriaForActivity;
- (void)_handleCheckInForActivity:(id)arg1;
- (void)_registerActivity;
- (void)_runActivity:(id)arg1;
- (id /* block */)dateFactory;
- (id)initWithIdentifier:(id)arg1 preferencesKey:(id)arg2 logEventSubmitter:(id)arg3 xpcActivityInterface:(id)arg4 dateFactory:(id /* block */)arg5;
- (id)lastRunTime;
- (id)logEventSubmitter;
- (id)mutableTaskRunners;
- (id)preferencesKey;
- (void)registerDailyTaskRunner:(id)arg1;
- (void)runDailyTasks;
- (void)runHomeutilTasks;
- (void)setDateFactory:(id /* block */)arg1;
- (void)setLastRunTime:(id)arg1;
- (void)setMutableTaskRunners:(id)arg1;
- (void)setXpcActivityInterface:(id)arg1;
- (id)statusSummary;
- (id)taskRunners;
- (id)xpcActivityIdentifier;
- (id)xpcActivityInterface;

@end
