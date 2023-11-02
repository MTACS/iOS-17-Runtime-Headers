
@interface HDPeriodicActivity : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonActivatedObserver> {
    HDXPCPeriodicActivity * _activity;
    NSObject<OS_xpc_object> * _currentActivity;
    <HDPeriodicActivityDelegate> * _delegate;
    double  _interval;
    NSObject<OS_os_log> * _loggingCategory;
    HDProfile * _profile;
    bool  _unitTest_shouldDefer;
}

@property (readonly) NSObject<OS_xpc_object> *currentActivity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HDPeriodicActivityDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long errorCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double interval;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingCategory;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool shouldDefer;
@property (readonly) Class superclass;

+ (void)registerDisabledPeriodicActivityWithName:(id)arg1 loggingCategory:(id)arg2;

- (void).cxx_destruct;
- (id)currentActivity;
- (id)currentCriteria;
- (void)daemonActivated:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)diagnosticDescription;
- (void)didPerformActivityWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 activityStartDate:(id)arg3 error:(id)arg4;
- (long long)errorCount;
- (id)initWithProfile:(id)arg1 name:(id)arg2 interval:(double)arg3 delegate:(id)arg4 loggingCategory:(id)arg5;
- (double)interval;
- (bool)isWaitingToRun;
- (id)lastSuccessfulRunDate;
- (id)loggingCategory;
- (id)name;
- (void)reset;
- (void)resetInterval;
- (bool)shouldDefer;
- (void)synthesizeActivityFire;
- (void)unitTest_setShouldDefer:(bool)arg1;
- (void)updateCriteria;

@end
