
@protocol _UIKeyboardArbiterSceneDelegate <NSObject>

@optional

- (void)focusContext:(UIKBArbiterClientFocusContext *)arg1 didChangeKeyboardScenePresentationMode:(unsigned long long)arg2;
- (void)focusContextDidChange:(UIKBArbiterClientFocusContext *)arg1;
- (void)focusedSceneIdentityDidChange:(FBSSceneIdentityToken *)arg1;

@end
