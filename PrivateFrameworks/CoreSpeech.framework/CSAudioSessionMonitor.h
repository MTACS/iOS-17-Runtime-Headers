
@interface CSAudioSessionMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate, CSAudioSessionEventProvidingDelegate> {
    unsigned long long  _audioSessionState;
    CSAudioServerCrashMonitor * _crashMonitor;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=getAudioSessionState, nonatomic) unsigned long long audioSessionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)_notifyObserver:(id)arg1 withAudioSessionState:(unsigned long long)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)audioSessionEventProvidingDidSetAudioSessionActive:(bool)arg1;
- (void)audioSessionEventProvidingWillSetAudioSessionActive:(bool)arg1;
- (unsigned long long)getAudioSessionState;
- (id)initWithCrashMonitor:(id)arg1;
- (void)notifyAudioSessionStateChange:(unsigned long long)arg1;
- (void)setAudioSessionState:(unsigned long long)arg1;

@end
