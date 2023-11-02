
@interface CSFixedFooterViewController : CSCoverSheetViewControllerBase <CSStatusTextViewControllerDelegate> {
    bool  _authenticatedSinceFingerOn;
    <SBFAuthenticationStatusProvider> * _authenticationStatusProvider;
    NSString * _cachedMesaFailureText;
    CSStatusTextViewController * _statusTextViewController;
    bool  _temporaryMesaFailureTextActive;
}

@property (nonatomic, retain) <SBFAuthenticationStatusProvider> *authenticationStatusProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CSFixedFooterView *fixedFooterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)viewClass;

- (void).cxx_destruct;
- (void)_addStatusTextViewControllerIfNecessary;
- (void)_updateCallToActionTextAnimated:(bool)arg1;
- (id)authenticationStatusProvider;
- (void)coverSheetStatusTextViewControllerContentDidChange:(id)arg1;
- (id)fixedFooterView;
- (bool)handleEvent:(id)arg1;
- (id)init;
- (void)setAuthenticationStatusProvider:(id)arg1;
- (void)updateCallToActionForMesaMatchFailure;
- (void)updateCallToActionForReversingInteractiveTransition;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
