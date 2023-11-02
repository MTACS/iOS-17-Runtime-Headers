
@protocol ATSessionObserver <NSObject>

@optional

- (void)session:(ATSession *)arg1 didBeginSessionTask:(ATSessionTask *)arg2;
- (void)session:(ATSession *)arg1 didFinishSessionTask:(ATSessionTask *)arg2;
- (void)session:(ATSession *)arg1 didUpdateSessionTask:(ATSessionTask *)arg2;
- (void)session:(ATSession *)arg1 willBeginSessionTask:(ATSessionTask *)arg2;
- (void)sessionDidFinish:(ATSession *)arg1;
- (void)sessionWillBegin:(ATSession *)arg1;

@end
