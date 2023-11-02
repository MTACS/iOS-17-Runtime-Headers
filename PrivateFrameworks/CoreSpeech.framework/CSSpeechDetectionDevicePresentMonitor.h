
@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_startObservingSpeechDetectionVADPresence;
- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)arg1;
- (void)handleSpeechDetectionVADPresentChange:(id)arg1;
- (id)init;
- (bool)isPresent;

@end
