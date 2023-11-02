
@protocol CSAudioFileReaderDelegate <NSObject>

@required

- (void)audioFileReaderBufferAvailable:(CSAudioFileReader *)arg1 buffer:(NSData *)arg2 atTime:(unsigned long long)arg3;
- (void)audioFileReaderDidStartRecording:(CSAudioFileReader *)arg1 successfully:(bool)arg2 error:(NSError *)arg3;
- (void)audioFileReaderDidStopRecording:(CSAudioFileReader *)arg1 forReason:(long long)arg2;

@end
