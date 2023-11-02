
@interface HDXPCPeriodicActivity : NSObject <HDXPCActivityShim> {
    <HDXPCActivityShim> * _activityShim;
    double  _baseInterval;
    bool  _conditionsChanged;
    NSObject<OS_xpc_object> * _criteria;
    NSObject<OS_xpc_object> * _currentActivity;
    id /* block */  _handler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _loggingCategory;
    NSString * _name;
    _Atomic bool  _registered;
    long long  _state;
}

@property (nonatomic, readonly) double baseInterval;
@property (copy) NSObject<OS_xpc_object> *criteria;
@property (readonly) NSObject<OS_xpc_object> *currentActivity;
@property (readonly, copy) NSObject<OS_xpc_object> *currentCriteria;
@property (nonatomic, readonly, copy) NSDate *earliestRunDate;
@property (nonatomic, readonly) long long errorCount;
@property (nonatomic, readonly) bool isWaiting;
@property (nonatomic, readonly) NSDate *lastSuccessfulRunDate;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingCategory;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool shouldDefer;

+ (void)registerDisabledPeriodicActivityWithName:(id)arg1 loggingCategory:(id)arg2;

- (void).cxx_destruct;
- (double)baseInterval;
- (id)criteria;
- (id)currentActivity;
- (id)currentCriteria;
- (void)dealloc;
- (id)description;
- (void)didPerformActivityWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 activityStartDate:(id)arg3 error:(id)arg4;
- (id)earliestRunDate;
- (long long)errorCount;
- (void)externalConditionsChanged;
- (id)initWithName:(id)arg1 baseInterval:(double)arg2 criteria:(id)arg3 loggingCategory:(id)arg4 handler:(id /* block */)arg5;
- (bool)isWaiting;
- (id)lastSuccessfulRunDate;
- (id)loggingCategory;
- (double)modifiedIntervalForCurrentState;
- (id)name;
- (void)registerActivity;
- (void)resetIntervalWithCriteria:(id)arg1;
- (void)setCriteria:(id)arg1;
- (bool)shouldDefer;
- (void)unitTest_reset;
- (void)unitTest_setActivityShim:(id)arg1;
- (void)unitTest_synthesizeActivityFireWithCompletion:(id /* block */)arg1;
- (void)unregisterActivity;
- (void)updateCriteriaForModifiedIntervalForCurrentState;
- (id)xpcActivity_copyCriteria:(id)arg1;
- (long long)xpcActivity_getState:(id)arg1;
- (void)xpcActivity_register:(const char *)arg1 criteria:(id)arg2 handler:(id /* block */)arg3;
- (bool)xpcActivity_setCompletionStatus:(long long)arg1 activity:(id)arg2;
- (void)xpcActivity_setCriteria:(id)arg1 activity:(id)arg2;
- (bool)xpcActivity_setState:(long long)arg1 activity:(id)arg2;
- (bool)xpcActivity_shouldDefer:(id)arg1;
- (void)xpcActivity_unregister:(const char *)arg1;

@end
