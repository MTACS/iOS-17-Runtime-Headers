
@protocol ASCLockupPresenterObserver <NSObject>

@required

- (void)lockupPresenterDidBeginRequest;
- (void)lockupPresenterDidFailRequestWithError:(NSError *)arg1;
- (void)lockupPresenterDidFinishRequest;

@end
