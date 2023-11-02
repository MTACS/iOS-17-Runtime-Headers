
@protocol SHSessionDelegate_Internal <SHSessionDelegate, SHSpectralOutputDelegate>

@optional

- (void)finishedSession:(SHSession *)arg1;
- (void)session:(SHSession *)arg1 didProduceResponse:(SHMatcherResponse *)arg2;
- (bool)session:(SHSession *)arg1 shouldAttemptToMatchSignature:(SHSignature *)arg2;

@end
