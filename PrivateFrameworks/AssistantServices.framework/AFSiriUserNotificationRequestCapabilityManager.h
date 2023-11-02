
@interface AFSiriUserNotificationRequestCapabilityManager : NSObject <AFAnnouncementRequestCapabilityProvidingDelegate> {
    <AFAnnouncementRequestCapabilityProviding> * _capabilityProvider;
    NSHashTable * _observers;
    long long  _platform;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (Class)_classForPlatform:(long long)arg1;
+ (id)sharedManager;
+ (bool)supportedByApplicationWithBundleID:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithPlatform:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)fetchEligibleSetupStateWithCompletion:(id /* block */)arg1;
- (void)fetchRequestCanBeHandledStateWithCompletion:(id /* block */)arg1;
- (bool)hasEligibleSetup;
- (void)notifyObserversOfCurrentEligibleSetupState:(bool)arg1 onPlatform:(long long)arg2;
- (void)notifyObserversOfCurrentRequestCanBeHandledState:(bool)arg1 onPlatform:(long long)arg2;
- (void)provider:(id)arg1 availableAnnouncementRequestTypesChanged:(unsigned long long)arg2;
- (void)provider:(id)arg1 eligibleAnnouncementRequestTypesChanged:(unsigned long long)arg2;
- (void)removeObserver:(id)arg1;
- (bool)requestCanBeHandled;

@end
