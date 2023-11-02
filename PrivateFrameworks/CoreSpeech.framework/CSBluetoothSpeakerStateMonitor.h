
@interface CSBluetoothSpeakerStateMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate> {
    bool  _isActive;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isActive;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)_didReceiveBluetoothSpeakerStateChangeNotification:(bool)arg1;
- (void)_fetchSpeakerStateActiveInfo;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isActive;
- (id)queue;
- (void)setIsActive:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)start;

@end
