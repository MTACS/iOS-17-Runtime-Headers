
@protocol UIKeyboardAutocorrectionObserver <NSObject>

@required

- (void)autocorrectionController:(UIKeyboardAutocorrectionController *)arg1 didUpdateAutocorrectionList:(TIAutocorrectionList *)arg2;
- (void)autocorrectionControllerDidClearAutocorrections:(UIKeyboardAutocorrectionController *)arg1;

@end
