
@interface RequestDispatcherBridges.AssistantSpeechRecognizerResponseHandler : RequestDispatcherBridges.SpeechRecognizerResponseHandler {
    void bufferedResultCandidateHandler;
    void didStopASR;
    void hasfirstVoiceIdScoreCardArrived;
    void havePostedSpeechPartialDeliveryStartedMessage;
    void homeMembers;
    void immutableSessionState;
    void isCandidateRequest;
    void isFFRequest;
    void isIdentityBridgeInstrumentationEnabled;
    void isIdentityScoreConsumptionEnabled;
    void isMUXEnabled;
    void isMedocEnabled;
    void isRMVEnabled;
    void isUOS;
    void myriadMonitor;
    void requestQueue;
    void resultSelectedMsg;
    void resultSelectionGated;
    void sessionState;
    void speechPartialResultsCache;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  userId;
    void voiceIdScoreCard;
}

- (void).cxx_destruct;
- (void)localSpeechRecognizerClient:(id)arg1 didAcceptedEagerResultWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 mitigationSignal:(bool)arg4 featuresToLog:(id)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 requestId:(id)arg3 endpointMode:(long long)arg4 error:(id)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 requestId:(id)arg3 error:(id)arg4;
- (void)localSpeechRecognizerClient:(id)arg1 receivedContinuityEndDetected:(id)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 receivedEagerRecognitionCandidateWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 speechPackage:(id)arg4 duration:(double)arg5;
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3;
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4;
- (void)localSpeechRecognizerClient:(id)arg1 receivedTRPCandidatePackage:(id)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 receivedTRPDetected:(id)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 receivedVoiceIdScoreCard:(id)arg2;
- (void)localSpeechRecognizerClient:(id)arg1 requestAttentionAssetDownload:(bool)arg2;

@end
