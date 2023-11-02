
@interface CSAudioPlayingAppMonitor : CSEventMonitor

+ (id)sharedMonitor;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_startObservingAudioPlayingState;
- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)arg1;
- (void)handleAudioPlayingStateChange:(id)arg1;
- (id)init;
- (id)playingApps;

@end
