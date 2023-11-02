
@protocol _UITextFormattingViewControllerDelegate <NSObject, UITextFormattingViewControllerDelegate>

@optional

- (void)_startSuppressingKeyboardForTextFormatting:(UITextFormattingViewController *)arg1;
- (void)_stopSuppressingKeyboardForTextFormatting:(UITextFormattingViewController *)arg1;
- (void)_textFormattingRequestsFirstResponderResignation:(UITextFormattingViewController *)arg1;
- (void)_textFormattingRequestsFirstResponderRestoration:(UITextFormattingViewController *)arg1;

@end
