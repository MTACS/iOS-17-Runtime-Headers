
@interface SVXSpeechSynthesizer : NSObject <SVXModuleInstance> {
    SVXSpeechSynthesisAnnouncer * _announcer;
    SVXAudioStreamingAnnouncer * _audioStreamingAnnouncer;
    <SVXClientAudioSystemServicing> * _clientAudioSystemServicing;
    SVXSpeechSynthesisConfiguration * _currentConfiguration;
    SVXSpeechSynthesisContext * _currentSpeakingContext;
    SVXModule * _module;
    bool  _needsPrewarm;
    NSMutableArray * _pendingContexts;
    SVXPowerLevelListener * _powerLevelListener;
    SVXSessionManager * _sessionManager;
    NSMutableSet * _synthesizingContexts;
    SiriTTSDaemonSession * _ttsSession;
    unsigned long long  _ttsSignpostInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)creationContextFromInstrumentMetrics:(id)arg1;

- (void).cxx_destruct;
- (void)_beginUpdateAudioPowerWithCompletion:(id /* block */)arg1;
- (void)_cancelPendingContextsAtIndexes:(id)arg1;
- (void)_cancelPendingContextsWithOperationType:(long long)arg1;
- (void)_cancelPendingSpeakingContextWithRequest:(id)arg1;
- (void)_cancelPendingSpeakingContextsWithPriorityBelow:(long long)arg1;
- (void)_configureWithConfiguration:(id)arg1;
- (id)_configuredSpeechRequestForContext:(id)arg1;
- (id)_configuredSynthesisRequestForContext:(id)arg1;
- (id)_configuredVoiceForContext:(id)arg1;
- (bool)_continueContext:(id)arg1 error:(id*)arg2;
- (void)_endUpdateAudioPower;
- (void)_enqueueContext:(id)arg1;
- (void)_finalizeContext:(id)arg1 withResultType:(long long)arg2 utterance:(id)arg3 error:(id)arg4;
- (void)_handleDidFinishPresynthesizedAudioRequest:(id)arg1 instrumentMetrics:(id)arg2 error:(id)arg3;
- (void)_handleDidFinishSpeakingWithSpeechRequest:(id)arg1 instrumentMetrics:(id)arg2;
- (void)_handleDidFinishSpeakingWithSpeechRequest:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_handleDidFinishSynthesizingForSpeechRequest:(id)arg1 instrumentMetrics:(id)arg2 error:(id)arg3;
- (void)_handleDidGenerateAudioChunkData:(id)arg1 forSpeechRequest:(id)arg2;
- (void)_handleDidReceiveSpeechWordTimingInfoArray:(id)arg1 forSpeechRequest:(id)arg2;
- (void)_handleDidStartPresynthesizedAudioRequest:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)_handleDidStartSpeakingWithSpeechRequest:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)_handleDidStopPresynthesizedAudioRequest:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (unsigned long long)_numberOfContexts;
- (void)_prewarm;
- (void)_prewarmWithContext:(id)arg1;
- (void)_processPendingContexts;
- (void)_startContext:(id)arg1;
- (bool)_startPresynthesizedAudioRequestForContext:(id)arg1 error:(id*)arg2;
- (bool)_startSpeechRequestForContext:(id)arg1 error:(id*)arg2;
- (void)_stopCurrentSpeakingContextWithInterruptionBehavior:(long long)arg1;
- (void)_stopCurrentSpeakingContextWithRequest:(id)arg1 withInterruptionBehavior:(long long)arg2;
- (bool)_useStreamingAudio;
- (void)addListener:(id)arg1;
- (void)beginUpdateAudioPowerWithCompletion:(id /* block */)arg1;
- (void)cancelPendingRequests;
- (void)cancelRequest:(id)arg1;
- (void)dealloc;
- (void)didFinishPresynthesizedAudioRequest:(id)arg1 withInstrumentMetrics:(id)arg2 error:(id)arg3;
- (void)didFinishSpeakingRequest:(id)arg1 successfully:(bool)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4;
- (void)didFinishSpeakingRequest:(id)arg1 withInstrumentMetrics:(id)arg2;
- (void)didFinishSynthesisRequest:(id)arg1 withInstrumentMetrics:(id)arg2 error:(id)arg3;
- (void)didStartPresynthesizedAudioRequest:(id)arg1;
- (void)didStartSpeakingRequest:(id)arg1;
- (void)didStopPresynthesizedAudioRequest:(id)arg1 atEnd:(bool)arg2 error:(id)arg3;
- (void)endUpdateAudioPower;
- (void)enqueueRequest:(id)arg1 languageCode:(id)arg2 voiceName:(id)arg3 gender:(long long)arg4 audioSessionID:(unsigned int)arg5 preparation:(id /* block */)arg6 finalization:(id /* block */)arg7 taskTracker:(id)arg8 analyticsContext:(id)arg9;
- (id)initWithModule:(id)arg1;
- (void)languageCodeChanged:(id)arg1;
- (void)outputVoiceChanged:(id)arg1;
- (void)prewarm;
- (void)prewarmRequest:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)startWithModuleInstanceProvider:(id)arg1 platformDependencies:(id)arg2;
- (void)stopCurrentRequestWithInterruptionBehavior:(long long)arg1;
- (void)stopRequest:(id)arg1 withInterruptionBehavior:(long long)arg2;
- (void)stopWithModuleInstanceProvider:(id)arg1;
- (void)synthesizeRequest:(id)arg1 audioChunkHandler:(id /* block */)arg2 taskTracker:(id)arg3 analyticsContext:(id)arg4 completion:(id /* block */)arg5;
- (void)updateWithConfiguration:(id)arg1;
- (void)withRequest:(id)arg1 didGenerateAudioChunk:(id)arg2;
- (void)withRequest:(id)arg1 didReceiveTimingInfo:(id)arg2;

@end
