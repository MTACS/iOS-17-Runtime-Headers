
@interface AKBaseSignInViewController : UIViewController <AKBasicLoginAnimateProtocol> {
    bool  _authInProgress;
    AKAppleIDAuthenticationController * _authenticationController;
    AKAppleIDAuthenticationInAppContext * _context;
    <AKSignInViewControllerDelegate> * _delegate;
    bool  _isPhoneNumberLoginSupported;
    AKAppleIDProximityAuthenticationContext * _proximityContext;
    bool  _usesDarkMode;
}

@property (getter=isAuthInProgress, nonatomic) bool authInProgress;
@property (nonatomic, readonly) AKAppleIDAuthenticationController *authenticationController;
@property (nonatomic, retain) AKAppleIDAuthenticationInAppContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKSignInViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPhoneNumberLoginSupported;
@property (readonly) Class superclass;
@property (nonatomic) bool usesDarkMode;

- (void).cxx_destruct;
- (void)_authenticateWithContext:(id)arg1;
- (void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)arg1 withUsername:(id)arg2 password:(id)arg3;
- (void)_beginProximityAdvertisement;
- (bool)_canBeginAuthenticationWithOption:(unsigned long long)arg1;
- (void)_endProximityAdvertisement;
- (id)_initWithAuthController:(id)arg1;
- (id)_initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)_isAccountModificationRestricted;
- (bool)_isSignInAllowed;
- (void)_provideDelegateWithAuthResults:(id)arg1 error:(id)arg2;
- (id)_serverFriendlyUsername:(id)arg1;
- (void)_setPasswordFieldHidden:(bool)arg1 animated:(bool)arg2;
- (void)_setPasswordFieldHiddenIfNeeded;
- (id)authenticationController;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (bool)isAuthInProgress;
- (bool)isPhoneNumberLoginSupported;
- (void)setAuthInProgress:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsPhoneNumberLoginSupported:(bool)arg1;
- (void)setUsesDarkMode:(bool)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (bool)usesDarkMode;
- (void)viewDidAppear:(bool)arg1;

@end
