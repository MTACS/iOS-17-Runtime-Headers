
@protocol AMUIInlineAuthenticationViewControllerDelegate <NSObject>

@required

- (void)authenticationViewController:(AMUIInlineAuthenticationViewController *)arg1 didAuthenticateWithSuccess:(bool)arg2;
- (void)authenticationViewController:(AMUIInlineAuthenticationViewController *)arg1 setDidSetPasscodeVisible:(bool)arg2;

@end
