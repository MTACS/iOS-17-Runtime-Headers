
@interface PKAddToWatchOfferViewController : PKExplanationViewController <PKLoadingUIProviding> {
    PKHeroCardWatchExplainationHeaderView * _heroView;
    UIView * _interactionDisabledView;
    PKSecureElementPass * _pass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) PKSecureElementPass *pass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addLater;
- (void)_addToWatch;
- (void)_clearInteractionDisabledView;
- (void)_configureNavigationItem;
- (void)_setIdleTimerDisabled:(bool)arg1;
- (void)addToWatchOfferViewControllerDidNotRequestToAddToWatch;
- (void)addToWatchOfferViewControllerDidRequestToAddToWatch;
- (void)dealloc;
- (unsigned long long)edgesForExtendedLayout;
- (id)initWithPass:(id)arg1 context:(long long)arg2;
- (void)loadView;
- (id)pass;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (void)showSpinner:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
