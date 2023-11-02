
@interface SiriTTSServiceSession : NSObject <SiriTTSService.SessionDelegateProtocol> {
    void _clientId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  accessoryId;
    void queue;
    void tasks;
    void tasksLock;
}

- (void).cxx_destruct;
- (void)cancelWithRequest:(id)arg1;
- (void)dealloc;
- (void)didGenerateAudioWithRequestId:(unsigned long long)arg1 audio:(id)arg2;
- (void)didGenerateWordTimingsWithRequestId:(unsigned long long)arg1 wordTimingInfo:(id)arg2;
- (void)didReportInstrumentWithRequestId:(unsigned long long)arg1 instrumentationMetrics:(id)arg2;
- (void)didStartSpeakingWithRequestId:(unsigned long long)arg1;
- (void)getAudioPower:(id /* block */)arg1;
- (id)init;
- (id)initWithAccessoryId:(id)arg1;
- (void)speakWithPreviewRequest:(id)arg1 didFinish:(id /* block */)arg2;

@end
