
@interface CSAudioStreamActivityMonitor : CSEventMonitor {
    bool  _hasNonVoiceTriggerStreamsActive;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) bool hasNonVoiceTriggerStreamsActive;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (bool)hasNonVoiceTriggerStreamsActive;
- (bool)hasNonVoiceTriggerStreamsOrStreamHoldersActive;
- (id)init;
- (void)notifyActiveStreamsChanged:(id)arg1 streamHolders:(id)arg2 streamId:(unsigned long long)arg3;
- (id)queue;
- (void)setHasNonVoiceTriggerStreamsActive:(bool)arg1;
- (void)setQueue:(id)arg1;

@end
