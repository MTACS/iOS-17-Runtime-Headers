
@protocol CSIntuitiveConvAudioCaptureMonitorDelegate <NSObject>

@optional

- (void)intuitiveConvAudioCaptureMonitor:(CSIntuitiveConvAudioCaptureMonitor *)arg1 didStartAudioCaptureSuccessfully:(bool)arg2 option:(CSAudioStartStreamOption *)arg3 eventUUID:(NSString *)arg4;
- (void)intuitiveConvAudioCaptureMonitor:(CSIntuitiveConvAudioCaptureMonitor *)arg1 fetchedAudioStream:(CSAudioStream *)arg2 successfully:(bool)arg3;
- (void)intuitiveConvAudioCaptureMonitor:(CSIntuitiveConvAudioCaptureMonitor *)arg1 willStartAudioCaptureWithContext:(CSAudioRecordContext *)arg2 option:(CSAudioStartStreamOption *)arg3;
- (void)intuitiveConvAudioCaptureMonitor:(CSIntuitiveConvAudioCaptureMonitor *)arg1 willStopAudioCaptureReason:(unsigned long long)arg2;
- (void)intuitiveConvAudioCaptureMonitorDidStopAudioCapture:(CSIntuitiveConvAudioCaptureMonitor *)arg1 stopStreamOption:(CSAudioStopStreamOption *)arg2 eventUUID:(NSString *)arg3;

@end
