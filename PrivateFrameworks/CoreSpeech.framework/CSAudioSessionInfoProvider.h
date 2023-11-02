
@interface CSAudioSessionInfoProvider : NSObject <CSAudioSessionInfoProviding> {
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _sessionInfoQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sessionInfoQueue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)_audioRouteChanged:(id)arg1;
- (void)_deregisterAudioSessionNotifications;
- (void)_handleInterruption:(id)arg1;
- (void)_registerAudioRouteChangeNotification;
- (void)_registerAudioSessionNotifications;
- (void)_registerInterruptionNotification;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (unsigned int)audioSessionIdForDeviceId:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)observers;
- (void)registerObserver:(id)arg1;
- (id)sessionInfoQueue;
- (void)setObservers:(id)arg1;
- (void)setSessionInfoQueue:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
