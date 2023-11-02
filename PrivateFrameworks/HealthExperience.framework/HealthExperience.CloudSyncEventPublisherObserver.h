
@interface HealthExperience.CloudSyncEventPublisherObserver : NSObject <HKCloudSyncObserverDelegate> {
    void healthStore;
    void observer;
    void publisher;
    void subject;
}

- (void).cxx_destruct;
- (void)cloudSyncObserver:(id)arg1 syncDidStartWithProgress:(id)arg2;
- (void)cloudSyncObserver:(id)arg1 syncFailedWithError:(id)arg2;
- (void)cloudSyncObserverStatusUpdated:(id)arg1 status:(id)arg2;
- (void)cloudSyncObserverSyncCompleted:(id)arg1;
- (id)init;

@end
