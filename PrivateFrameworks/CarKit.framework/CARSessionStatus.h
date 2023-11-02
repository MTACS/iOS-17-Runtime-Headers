
@interface CARSessionStatus : NSObject {
    bool  _clientIsCarPlayShell;
    NSObject<OS_dispatch_source> * _connectingTimer;
    CARSessionChangedNotificationConverter * _notificationConverter;
    bool  _saveInfoResponse;
    CARSession * _session;
    <CARSessionObserving> * _sessionObserver;
    CARObserverHashTable * _sessionObservers;
    unsigned long long  _timeoutInterval;
}

@property (nonatomic, readonly) bool clientIsCarPlayShell;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *connectingTimer;
@property (nonatomic, readonly) CARSession *currentSession;
@property (nonatomic, retain) CARSessionChangedNotificationConverter *notificationConverter;
@property (nonatomic, readonly) bool saveInfoResponse;
@property (nonatomic, retain) CARSession *session;
@property (nonatomic) <CARSessionObserving> *sessionObserver;
@property (nonatomic, retain) CARObserverHashTable *sessionObservers;
@property (nonatomic) unsigned long long timeoutInterval;

+ (id)sessionUpdatesQueue;

- (void).cxx_destruct;
- (void)_handleAuthenticationSucceeded:(id)arg1;
- (void)_handleCarCapabilitiesUpdated;
- (void)_handleConfigurationUpdated;
- (void)_handleConnectingTimeout;
- (void)_handleEndpointActivated:(id)arg1;
- (void)_handleInCarNotification;
- (void)_handleSessionChanged;
- (void)_handleStartingWiredConnectionNotification;
- (void)_notifyCancelledConnectionAttemptOnTransport:(unsigned long long)arg1;
- (void)_notifyDidConnectSession:(id)arg1;
- (void)_notifyDidDisconnectSession:(id)arg1;
- (void)_notifyDidUpdateSession:(id)arg1;
- (void)_notifyStartedConnectionAttemptOnTransport:(unsigned long long)arg1;
- (void)_startConnectingTimer;
- (void)_stopConnectingTimer;
- (void)_updateSession;
- (void)addSessionObserver:(id)arg1;
- (bool)clientIsCarPlayShell;
- (id)connectingTimer;
- (id)currentSession;
- (void)dealloc;
- (id)init;
- (id)initAndWaitUntilSessionUpdated;
- (id)initForCarPlayShell;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)notificationConverter;
- (void)removeSessionObserver:(id)arg1;
- (bool)saveInfoResponse;
- (id)session;
- (id)sessionObserver;
- (id)sessionObservers;
- (void)setConnectingTimer:(id)arg1;
- (void)setNotificationConverter:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionObserver:(id)arg1;
- (void)setSessionObservers:(id)arg1;
- (void)setTimeoutInterval:(unsigned long long)arg1;
- (unsigned long long)timeoutInterval;
- (void)waitForSessionInitialization;

@end
