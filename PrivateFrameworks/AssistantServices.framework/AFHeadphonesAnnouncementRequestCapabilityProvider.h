
@interface AFHeadphonesAnnouncementRequestCapabilityProvider : NSObject <AFAnnouncementRequestCapabilityProviding, AFNotifyObserverDelegate, AFSettingsDelegate, AFSiriHeadphonesMonitorDelegate> {
    AVSystemController * _avSystemController;
    AFSiriAudioRoute * _currentAnnouncementRoute;
    NSHashTable * _delegates;
    AFNotifyObserver * _forcedUpdateObserver;
    NSObject<OS_dispatch_group> * _group;
    unsigned long long  _lastKnownAvailableAnnouncementRequests;
    unsigned long long  _lastKnownEligibleAnnouncementRequests;
    bool  _localVoiceAssetAvailable;
    AFNotifyObserver * _pairedInfoChangeObserver;
    NSObject<OS_dispatch_queue> * _queue;
    AFSettingsConnection * _settingsConnection;
}

@property (nonatomic, retain) AFSiriAudioRoute *currentAnnouncementRoute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;
+ (long long)platform;
+ (id)provider;
+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;

- (void).cxx_destruct;
- (void)_fetchEligibleAnnouncementRequestTypesAndNotifyObservers;
- (void)_fetchInitialState;
- (void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(id /* block */)arg1;
- (id)_getCurrentAnnouncementRoute;
- (id)_headphonesMonitor;
- (id)_init;
- (void)_notifyObserversOfEligibleAnnouncementRequestTypes:(unsigned long long)arg1;
- (id)_settingsConnection;
- (void)_settingsConnectionDidDisconnect;
- (void)_updateAudioRouteAvailabilityAndBroadcast:(bool)arg1;
- (void)addDelegate:(id)arg1;
- (id)currentAnnouncementRoute;
- (void)currentAudioRouteDidChange:(id)arg1;
- (id)currentlyRoutedHeadphonesBTAddress;
- (id)currentlyRoutedHeadphonesProductID;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id /* block */)arg1;
- (void)fetchEligibleAnnouncementRequestTypesAndNotifyObservers:(id)arg1;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id /* block */)arg1;
- (void)fetchLocalVoiceAssetAvailabilityWithCompletion:(id /* block */)arg1;
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;
- (void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2;
- (void)notifyObserversOfAvailableAnnouncementRequestTypes;
- (void)privateAudioSessionStateDidChange:(unsigned long long)arg1;
- (void)setCurrentAnnouncementRoute:(id)arg1;

@end
