
@protocol CSCommandControlBehaviorMonitorDelegate <NSObject>

@required

- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 didStartStreamWithContext:(CSAudioRecordContext *)arg2 successfully:(bool)arg3 option:(CSAudioStartStreamOption *)arg4;
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 didStopStream:(CSAudioStopStreamOption *)arg2;
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 willStartStreamWithContext:(CSAudioRecordContext *)arg2 option:(CSAudioStartStreamOption *)arg3;
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 willStopStream:(CSAudioStopStreamOption *)arg2;

@end
