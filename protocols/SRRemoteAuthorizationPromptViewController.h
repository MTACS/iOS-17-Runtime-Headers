
@protocol SRRemoteAuthorizationPromptViewController <SRAuthorizationPromptServiceInterface>

@required

- (<SRRemoteAuthorizationPromptViewControllerDelegate> *)delegate;
- (void)invalidate;
- (void)setDelegate:(id <SRRemoteAuthorizationPromptViewControllerDelegate>)arg1;

@end
