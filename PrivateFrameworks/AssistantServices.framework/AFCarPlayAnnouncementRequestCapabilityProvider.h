
@interface AFCarPlayAnnouncementRequestCapabilityProvider : NSObject <AFAnnouncementRequestCapabilityProviding, CARSessionObserving> {
    CARSessionStatus * _carSessionStatus;
    NSHashTable * _delegates;
    bool  _isCarPlayConnected;
    unsigned long long  _lastKnownAvailableAnnouncementRequestTypes;
    unsigned long long  _lastKnownEligibleAnnouncementRequestTypes;
    NSObject<OS_dispatch_queue> * _providerQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;
+ (long long)platform;
+ (id)provider;
+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;

- (void).cxx_destruct;
- (void)_availableAnnouncementRequestTypesForCarPlayConnectionWithCompletion:(id /* block */)arg1;
- (void)_isCarPlayConnectedWithCompletion:(id /* block */)arg1;
- (void)_notifyObserversOfUpdatedAvailableAnnouncementRequestTypes:(unsigned long long)arg1;
- (unsigned long long)_requestTypesForCarPlayAvailableOrConnected:(bool)arg1;
- (void)_setLastKnownAvailableAnnouncementRequestTypesAndNotifyObservers:(unsigned long long)arg1;
- (void)_updateForCarPlaySessionConnected:(bool)arg1;
- (void)addDelegate:(id)arg1;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id /* block */)arg1;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (void)isCarPlayConnectedWithCompletion:(id /* block */)arg1;
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (void)updateForCarPlaySessionConnected:(bool)arg1;

@end
