
@protocol ASCLockupViewDelegate <NSObject>

@required

- (UIViewController *)presentingViewControllerForLockupView:(ASCLockupView *)arg1;

@optional

- (void)lockupView:(ASCLockupView *)arg1 appStateDidChange:(NSString *)arg2;
- (void)lockupView:(ASCLockupView *)arg1 didFailRequestWithError:(NSError *)arg2;
- (void)lockupViewDidBeginRequest:(ASCLockupView *)arg1;
- (void)lockupViewDidFinishRequest:(ASCLockupView *)arg1;
- (void)lockupViewDidInvalidateIntrinsicContentSize:(ASCLockupView *)arg1;
- (ASCMetricsActivity *)metricsActivityForLockupView:(ASCLockupView *)arg1 toPerformActionOfOffer:(id <ASCOffer>)arg2;

@end
