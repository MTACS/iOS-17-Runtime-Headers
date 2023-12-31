
@protocol CSVTUIAudioSessionDelegate <NSObject>

@required

- (void)audioSessionDidStartRecording:(bool)arg1 error:(NSError *)arg2;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionErrorDidOccur:(NSError *)arg1;
- (void)audioSessionRecordBufferAvailable:(NSData *)arg1;
- (void)audioSessionUnsupportedAudioRoute;

@end
