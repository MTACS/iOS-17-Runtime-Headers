
@interface GameCenterUI.AchievementDetailViewController : GameCenterUI.BaseViewController <ASCLockupViewDelegate> {
    void achievement;
    void bootstrapPresenter;
    void currentTheme;
    void hostingController;
    void loadWithCustomDetent;
    void pageContext;
    void pageMetricsPresenter;
    void selectedAchievement;
}

- (void).cxx_destruct;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;
- (void)didTapDone;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)lockupViewDidFinishRequest:(id)arg1;
- (id)presentingViewControllerForLockupView:(id)arg1;
- (void)shareButtonPressed;
- (void)showAppStoreProductPage:(id)arg1;
- (void)updateThePreferredSheetDetents;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
