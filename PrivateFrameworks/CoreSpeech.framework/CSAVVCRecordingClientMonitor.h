
@interface CSAVVCRecordingClientMonitor : CSEventMonitor <CSAudioServerCrashMonitorDelegate> {
    unsigned long long  _numOfAVVCRecordingClients;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long numOfAVVCRecordingClients;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)_didReceiveAVVCRecordingClientNumberChange:(unsigned long long)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (unsigned long long)numOfAVVCRecordingClients;
- (id)queue;
- (void)setQueue:(id)arg1;

@end
