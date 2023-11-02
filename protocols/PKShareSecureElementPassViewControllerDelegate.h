
@protocol PKShareSecureElementPassViewControllerDelegate <NSObject>

@required

- (void)shareSecureElementPassViewController:(PKShareSecureElementPassViewController *)arg1 didFinishWithResult:(long long)arg2;

@optional

- (void)shareSecureElementPassViewController:(PKShareSecureElementPassViewController *)arg1 didCreateShareURL:(NSURL *)arg2 activationCode:(NSString *)arg3;

@end
