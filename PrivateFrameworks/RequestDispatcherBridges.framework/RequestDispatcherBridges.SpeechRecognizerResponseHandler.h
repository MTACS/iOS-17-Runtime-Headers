
@interface RequestDispatcherBridges.SpeechRecognizerResponseHandler : NSObject <LBLocalSpeechRecognizerClientDelegate> {
    void assistantId;
    void instrumentationUtil;
    void messagePublisher;
    void requestId;
    void serviceHelper;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sessionId;
}

- (void).cxx_destruct;
- (id)init;
- (void)localSpeechRecognizerClient:(id)arg1 didAcceptedEagerResultWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 mitigationSignal:(bool)arg4 featuresToLog:(id)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 receivedContinuityEndDetected:(id)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultCandidateWithRequestId:(id)arg2 speechPackage:(id)arg3;
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3;
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3 metadata:(id)arg4;
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 speechPackage:(id)arg4 metadata:(id)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4;
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4 metadata:(id)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 receivedTRPCandidatePackage:(id)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 receivedTRPDetected:(id)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 receivedVoiceCommandCandidateWithRequestId:(id)arg2 speechPackage:(id)arg3 metadata:(id)arg4;
- (void)localSpeechRecognizerClient:(id)arg1 receivedVoiceIdScoreCard:(id)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 requestAttentionAssetDownload:(bool)arg2;

@end
