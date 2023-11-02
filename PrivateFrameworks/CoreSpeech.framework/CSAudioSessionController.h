
@interface CSAudioSessionController : NSObject <CSAudioSessionInfoProvidingDelegate, CSCoreSpeechDaemonStateMonitorDelegate, CSXPCClientDelegate> {
    NSUUID * _endpointId;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    <CSAudioSessionInfoProviding> * _sessionInfoProvider;
    bool  _shouldKeepConnection;
    CSXPCClient * _xpcClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *endpointId;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) <CSAudioSessionInfoProviding> *sessionInfoProvider;
@property bool shouldKeepConnection;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSXPCClient *xpcClient;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)CSXPCClient:(id)arg1 didDisconnect:(bool)arg2;
- (void)_audioRouteChanged:(id)arg1;
- (bool)_createXPCClientConnectionIfNeeded;
- (unsigned int)_getAudioSessionID;
- (void)_handleInterruption:(id)arg1;
- (void)_mediaServicesWereLost:(id)arg1;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)_registerAudioRouteChangeNotification;
- (void)_registerInterruptionNotification;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)_teardownXPCClientIfNeeded;
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;
- (void)audioSessionInfoProvider:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;
- (void)coreSpeechDaemonStateMonitor:(id)arg1 didReceiveStateChanged:(unsigned long long)arg2;
- (void)dealloc;
- (id)endpointId;
- (unsigned int)getAudioSessionID;
- (void)getAudioSessionIDWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithEndpointId:(id)arg1;
- (id)observers;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (id)sessionInfoProvider;
- (void)setEndpointId:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSessionInfoProvider:(id)arg1;
- (void)setShouldKeepConnection:(bool)arg1;
- (void)setXpcClient:(id)arg1;
- (bool)shouldKeepConnection;
- (void)unregisterObserver:(id)arg1;
- (id)xpcClient;

@end
