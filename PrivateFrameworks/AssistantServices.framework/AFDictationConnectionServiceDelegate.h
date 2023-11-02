
@interface AFDictationConnectionServiceDelegate : NSObject <AFDictationServiceDelegate> {
    AFDictationConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDictationConnection:(id)arg1;
- (oneway void)languageDetectorFailedWithError:(id)arg1;
- (oneway void)speechDidBeginLocalRecognitionWithModelInfo:(id)arg1;
- (oneway void)speechDidDetectLanguage:(id)arg1 confidenceScores:(id)arg2 isConfident:(bool)arg3;
- (oneway void)speechDidFinishWritingAudioFile:(id)arg1 error:(id)arg2;
- (oneway void)speechDidPauseRecognition;
- (oneway void)speechDidProcessAudioDuration:(double)arg1;
- (oneway void)speechDidReceiveSearchResults:(id)arg1 recognitionText:(id)arg2 stable:(bool)arg3 final:(bool)arg4;
- (oneway void)speechDidRecognizeFinalResultCandidatePackage:(id)arg1;
- (oneway void)speechDidRecognizeMultilingualSpeech:(id)arg1;
- (oneway void)speechDidRecognizePackage:(id)arg1;
- (oneway void)speechDidRecognizePartialPackage:(id)arg1 nluResult:(id)arg2 usingSpeechModel:(id)arg3;
- (oneway void)speechDidRecognizePartialResult:(id)arg1;
- (oneway void)speechDidRecognizePhrases:(id)arg1 rawPhrases:(id)arg2 utterances:(id)arg3 rawUtterances:(id)arg4 nluResult:(id)arg5 usingSpeechModel:(id)arg6 correctionContext:(id)arg7 audioAnalytics:(id)arg8;
- (oneway void)speechDidRecognizeTokens:(id)arg1 nluResult:(id)arg2 usingSpeechModel:(id)arg3;
- (oneway void)speechDidRecognizeTranscriptionObjects:(id)arg1 usingSpeechModel:(id)arg2;
- (oneway void)speechDidRecognizeVoiceCommandCandidatePackage:(id)arg1 nluResult:(id)arg2;
- (oneway void)speechRecognitionDidFinishWithError:(id)arg1;
- (oneway void)speechRecordingDidBeginWithOptions:(id)arg1 sessionUUID:(id)arg2 sessionRequestUUID:(id)arg3;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidFail:(id)arg1;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;

@end
