
@interface PXSystemAuthenticationTypeObserver : PXObservable {
    long long  _authenticationType;
    long long  _forcedSystemAuthenticationType;
    NSObject<OS_dispatch_queue> * _observationQueue;
    NSMutableSet * _observers;
}

@property (nonatomic) long long authenticationType;
@property (nonatomic) long long forcedSystemAuthenticationType;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observationQueue;
@property (nonatomic, retain) NSMutableSet *observers;

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)_beginObservingApplicationStateChangesAndSystemEvents;
- (long long)_calculateAuthenticationType;
- (long long)_currentlyAvailableBiometryType;
- (void)_stopObservingApplicationStateChanges;
- (void)_updateAuthenticationTypeInBackground;
- (long long)authenticationType;
- (void)dealloc;
- (long long)forcedSystemAuthenticationType;
- (id)init;
- (id)observationQueue;
- (id)observers;
- (void)setAuthenticationType:(long long)arg1;
- (void)setForcedSystemAuthenticationType:(long long)arg1;
- (void)setObservers:(id)arg1;
- (void)updateAuthenticationTypeImmediately;

@end
