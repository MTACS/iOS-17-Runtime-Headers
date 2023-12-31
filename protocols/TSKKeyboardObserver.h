
@protocol TSKKeyboardObserver <NSObject>

@optional

- (void)keyboardDidChangeFrame:(NSNotification *)arg1;
- (void)keyboardDidHideOrUndock:(NSNotification *)arg1;
- (void)keyboardDidShowOrDock:(NSNotification *)arg1;
- (void)keyboardHideCanceled;
- (void)keyboardShowCanceled;
- (void)keyboardWillChangeFrame:(NSNotification *)arg1;
- (void)keyboardWillHideOrUndock:(NSNotification *)arg1;
- (void)keyboardWillShowOrDock:(NSNotification *)arg1;

@end
