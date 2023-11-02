
@protocol _UITextFormattingViewHostingImpl <_UIRemoteSheetContaining>

@required

- (UITextFormattingViewController *)delegateTextFormattingViewController;
- (void)setDelegateTextFormattingViewController:(UITextFormattingViewController *)arg1;
- (void)setRemoteConfiguration:(UITextFormattingViewControllerConfiguration *)arg1;
- (void)setRemoteTextAttributes:(NSData *)arg1;
- (void)setupRemoteHosting;

@end
