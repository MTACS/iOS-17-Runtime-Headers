
@protocol CSVTUIAudioRecorderDelegate <NSObject>

@required

- (void)audioRecorderBufferAvailable:(CSVTUIAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(NSData *)arg3 remoteVAD:(NSData *)arg4 atTime:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 numberOfChannels:(int)arg7;

@optional

- (void)audioRecorderDidStartRecord:(CSVTUIAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(bool)arg3 error:(NSError *)arg4;
- (void)audioRecorderDidStopRecord:(CSVTUIAudioRecorder *)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(long long)arg3;
- (void)audioRecorderDisconnected:(CSVTUIAudioRecorder *)arg1;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(CSVTUIAudioRecorder *)arg1 toConfiguration:(long long)arg2;

@end
