
@protocol AFDictationDelegate <NSObject>

@optional

- (void)dictationConnection:(AFDictationConnection *)arg1 didBeginLocalRecognitionWithModelInfo:(NSString *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didDetectLanguage:(NSString *)arg2 confidenceScores:(NSDictionary *)arg3;
- (void)dictationConnection:(AFDictationConnection *)arg1 didDetectLanguage:(NSString *)arg2 confidenceScores:(NSDictionary *)arg3 isConfident:(bool)arg4;
- (void)dictationConnection:(AFDictationConnection *)arg1 didFinishWritingAudioFile:(NSFileHandle *)arg2 error:(NSError *)arg3;
- (void)dictationConnection:(AFDictationConnection *)arg1 didProcessAudioDuration:(double)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didReceiveSearchResults:(NSArray *)arg2 recognizedText:(NSString *)arg3 stable:(bool)arg4 final:(bool)arg5;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeFinalResultCandidatePackage:(AFSpeechPackage *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeMultilingualSpeech:(SASMultilingualSpeechRecognized *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePackage:(AFSpeechPackage *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePackage:(AFSpeechPackage *)arg2 nluResult:(AFDictationNLUResult *)arg3;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePartialPackage:(AFSpeechPackage *)arg2 nluResult:(AFDictationNLUResult *)arg3 languageModel:(NSString *)arg4;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePartialResult:(SASSpeechPartialResult *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePhrases:(NSArray *)arg2 languageModel:(NSString *)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizePhrases:(NSArray *)arg2 languageModel:(NSString *)arg3 correctionIdentifier:(id)arg4 replacingPreviousPhrasesCount:(unsigned long long)arg5;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeTokens:(NSArray *)arg2 languageModel:(NSString *)arg3;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeTokens:(NSArray *)arg2 nluResult:(AFDictationNLUResult *)arg3 languageModel:(NSString *)arg4;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeTranscriptionObjects:(NSArray *)arg2 languageModel:(NSString *)arg3;
- (void)dictationConnection:(AFDictationConnection *)arg1 didRecognizeVoiceCommandCandidatePackage:(AFSpeechPackage *)arg2 nluResult:(AFDictationNLUResult *)arg3;
- (void)dictationConnection:(AFDictationConnection *)arg1 languageDetectorFailedWithError:(NSError *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 speechRecognitionDidFail:(NSError *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 speechRecordingDidBeginWithOptions:(AFDictationOptions *)arg2;
- (void)dictationConnection:(AFDictationConnection *)arg1 speechRecordingDidFail:(NSError *)arg2;
- (void)dictationConnectionDidPauseRecognition:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingDidBegin:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(AFDictationConnection *)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(AFDictationConnection *)arg1;
- (void)dictationConnnectionDidChangeAvailability:(AFDictationConnection *)arg1;

@end
