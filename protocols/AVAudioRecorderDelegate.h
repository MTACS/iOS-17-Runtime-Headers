
@protocol AVAudioRecorderDelegate <NSObject>

@optional

- (void)audioRecorderBeginInterruption:(AVAudioRecorder *)arg1;
- (void)audioRecorderDidFinishRecording:(AVAudioRecorder *)arg1 successfully:(bool)arg2;
- (void)audioRecorderEncodeErrorDidOccur:(AVAudioRecorder *)arg1 error:(NSError *)arg2;
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1;
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1 withFlags:(unsigned long long)arg2;
- (void)audioRecorderEndInterruption:(AVAudioRecorder *)arg1 withOptions:(unsigned long long)arg2;

@end
