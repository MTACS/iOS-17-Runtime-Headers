
@interface HealthExperienceUI.CloudSyncStateObserver : NSObject <HKCloudSyncObserverDelegate> {
    void _cachedFirstRestoreState;
    void cloudSyncObserver;
    void firstRestoreStateChangeHandler;
    void stateChangeHandler;
    void store;
}

- (void).cxx_destruct;
- (void)cloudSyncObserver:(id)arg1 syncDidStartWithProgress:(id)arg2;
- (void)cloudSyncObserver:(id)arg1 syncFailedWithError:(id)arg2;
- (void)cloudSyncObserverStatusUpdated:(id)arg1 status:(id)arg2;
- (void)cloudSyncObserverSyncCompleted:(id)arg1;
- (id)init;

@end
