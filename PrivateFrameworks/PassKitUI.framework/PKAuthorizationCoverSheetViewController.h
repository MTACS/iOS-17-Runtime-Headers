
@interface PKAuthorizationCoverSheetViewController : UIViewController <PKAuthenticatorDelegate> {
    bool  _authenticating;
    PKAuthenticator * _authenticator;
    long long  _coachingState;
    unsigned long long  _currentState;
    <PKAuthorizationCoverSheetViewControllerDelegate> * _delegate;
    UIButton * _enterPasscodeButton;
    PKGlyphView * _glyphView;
    bool  _hasAttemptedBiometricAuth;
    bool  _hasPresentedPasscodePrompt;
    bool  _isErrorRecovery;
    bool  _isInvalid;
    bool  _isWaitingForPasscodeUI;
    UIAccessibilityElement * _passcodeAccessibilityElement;
    UIViewController * _passcodeViewController;
    id /* block */  _performSynchronizedFadeInAnimationBlock;
    long long  _presentationSource;
    bool  _shouldDrawGlyph;
    bool  _shouldUIBeShown;
    id /* block */  _showPasscodeUICompletion;
    UILabel * _subtitleLabelView;
    UIAccessibilityElement * _textAccessibilityElement;
    UILabel * _titleLabelView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isErrorRecovery;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateInPasscodeViewController;
- (bool)_canShowWhileLocked;
- (void)_fallbackToPasscode;
- (id)_genericBiometricFailureLabelAccessibilityLabel:(bool)arg1;
- (id)_genericBiometricLabelAccessibilityLabel:(bool)arg1;
- (id)_genericBiometricUnavailableLabelAccessibilityLabel:(bool)arg1;
- (id)_passcodeLabelAccessibilityLabel:(bool)arg1;
- (void)_presentPasscodeToExitLockout;
- (void)_transitionToState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;
- (void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(struct { long long x1; long long x2; })arg2;
- (void)dealloc;
- (void)dismissPasscodeViewController;
- (void)fadeInUIAnimated:(bool)arg1 performSynchronizedAnimation:(id /* block */)arg2;
- (void)fadeOutUIWithCompletion:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1 authenticator:(id)arg2 source:(long long)arg3;
- (void)invalidate;
- (bool)isErrorRecovery;
- (void)loadView;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;
- (void)setIsErrorRecovery:(bool)arg1;
- (void)startEvaluation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
