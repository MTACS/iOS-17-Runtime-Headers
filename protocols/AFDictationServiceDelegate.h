
@protocol AFDictationServiceDelegate <NSObject>

@required

- (oneway void)languageDetectorFailedWithError:(NSError *)arg1;
- (oneway void)speechDidBeginLocalRecognitionWithModelInfo:(NSString *)arg1;
- (oneway void)speechDidDetectLanguage:(NSString *)arg1 confidenceScores:(NSDictionary *)arg2 isConfident:(bool)arg3;
- (oneway void)speechDidFinishWritingAudioFile:(NSFileHandle *)arg1 error:(NSError *)arg2;
- (oneway void)speechDidPauseRecognition;
- (oneway void)speechDidProcessAudioDuration:(double)arg1;
- (oneway void)speechDidReceiveSearchResults:(NSArray *)arg1 recognitionText:(NSString *)arg2 stable:(bool)arg3 final:(bool)arg4;
- (oneway void)speechDidRecognizeFinalResultCandidatePackage:(AFSpeechPackage *)arg1;
- (oneway void)speechDidRecognizeMultilingualSpeech:(SASMultilingualSpeechRecognized *)arg1;
- (oneway void)speechDidRecognizePackage:(AFSpeechPackage *)arg1;
- (oneway void)speechDidRecognizePartialPackage:(AFSpeechPackage *)arg1 nluResult:(AFDictationNLUResult *)arg2 usingSpeechModel:(NSString *)arg3;
- (oneway void)speechDidRecognizePartialResult:(SASSpeechPartialResult *)arg1;
- (oneway void)speechDidRecognizePhrases:(NSArray *)arg1 rawPhrases:(NSArray *)arg2 utterances:(NSArray *)arg3 rawUtterances:(NSArray *)arg4 nluResult:(AFDictationNLUResult *)arg5 usingSpeechModel:(NSString *)arg6 correctionContext:(NSDictionary *)arg7 audioAnalytics:(AFSpeechAudioAnalytics *)arg8;
- (oneway void)speechDidRecognizeTokens:(NSArray *)arg1 nluResult:(AFDictationNLUResult *)arg2 usingSpeechModel:(NSString *)arg3;
- (oneway void)speechDidRecognizeTranscriptionObjects:(NSArray *)arg1 usingSpeechModel:(NSString *)arg2;
- (oneway void)speechDidRecognizeVoiceCommandCandidatePackage:(AFSpeechPackage *)arg1 nluResult:(AFDictationNLUResult *)arg2;
- (oneway void)speechRecognitionDidFinishWithError:(NSError *)arg1;
- (oneway void)speechRecordingDidBeginWithOptions:(AFDictationOptions *)arg1 sessionUUID:(NSString *)arg2 sessionRequestUUID:(NSString *)arg3;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidFail:(NSError *)arg1;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(AFXPCWrapper *)arg1;

@end
