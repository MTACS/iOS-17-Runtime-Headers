
@interface HKMobilityWalkingSteadinessFeatureStatusManager : NSObject <HKMobilityWalkingSteadinessFeatureStatusManagerClient, _HKXPCExportable> {
    long long  _notificationState;
    HKObserverSet * _observers;
    long long  _onboardingState;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (void)client_didUpdateFitnessTrackingEnabled:(bool)arg1;
- (void)client_didUpdateNotificationStatus:(id)arg1;
- (void)client_didUpdateOnboardingStatus:(id)arg1;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1;
- (bool)isFitnessTrackingEnabled;
- (id)notificationStatusWithError:(id*)arg1;
- (id)onboardingStatusWithError:(id*)arg1;
- (id)remoteInterface;
- (void)removeObserver:(id)arg1;
- (void)resetOnboarding;
- (void)setNotificationsEnabled:(bool)arg1;

@end
