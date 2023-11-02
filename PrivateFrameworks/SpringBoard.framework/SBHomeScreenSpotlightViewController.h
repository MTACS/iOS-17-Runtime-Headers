
@interface SBHomeScreenSpotlightViewController : SBSpotlightMultiplexingViewController {
    <BSInvalidatable> * _displayLayoutAssertion;
    <SBHomeScreenSpotlightDismissalDelegate> * _homescreenSpotlightDelegate;
}

@property (nonatomic, readonly) <BSInvalidatable> *displayLayoutAssertion;
@property (nonatomic, readonly) <SBHomeScreenSpotlightDismissalDelegate> *homescreenSpotlightDelegate;

- (void).cxx_destruct;
- (void)_setDisplayLayoutElementActive:(bool)arg1;
- (void)dealloc;
- (id)displayLayoutAssertion;
- (id)homescreenSpotlightDelegate;
- (id)initWithDelegate:(id)arg1;
- (unsigned long long)level;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
