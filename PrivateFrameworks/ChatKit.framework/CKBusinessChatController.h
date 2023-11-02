
@interface CKBusinessChatController : CKChatController {
    CKNavbarCanvasViewController * _navbarCanvasViewController;
}

@property (nonatomic, retain) CKNavbarCanvasViewController *navbarCanvasViewController;

- (void).cxx_destruct;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)_updateNavigationUI;
- (bool)canShowBusinessOnboarding;
- (void)cleanUpBizNavBarIfNecessary;
- (void)loadView;
- (id)navbarCanvasViewController;
- (long long)preferredStatusBarStyle;
- (void)setNavbarCanvasViewController:(id)arg1;
- (void)setupBizNavBarIfNecessary;
- (bool)shouldListParticipantsInTitle;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;

@end
