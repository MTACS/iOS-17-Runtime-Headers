
@protocol UIDictationConnectionDelegate <NSObject>

@required

- (void)dictationConnection:(UIDictationConnection *)arg1 didBeginLocalRecognitionWithModelInfo:(NSString *)arg2;
- (void)dictationConnection:(UIDictationConnection *)arg1 didDetectLanguage:(NSString *)arg2;
- (void)dictationConnection:(UIDictationConnection *)arg1 didFailRecognitionWithError:(NSError *)arg2;
- (void)dictationConnection:(UIDictationConnection *)arg1 didFailRecordingWithError:(NSError *)arg2;
- (void)dictationConnection:(UIDictationConnection *)arg1 didReceiveCandidateDictationSerializableResults:(UIDictationSerializableResults *)arg2;
- (void)dictationConnection:(UIDictationConnection *)arg1 didReceivePartialPackage:(AFSpeechPackage *)arg2 nluResult:(AFDictationNLUResult *)arg3 languageModel:(NSString *)arg4;
- (void)dictationConnection:(UIDictationConnection *)arg1 didReceiveSearchResults:(NSArray *)arg2 recognizedText:(NSString *)arg3 stable:(bool)arg4 final:(bool)arg5;
- (void)dictationConnection:(UIDictationConnection *)arg1 didReceiveVoiceCommandCandidatePackage:(AFSpeechPackage *)arg2 nluResult:(AFDictationNLUResult *)arg3;
- (void)dictationConnection:(UIDictationConnection *)arg1 didStartRecordingWithOptions:(AFDictationOptions *)arg2;
- (void)dictationConnection:(UIDictationConnection *)arg1 finalizePhrases:(UIDictationSerializableResults *)arg2 languageModel:(NSString *)arg3 correctionIdentifier:(id)arg4 secureInput:(bool)arg5 finalResult:(bool)arg6;
- (void)dictationConnection:(UIDictationConnection *)arg1 receivedInterpretation:(NSString *)arg2 languageModel:(NSString *)arg3 secureInput:(bool)arg4;
- (void)dictationConnection:(UIDictationConnection *)arg1 updateOptions:(UIDictationConnectionOptions *)arg2;
- (void)dictationConnectionDidCancel:(UIDictationConnection *)arg1;
- (void)dictationConnectionDidCancelIncompatibleLocalRecognizer:(UIDictationConnection *)arg1;
- (void)dictationConnectionDidCancelRecording:(UIDictationConnection *)arg1;
- (void)dictationConnectionDidEndRecording:(UIDictationConnection *)arg1;
- (void)dictationConnectionDidFinish:(UIDictationConnection *)arg1;
- (void)dictationConnectionDidStartRecording:(UIDictationConnection *)arg1;
- (void)dictationConnectionWillStartRecording:(UIDictationConnection *)arg1;
- (void)dictationConnnectionDidChangeAvailability:(UIDictationConnection *)arg1;

@end
