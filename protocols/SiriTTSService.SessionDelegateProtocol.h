
@protocol SiriTTSService.SessionDelegateProtocol

@required

- (void)didGenerateAudioWithRequestId:(unsigned long long)arg1 audio:(SiriTTSAudioData *)arg2;
- (void)didGenerateWordTimingsWithRequestId:(unsigned long long)arg1 wordTimingInfo:(NSArray *)arg2;
- (void)didReportInstrumentWithRequestId:(unsigned long long)arg1 instrumentationMetrics:(SiriTTSInstrumentationMetrics *)arg2;
- (void)didStartSpeakingWithRequestId:(unsigned long long)arg1;

@end
