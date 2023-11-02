
@protocol CSOpportuneSpeakBehaviorMonitorDelegate <NSObject>

@required

- (void)opportuneSpeakBehaviorMonitor:(CSOpportuneSpeakBehaviorMonitor *)arg1 didStartStreamWithContext:(CSAudioRecordContext *)arg2 audioProviderUUID:(NSString *)arg3 successfully:(bool)arg4 option:(CSAudioStartStreamOption *)arg5;
- (void)opportuneSpeakBehaviorMonitor:(CSOpportuneSpeakBehaviorMonitor *)arg1 didStopStream:(CSAudioStopStreamOption *)arg2;
- (void)opportuneSpeakBehaviorMonitor:(CSOpportuneSpeakBehaviorMonitor *)arg1 willStartStreamWithContext:(CSAudioRecordContext *)arg2 audioProviderUUID:(NSString *)arg3 option:(CSAudioStartStreamOption *)arg4;
- (void)opportuneSpeakBehaviorMonitor:(CSOpportuneSpeakBehaviorMonitor *)arg1 willStopStream:(CSAudioStopStreamOption *)arg2;

@end
