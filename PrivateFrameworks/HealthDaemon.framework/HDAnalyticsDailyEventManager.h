
@interface HDAnalyticsDailyEventManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDHealthDaemonReadyObserver> {
    id /* block */  _eventConstructor;
    HKAnalyticsEventSubmissionManager * _eventSubmissionManager;
    NSObject<OS_os_log> * _logCategory;
    id /* block */  _observationReadyCompletion;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queue_isObserving;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_submitAnalyticsEventWithCompletion:(id /* block */)arg1;
- (void)_unitTest_setObservationReadyCompletion:(id /* block */)arg1;
- (void)daemonReady:(id)arg1;
- (id)initWithProfile:(id)arg1 eventSubmissionManager:(id)arg2 logCategory:(id)arg3 eventConstructor:(id /* block */)arg4;
- (void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(id /* block */)arg2;

@end
