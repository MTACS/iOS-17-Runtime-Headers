
@interface _SBTodaySpotlightViewController : SBSpotlightMultiplexingViewController {
    <BSInvalidatable> * _displayLayoutAssertion;
    long long  _location;
}

@property (nonatomic, readonly) <BSInvalidatable> *displayLayoutAssertion;
@property (nonatomic) long long location;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (long long)_displayLayoutElementLevel;
- (void)_setDisplayLayoutElementActive:(bool)arg1;
- (void)dealloc;
- (id)displayLayoutAssertion;
- (unsigned long long)level;
- (long long)location;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)setLocation:(long long)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
