
@interface TRIXPCActivityManager : NSObject <TRIXPCActivityManagementProtocol> {
    TRIServerContext * _context;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    TRITaskQueue * _taskQueue;
}

@property (nonatomic, retain) TRIServerContext *context;
@property (nonatomic, retain) TRITaskQueue *taskQueue;

- (void).cxx_destruct;
- (void)_registerCellularActivityWithDelay:(double)arg1;
- (void)_registerClientTriggeredActivities;
- (void)_registerFetchBMLTActivity;
- (void)_registerFetchExperimentsActivity;
- (void)_registerHotfixTargetingActivity;
- (void)_registerMaintenanceWorkActivity;
- (void)_registerPlaceholderTaskQueueActivity;
- (void)_registerPostUpgradeActivity;
- (void)_registerPostUpgradeActivityRequireInexpensiveNetworking;
- (void)_registerRetryFailuresActivity;
- (void)_scheduleBMLTFetchTaskWithActivityDescriptor:(id)arg1 label:(id)arg2;
- (void)_scheduleFetchTaskWithActivityDescriptor:(id)arg1 label:(id)arg2;
- (void)_scheduleMaintenanceTaskWithActivityDescriptor:(id)arg1 label:(id)arg2;
- (void)_setDelaySeconds:(long long)arg1 forXPCActivity:(id)arg2 withLabel:(id)arg3 replacementCriteria:(id)arg4;
- (void)_setJitterForXPCActivity:(id)arg1 withLabel:(id)arg2 replacementCriteria:(id)arg3;
- (id)context;
- (id)initWithDispatchQueue:(id)arg1;
- (void)postponeCellularActivity;
- (void)registerActivities;
- (void)registerSetupAssistantFetchActivity;
- (void)setContext:(id)arg1;
- (void)setTaskQueue:(id)arg1;
- (id)taskQueue;

@end
