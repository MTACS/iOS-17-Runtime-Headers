
@interface RequestDispatcherBridges.DictationSpeechRecognizerResponseHandler : RequestDispatcherBridges.SpeechRecognizerResponseHandler {
    void dictationOptions;
}

- (void).cxx_destruct;
- (void)localSpeechRecognizerClient:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 requestId:(id)arg3 endpointMode:(long long)arg4 error:(id)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 receivedEagerRecognitionCandidateWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 speechPackage:(id)arg4 duration:(double)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 receivedEagerRecognitionCandidateWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 speechPackage:(id)arg4 duration:(double)arg5 metadata:(id)arg6;
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultCandidateWithRequestId:(id)arg2 speechPackage:(id)arg3;
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3;
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3 metadata:(id)arg4;
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 speechPackage:(id)arg4 metadata:(id)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4;
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4 metadata:(id)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 receivedVoiceCommandCandidateWithRequestId:(id)arg2 speechPackage:(id)arg3 metadata:(id)arg4;

@end
