
@interface HDXPCGatedActivity : NSObject {
    NSObject<OS_xpc_object> * _criteria;
    NSObject<OS_xpc_object> * _currentActivity;
    id /* block */  _handler;
    bool  _inProgress;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _loggingCategory;
    NSString * _name;
    NSMutableArray * _nextCompletions;
    double  _nextFireTime;
    double  _nextScheduledFireDeadline;
    NSMutableArray * _pendingCompletions;
    HDCoalescedTaskPoolQuota * _quota;
    bool  _rescheduleWhileInProgress;
    id /* block */  unitTest_ActivityCompletion;
}

@property (retain) NSObject<OS_xpc_object> *currentActivity;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingCategory;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) HDCoalescedTaskPoolQuota *quota;
@property bool rescheduleWhileInProgress;
@property (readonly) bool shouldDefer;
@property bool waitingForTrigger;

- (void).cxx_destruct;
- (void)_activityFinishedWithResult:(long long)arg1 error:(id)arg2;
- (void)_handleXPCActivityCallback:(id)arg1;
- (void)_lock_resetNextActivityFireDate;
- (void)_lock_setNextScheduledFireDeadline:(double)arg1;
- (void)_performActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)_registerActivityWithCriteria:(id)arg1;
- (void)_registerActivityWithCriteria:(id)arg1 delay:(double)arg2 gracePeriod:(double)arg3;
- (void)_runRequestWithMaximumDelay:(double)arg1 requiredDelay:(double)arg2 completion:(id /* block */)arg3;
- (id)currentActivity;
- (id)description;
- (id)initWithName:(id)arg1 criteria:(id)arg2 loggingCategory:(id)arg3 handler:(id /* block */)arg4;
- (id)loggingCategory;
- (id)name;
- (id)quota;
- (void)requestRunWithMaximumDelay:(double)arg1 completion:(id /* block */)arg2;
- (bool)rescheduleWhileInProgress;
- (void)runUngatedWithCompletion:(id /* block */)arg1;
- (void)setCurrentActivity:(id)arg1;
- (void)setQuota:(id)arg1;
- (void)setRescheduleWhileInProgress:(bool)arg1;
- (void)setWaitingForTrigger:(bool)arg1;
- (bool)shouldDefer;
- (void)unitTest_setActivityCompletion:(id /* block */)arg1;
- (bool)waitingForTrigger;

@end
