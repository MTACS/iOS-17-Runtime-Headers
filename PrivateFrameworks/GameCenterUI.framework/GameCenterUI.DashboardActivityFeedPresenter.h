
@interface GameCenterUI.DashboardActivityFeedPresenter : GameCenterUI.BasePresenter {
    void dashboardDisplayMode;
    void didScrollToIndexPath;
    void pageMetricsPresenter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requiredData;
    void requiredDataPresenter;
    void scrollToActivityInfo;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  scrollToIndexPath;
    void sections;
}

@property (nonatomic) bool didScrollToIndexPath;
@property (nonatomic, copy) NSIndexPath *scrollToIndexPath;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (bool)didScrollToIndexPath;
- (id)initWithPlayerId:(id)arg1;
- (void)loadMoreActivityFeedWithContinuationToken:(id)arg1;
- (id)scrollToIndexPath;
- (void)setDidScrollToIndexPath:(bool)arg1;
- (void)setScrollToIndexPath:(id)arg1;
- (id)title;
- (void)updateSnapshot;

@end
