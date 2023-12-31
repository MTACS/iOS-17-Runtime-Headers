
@protocol _SFSpeechRecognitionTaskDelegatePrivate <SFSpeechRecognitionTaskDelegate>

@optional

- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didProcessAudioDuration:(double)arg2;
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didReceiveSearchResults:(NSDictionary *)arg2 recognizedText:(NSString *)arg3 stable:(bool)arg4 final:(bool)arg5;
- (void)speechRecognitionTask:(SFSpeechRecognitionTask *)arg1 didRecordAudioPCMBuffer:(AVAudioPCMBuffer *)arg2;

@end
