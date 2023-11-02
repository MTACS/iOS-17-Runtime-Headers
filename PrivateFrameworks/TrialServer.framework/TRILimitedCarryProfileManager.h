
@interface TRILimitedCarryProfileManager : NSObject <MCProfileConnectionObserver> {
    _PASSimpleCoalescingTimer * _checkForUpdates;
    TRIServerContext * _context;
    NSDictionary * _lcExperiments;
    NSObject<OS_dispatch_queue> * _profileProcessingQueue;
    <TRITaskQueuing> * _taskQueue;
    NSObject<OS_os_transaction> * _txn;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *lcExperiments;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct { unsigned char x1; })_enqueueTask:(id)arg1;
- (void)_gatherProfileUpdatesAndScheduleRelatedTasks;
- (id)_getStoredLimitedCarryExperimentsWithError:(id*)arg1;
- (id)_limitedCarryExperiments;
- (bool)_setStoredLimitedCarryExperimentsWithError:(id*)arg1;
- (id)initWithTaskQueue:(id)arg1 context:(id)arg2;
- (id)lcExperiments;
- (void)processLaunchEvent;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)removeProfileForExperiment:(id)arg1;
- (void)setLcExperiments:(id)arg1;

@end
