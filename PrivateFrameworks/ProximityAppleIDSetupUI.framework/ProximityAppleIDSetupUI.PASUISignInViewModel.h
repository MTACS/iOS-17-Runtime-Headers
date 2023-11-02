
@interface ProximityAppleIDSetupUI.PASUISignInViewModel : NSObject <AAUISignInViewControllerDelegate> {
    void _viewControllerProvider;
    void contextProvider;
    void continueSignInAction;
    void step;
}

@property (nonatomic, readonly) NSAttributedString *attributedMessage;
@property (nonatomic, readonly) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) UIImage *headerImage;

- (void).cxx_destruct;
- (id)attributedMessage;
- (id)attributedTitle;
- (id)authenticationContext;
- (id)headerImage;
- (id)init;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticationResults:(id)arg2;
- (void)signInViewControllerDidCancel:(id)arg1;
- (void)willAuthenticateWithContext:(id)arg1;

@end
