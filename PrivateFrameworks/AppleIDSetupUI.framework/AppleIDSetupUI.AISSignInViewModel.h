
@interface AppleIDSetupUI.AISSignInViewModel : NSObject <AAUISignInViewControllerDelegate> {
    void contextProvider;
    void selectedMember;
    void step;
}

@property (nonatomic, readonly) UIImage *headerImage;

- (void).cxx_destruct;
- (id)authenticationContext;
- (id)headerImage;
- (id)init;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticationResults:(id)arg2;
- (void)signInViewControllerDidCancel:(id)arg1;
- (void)willAuthenticateWithContext:(id)arg1;

@end
