
@interface CSOpportuneSpeakEventMonitor : CSEventMonitor <CSOpportuneSpeakBehaviorMonitorDelegate> {
    NSString * _audioProviderUUID;
    CSAudioRecordContext * _audioRecordContext;
    bool  _isOpportuneSpeakListening;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _token;
}

@property (nonatomic, retain) NSString *audioProviderUUID;
@property (nonatomic, retain) CSAudioRecordContext *audioRecordContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isOpportuneSpeakListening;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *token;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notifyStopOpportuneSpeakWithDelay:(double)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)audioProviderUUID;
- (id)audioRecordContext;
- (id)init;
- (bool)isOpportuneSpeakListening;
- (bool)isStreaming;
- (void)opportuneSpeakBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 successfully:(bool)arg4 option:(id)arg5;
- (void)opportuneSpeakBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)opportuneSpeakBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 audioProviderUUID:(id)arg3 option:(id)arg4;
- (void)opportuneSpeakBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (id)queue;
- (void)setAudioProviderUUID:(id)arg1;
- (void)setAudioRecordContext:(id)arg1;
- (void)setIsOpportuneSpeakListening:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
