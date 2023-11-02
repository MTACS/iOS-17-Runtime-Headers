
@interface HKHRCardioFitnessFeatureStatusManager : NSObject <HKHRCardioFitnessFeatureStatusManagerClient, _HKXPCExportable> {
    HKObserverSet * _observers;
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_handleAutomaticProxyReconnection;
- (bool)_synchronouslyStartObservingWithError:(id*)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (void)client_didUpdateNotificationStatus:(id)arg1;
- (void)client_didUpdateOnboardingStatus:(id)arg1;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithProxyProvider:(id)arg1;
- (id)notificationStatusWithError:(id*)arg1;
- (id)onboardingStatusWithError:(id*)arg1;
- (id)remoteInterface;
- (void)removeObserver:(id)arg1;
- (void)resetOnboarding;
- (void)setNotificationsEnabled:(bool)arg1;

@end
