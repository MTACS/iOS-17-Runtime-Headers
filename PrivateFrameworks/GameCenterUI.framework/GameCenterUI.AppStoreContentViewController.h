
@interface GameCenterUI.AppStoreContentViewController : GameCenterUI.BaseViewController {
    void appStoreContentView;
    void bootstrapPresenter;
    void dataPresenter;
    void kvoTokens;
    void pageMetricsPresenter;
    void preferredLargeTitleDisplayMode;
    void startTime;
}

@property (nonatomic, retain) _TtC12GameCenterUI18BootstrapPresenter *bootstrapPresenter;
@property (nonatomic) long long preferredLargeTitleDisplayMode;
@property (nonatomic, readonly) UIScrollView *scrollView;

- (void).cxx_destruct;
- (id)bootstrapPresenter;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGameRecord:(id)arg1;
- (long long)preferredLargeTitleDisplayMode;
- (id)scrollView;
- (void)setBootstrapPresenter:(id)arg1;
- (void)setPreferredLargeTitleDisplayMode:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
