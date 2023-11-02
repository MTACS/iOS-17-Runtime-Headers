
@protocol PKClientShareSecureElementPassViewControllerDelegate <NSObject>

@required

- (void)didCreateShareURL:(NSURL *)arg1 activationCode:(NSString *)arg2 error:(NSError *)arg3;
- (void)didFinishShareWithDidUserShare:(bool)arg1 error:(NSError *)arg2;

@end
