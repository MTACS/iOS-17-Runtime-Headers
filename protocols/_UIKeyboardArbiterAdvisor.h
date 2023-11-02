
@protocol _UIKeyboardArbiterAdvisor <NSObject>

@required

- (void)keyboardFocusDidChangeWithoutAdvisorInputToPid:(int)arg1 sceneIdentity:(FBSSceneIdentityToken *)arg2;
- (FBSSceneIdentityToken *)preferredSceneIdentityForKeyboardFocusWithChangeInformation:(NSDictionary *)arg1;
- (int)presentingKeyboardProcessIdentifier;

@end
