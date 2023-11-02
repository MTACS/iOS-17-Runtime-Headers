
@interface HealthExperience.FirstRestoreNotInProgressPrecondition : NSObject <HKCloudSyncObserverDelegate> {
    void cloudSyncObserver;
    void completionQueue;
    void healthStore;
    void lock;
    void preconditionCompletion;
    void shouldProceedOnErrorRequiringUserAction;
    void waitUntilShouldProceed;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)cloudSyncObserver:(id)arg1 didFailToPopulateStatusWithError:(id)arg2;
- (void)cloudSyncObserver:(id)arg1 syncDidStartWithProgress:(id)arg2;
- (void)cloudSyncObserver:(id)arg1 syncFailedWithError:(id)arg2;
- (void)cloudSyncObserverStatusUpdated:(id)arg1 status:(id)arg2;
- (void)cloudSyncObserverSyncCompleted:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;

@end
