
@protocol TTSSpeechRequestDelegate <NSObject>

@required

- (oneway void)speechRequest:(TTSSpeechRequest *)arg1 didStopWithSuccess:(bool)arg2 phonemesSpoken:(NSString *)arg3 forService:(id <TTSSpeechService>)arg4 error:(NSError *)arg5;
- (oneway void)speechRequest:(TTSSpeechRequest *)arg1 withMarker:(id <TTSMarker>)arg2 didStartForService:(id <TTSSpeechService>)arg3;
- (oneway void)speechRequestDidContinue:(TTSSpeechRequest *)arg1 forService:(id <TTSSpeechService>)arg2;
- (oneway void)speechRequestDidPause:(TTSSpeechRequest *)arg1 forService:(id <TTSSpeechService>)arg2;
- (oneway void)speechRequestDidStart:(TTSSpeechRequest *)arg1 forService:(id <TTSSpeechService>)arg2;

@end
