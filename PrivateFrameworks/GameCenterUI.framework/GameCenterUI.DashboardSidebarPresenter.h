
@interface GameCenterUI.DashboardSidebarPresenter : GameCenterUI.BasePresenter {
    void achievementIdToPresentOnFirstLoad;
    void dashboardDisplayMode;
    void game;
    void intentOnFirstLoad;
    void launchContext;
    void onRequiredDataChanged;
    void onSelectedItem;
    void pageMetricsPresenter;
    void request;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requiredData;
    void requiredDataPresenter;
    void sections;
    void selectedItem;
}

@property (nonatomic, readonly) GKDashboardRequest *request;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (void)handleViewDidLoad;
- (id)initWithPlayerId:(id)arg1;
- (id)request;
- (id)title;

@end
