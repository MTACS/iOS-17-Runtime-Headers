
@protocol _UIKeyboardArbiterOmniscientDelegate <NSObject>

@required

- (FBSSceneIdentityToken *)keyboardArbiterAdvisor:(id <_UIKeyboardArbiterAdvisor>)arg1 requestedSceneFocusDeliberationForFocusedPid:(int)arg2;

@optional

- (bool)shouldKeyboardBeWindowSizedForHostWithIdentity:(FBSSceneIdentityToken *)arg1;

@end
