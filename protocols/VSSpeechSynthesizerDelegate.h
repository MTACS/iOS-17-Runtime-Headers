
@protocol VSSpeechSynthesizerDelegate <NSObject>

@optional

- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didContinueSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2 withInstrumentMetrics:(VSInstrumentMetrics *)arg3 error:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishPrewarmRequest:(VSSpeechRequest *)arg2 withError:(NSError *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(VSSpeechRequest *)arg2 successfully:(bool)arg3 phonemesSpoken:(NSString *)arg4 withError:(NSError *)arg5;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSpeakingRequest:(VSSpeechRequest *)arg2 withInstrumentMetrics:(VSInstrumentMetrics *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didFinishSynthesisRequest:(VSSpeechRequest *)arg2 withInstrumentMetrics:(VSInstrumentMetrics *)arg3 error:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didPauseSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStartPlayingPreviewRequest:(VSPreviewRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStartPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStartSpeakingRequest:(VSSpeechRequest *)arg2;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 didStopPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg2 atEnd:(bool)arg3 error:(NSError *)arg4;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forRequest:(VSSpeechRequest *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 withRequest:(VSSpeechRequest *)arg2 didReceiveTimingInfo:(NSArray *)arg3;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg1 withSynthesisRequest:(VSSpeechRequest *)arg2 didGenerateAudioChunk:(VSAudioData *)arg3;

@end
