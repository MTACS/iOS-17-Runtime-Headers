
@interface SiriTTSDaemonSession : NSObject <SiriTTSService.DaemonDelegateProtocol> {
    void $__lazy_storage_$__sessionConnection;
    void _clientId;
    void _connectionLock;
    void _keepActive;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  accessoryId;
    void requests;
    void requestsLock;
}

@property (nonatomic) bool keepActive;

// Image: /System/Library/PrivateFrameworks/SiriTTSService.framework/SiriTTSService

- (void).cxx_destruct;
- (void)adjustVolume:(float)arg1 rampTime:(double)arg2 didFinish:(id /* block */)arg3;
- (void)cancelWithRequest:(id)arg1;
- (void)clearDeviceCache;
- (void)dealloc;
- (void)didGenerateAudioWithRequestId:(unsigned long long)arg1 audio:(id)arg2;
- (void)didGenerateWordTimingsWithRequestId:(unsigned long long)arg1 wordTimingInfo:(id)arg2;
- (void)didReportInstrumentWithRequestId:(unsigned long long)arg1 instrumentationMetrics:(id)arg2;
- (void)didStartSpeakingWithRequestId:(unsigned long long)arg1;
- (void)downloadedVoicesMatching:(id)arg1 reply:(id /* block */)arg2;
- (void)estimateDurationWithRequest:(id)arg1 didFinish:(id /* block */)arg2;
- (void)forwardWithStreamObject:(id)arg1;
- (void)getAudioPower:(id /* block */)arg1;
- (void)getSynthesisVoiceMatching:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initWithAccessoryId:(id)arg1;
- (void)isANEModelCompiledMatching:(id)arg1 reply:(id /* block */)arg2;
- (void)isSpeaking:(id /* block */)arg1;
- (bool)keepActive;
- (void)killDaemon;
- (void)pingWithReply:(id /* block */)arg1;
- (void)prewarmWithRequest:(id)arg1 didFinish:(id /* block */)arg2;
- (void)queryPhaticCapabilityWithVoice:(id)arg1 reply:(id /* block */)arg2;
- (void)setKeepActive:(bool)arg1;
- (void)signalWithInlineStreaming:(id)arg1;
- (void)speakWithAudioRequest:(id)arg1 didFinish:(id /* block */)arg2;
- (void)speakWithPreviewRequest:(id)arg1 didFinish:(id /* block */)arg2;
- (void)speakWithSpeechRequest:(id)arg1 didFinish:(id /* block */)arg2;
- (void)subscribeWithVoices:(id)arg1 reply:(id /* block */)arg2;
- (void)subscribedVoicesWithClientId:(id)arg1 reply:(id /* block */)arg2;
- (void)subscribedVoicesWithReply:(id /* block */)arg1;
- (void)synthesizeWithRequest:(id)arg1 didFinish:(id /* block */)arg2;
- (void)textToPhonemeWithRequest:(id)arg1 didFinish:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)afSharedSession;

@end
