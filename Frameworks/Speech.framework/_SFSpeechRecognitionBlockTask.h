
@interface _SFSpeechRecognitionBlockTask : SFSpeechRecognitionTask {
    bool  _hasFiredFinalResult;
    id /* block */  _resultHandler;
}

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 resultHandler:(id /* block */)arg5;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)localSpeechRecognitionClient:(id)arg1 didFinishRecognition:(id)arg2;
- (void)localSpeechRecognitionClient:(id)arg1 didProcessAudioDuration:(double)arg2;
- (void)localSpeechRecognitionClient:(id)arg1 didRecognizePartialResult:(id)arg2 rawPartialResult:(id)arg3;
- (void)localSpeechRecognitionClient:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)localSpeechRecognitionClient:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)localSpeechRecognitionClientSpeechRecognitionDidSucceed:(id)arg1;
- (void)localSpeechRecognitionClientSpeechRecordingDidCancel:(id)arg1;

@end
