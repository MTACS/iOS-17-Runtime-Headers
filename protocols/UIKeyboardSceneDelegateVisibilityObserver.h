
@protocol UIKeyboardSceneDelegateVisibilityObserver <NSObject>

@optional

- (void)keyboardSceneDelegate:(UIKeyboardSceneDelegate *)arg1 inputViewSetVisibilityDidChange:(bool)arg2 includedReset:(bool)arg3;
- (void)visibilityDidChange:(bool)arg1;

@end
