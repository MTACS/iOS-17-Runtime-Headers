
@protocol VSSpeechServiceDelegate <NSObject>

@required

- (oneway void)audioRequest:(VSPresynthesizedAudioRequest *)arg1 didReportInstrumentMetrics:(VSInstrumentMetrics *)arg2 error:(NSError *)arg3;
- (oneway void)audioRequest:(VSPresynthesizedAudioRequest *)arg1 didStopAtEnd:(bool)arg2 error:(NSError *)arg3;
- (oneway void)audioRequestDidStart:(VSPresynthesizedAudioRequest *)arg1;
- (oneway void)previewRequestDidStartPlaying:(VSPreviewRequest *)arg1;
- (oneway void)speechRequest:(VSSpeechRequest *)arg1 didReceiveTimingInfo:(NSArray *)arg2;
- (oneway void)speechRequest:(VSSpeechRequest *)arg1 didReportInstrumentMetrics:(VSInstrumentMetrics *)arg2;
- (oneway void)speechRequest:(VSSpeechRequest *)arg1 didStartWithMark:(long long)arg2 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (oneway void)speechRequest:(VSSpeechRequest *)arg1 didStopWithSuccess:(bool)arg2 phonemesSpoken:(NSString *)arg3 error:(NSError *)arg4;
- (oneway void)speechRequestDidContinue:(VSSpeechRequest *)arg1;
- (oneway void)speechRequestDidPause:(VSSpeechRequest *)arg1;
- (oneway void)speechRequestDidStart:(VSSpeechRequest *)arg1;
- (oneway void)synthesisRequest:(VSSpeechRequest *)arg1 didFinishWithInstrumentMetrics:(VSInstrumentMetrics *)arg2 error:(NSError *)arg3;
- (oneway void)synthesisRequest:(VSSpeechRequest *)arg1 didGenerateAudioChunk:(VSAudioData *)arg2;
- (oneway void)synthesisRequest:(VSSpeechRequest *)arg1 didReceiveTimingInfo:(NSArray *)arg2;

@end
