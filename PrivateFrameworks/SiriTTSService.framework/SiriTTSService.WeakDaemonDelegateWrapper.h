
@interface SiriTTSService.WeakDaemonDelegateWrapper : _TtCs12_SwiftObject <SiriTTSService.DaemonDelegateProtocol> {
    void delegate;
}

- (void)didGenerateAudioWithRequestId:(unsigned long long)arg1 audio:(id)arg2;
- (void)didGenerateWordTimingsWithRequestId:(unsigned long long)arg1 wordTimingInfo:(id)arg2;
- (void)didReportInstrumentWithRequestId:(unsigned long long)arg1 instrumentationMetrics:(id)arg2;
- (void)didStartSpeakingWithRequestId:(unsigned long long)arg1;
- (void)pingWithReply:(id /* block */)arg1;

@end
