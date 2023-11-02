
@protocol CSSiriClientBehaviorMonitorDelegate <NSObject>

@required

- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 didStartStreamWithContext:(CSAudioRecordContext *)arg2 successfully:(bool)arg3 option:(CSAudioStartStreamOption *)arg4 withEventUUID:(NSString *)arg5;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 didStopStream:(CSAudioStopStreamOption *)arg2 withEventUUID:(NSString *)arg3;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 willStartStreamWithContext:(CSAudioRecordContext *)arg2 option:(CSAudioStartStreamOption *)arg3;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 willStopStream:(CSAudioStopStreamOption *)arg2 reason:(unsigned long long)arg3;

@optional

- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 activatedAudioSessionWithReason:(unsigned long long)arg2;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 didChangedRecordState:(bool)arg2 withEventUUID:(NSString *)arg3 withContext:(CSAudioRecordContext *)arg4;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 fetchedSiriClientAudioStream:(CSAudioStream *)arg2 successfully:(bool)arg3;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 preparedSiriClientAudioStream:(CSAudioStream *)arg2 successfully:(bool)arg3;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 willStartStreamWithContext:(CSAudioRecordContext *)arg2 option:(CSAudioStartStreamOption *)arg3 withEventUUID:(NSString *)arg4;
- (void)siriClientBehaviorMonitor:(CSSiriClientBehaviorMonitor *)arg1 willStopStream:(CSAudioStopStreamOption *)arg2 reason:(unsigned long long)arg3 withEventUUID:(NSString *)arg4;
- (void)siriClientBehaviorMonitorAudioDeviceInfoUpdated:(CSAudioDeviceInfo *)arg1;
- (void)siriClientBehaviorMonitorReleasedAudioSession:(CSSiriClientBehaviorMonitor *)arg1;

@end
