
@interface CSHomePodSettingsMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (bool)shouldAudioMonitoringRecording;
- (bool)shouldVoiceTriggerRun;

@end
