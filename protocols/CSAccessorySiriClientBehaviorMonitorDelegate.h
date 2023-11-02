
@protocol CSAccessorySiriClientBehaviorMonitorDelegate <NSObject>

@required

- (void)accessorySiriClientBehaviorMonitor:(CSAccessorySiriClientBehaviorMonitor *)arg1 didStartStreamWithContext:(CSAudioRecordContext *)arg2 successfully:(bool)arg3 option:(CSAudioStartStreamOption *)arg4 withEventUUID:(NSString *)arg5 forAccessory:(NSString *)arg6;
- (void)accessorySiriClientBehaviorMonitor:(CSAccessorySiriClientBehaviorMonitor *)arg1 didStopStream:(CSAudioStopStreamOption *)arg2 reason:(unsigned long long)arg3 withEventUUID:(NSString *)arg4 forAccessory:(NSString *)arg5;
- (void)accessorySiriClientBehaviorMonitor:(CSAccessorySiriClientBehaviorMonitor *)arg1 willStartStreamWithContext:(CSAudioRecordContext *)arg2 option:(CSAudioStartStreamOption *)arg3 forAccessory:(NSString *)arg4;
- (void)accessorySiriClientBehaviorMonitor:(CSAccessorySiriClientBehaviorMonitor *)arg1 willStopStream:(CSAudioStopStreamOption *)arg2 reason:(unsigned long long)arg3 forAccessory:(NSString *)arg4;

@end
