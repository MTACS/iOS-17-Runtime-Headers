
@interface HKHeartbeatSeriesFeatureStatusManager : NSObject <HKHeartbeatSeriesFeatureStatusManagerClient, _HKXPCExportable> {
    HKHealthStore * _healthStore;
    NSUserDefaults * _heartNotificationsUserDefaults;
    HKObserverSet * _observers;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_handleAutomaticProxyReconnection;
- (void)_notifyObserversForFailureToUpdateWithError:(id)arg1;
- (void)_notifyObserversForPredominantFeatureUpdate:(long long)arg1;
- (void)_startObservingHeartNotificationsUserDefaults;
- (void)_startObservingWithActivationHandler:(id /* block */)arg1;
- (id)_synchronouslyStartObservingWithError:(id*)arg1;
- (void)_updateAndNotifyAllObservers;
- (void)client_heartbeatSeriesFeatureStatusManagerDidFailToUpdateWithError:(id)arg1;
- (void)client_heartbeatSeriesFeatureStatusManagerDidUpdatePredominantFeature:(long long)arg1;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithHealthStore:(id)arg1 heartNotificationsUserDefaults:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)registerObserver:(id)arg1 queue:(id)arg2 activationHandler:(id /* block */)arg3;
- (id)remoteInterface;
- (void)unregisterObserver:(id)arg1;

@end
