
@interface CSBuiltinSpeakerStateMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate> {
    unsigned long long  _builtInSpeakerState;
    bool  _isSpeakerMuted;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) unsigned long long builtInSpeakerState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSpeakerMuted;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)_didReceiveBuiltinSpeakerStateChangeNotification:(unsigned long long)arg1;
- (void)_didReceiveSpeakerMuteStateChangeNotification:(bool)arg1;
- (void)_fetchSpeakerStateActiveInfo;
- (void)_fetchSpeakerStateMutedInfo;
- (bool)_getIsSpeakerMutedDefaultVal;
- (void)_notifyObserver:(id)arg1 isSpeakerMuted:(bool)arg2;
- (void)_notifyObserver:(id)arg1 withBuiltinSpeakerState:(unsigned long long)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (unsigned long long)builtInSpeakerState;
- (unsigned long long)currentBuiltinSpeakerState;
- (id)init;
- (bool)isBuiltinSpeakerMuted;
- (bool)isSpeakerMuted;
- (id)queue;
- (void)setBuiltInSpeakerState:(unsigned long long)arg1;
- (void)setIsSpeakerMuted:(bool)arg1;
- (void)setQueue:(id)arg1;

@end
