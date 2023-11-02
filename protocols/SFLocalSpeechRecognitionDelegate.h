
@protocol SFLocalSpeechRecognitionDelegate <NSObject>

@optional

- (void)localSpeechRecognitionClient:(SFLocalSpeechRecognitionClient *)arg1 didFinishRecognition:(SFSpeechRecognitionResult *)arg2;
- (void)localSpeechRecognitionClient:(SFLocalSpeechRecognitionClient *)arg1 didProcessAudioDuration:(double)arg2;
- (void)localSpeechRecognitionClient:(SFLocalSpeechRecognitionClient *)arg1 didRecognizePartialResult:(SFTranscription *)arg2 rawPartialResult:(SFTranscription *)arg3;
- (void)localSpeechRecognitionClient:(SFLocalSpeechRecognitionClient *)arg1 speechRecognitionDidFail:(NSError *)arg2;
- (void)localSpeechRecognitionClient:(SFLocalSpeechRecognitionClient *)arg1 speechRecordingDidFail:(NSError *)arg2;
- (void)localSpeechRecognitionClientSpeechRecognitionDidSucceed:(SFLocalSpeechRecognitionClient *)arg1;
- (void)localSpeechRecognitionClientSpeechRecordingDidCancel:(SFLocalSpeechRecognitionClient *)arg1;

@end
