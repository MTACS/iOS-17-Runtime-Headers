
@interface AFSiriHeadphonesMonitor : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate> {
    AVSystemController * _avSystemController;
    NSString * _btAddress;
    NSObject<OS_dispatch_queue> * _btQueue;
    AFSiriAudioRoute * _currentAudioRoute;
    NSHashTable * _delegates;
    NSMutableSet * _devicesAwaitingJSNotification;
    NSMutableDictionary * _devicesScheduledForJSNotification;
    AFNotifyObserver * _forcedUpdateObserver;
    bool  _guestConnected;
    AFBluetoothHeadphoneInEarDetectionState * _inEarDetectionState;
    AFNotifyObserver * _inEarDetectionStateObserver;
    bool  _inWirelessSplitterSessionStateValid;
    AFNotifyObserver * _pairedInfoChangeObserver;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _routeName;
    unsigned long long  _sessionState;
    AFSettingsConnection * _settingsConnection;
    AFNotifyObserver * _wirelessGuestConnectionObserver;
    unsigned long long  _wirelessSplitterSessionActive;
    AFNotifyObserver * _wirelessSplitterSessionObserver;
}

@property (nonatomic, retain) AFSiriAudioRoute *currentAudioRoute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;
+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_audioRouteDidChange:(id)arg1;
- (void)_broadcastInEarDetectionStateChangesFrom:(id)arg1 to:(id)arg2;
- (void)_broadcastRouteAndAuthenticationCapability;
- (void)_fetchInEarDetectionStateAndStartObservingFromSourceForBTAddress:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_fetchInitialState;
- (void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(id /* block */)arg1;
- (id)_getCurrentAudioRoute;
- (void)_handleJSDiscoveryNotificationForDevice:(id)arg1;
- (id)_init;
- (unsigned long long)_observerID;
- (void)_postJSDiscoveryNotificationForBTDeviceWithInfo:(id)arg1 scheduled:(bool)arg2;
- (void)_recomputePrivateSessionStateAndBroadcast:(bool)arg1;
- (id)_settingsConnection;
- (void)_settingsConnectionDidDisconnect;
- (void)_stopObservingInEarDetectionStateFromSource;
- (void)_updateAnnounceNotificationsOnHearingAidSupportedStatus;
- (bool)_updateAudioRouteAvailabilityAndBroadcast:(bool)arg1;
- (void)_updateInEarDetectionStateAndObserve;
- (void)_updateWirelessSplitterSessionInfoAndObserve;
- (void)accesoryAACPCapabilitiesReceived:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)currentAudioRoute;
- (void)fetchInEarDetctionStateForBTAddress:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchPrivateSessionStateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)removeDelegate:(id)arg1;
- (void)setCurrentAudioRoute:(id)arg1;
- (void)startObservingBluetoothConnections;
- (void)systemControllerDied:(id)arg1;
- (void)updateAudioRouteAvailability:(id)arg1;

@end
