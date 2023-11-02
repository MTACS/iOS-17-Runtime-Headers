
@interface GameCenterUI.DashboardPresenter : GameCenterUI.BaseSplitPresenter {
    void didScrollToIndexPath;
    void game;
    void launchContext;
    void onFriendRequestsCountChanged;
    void pageMetricsPresenter;
    void primarySections;
    void request;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requiredData;
    void requiredDataPresenter;
    void scrollToActivityInfo;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  scrollToIndexPath;
    void secondarySections;
    void sections;
    void shouldUseLargeTitle;
}

@property (nonatomic) bool didScrollToIndexPath;
@property (nonatomic) bool displayInSplitView;
@property (nonatomic, copy) NSIndexPath *scrollToIndexPath;
@property (nonatomic) bool shouldUseLargeTitle;
@property (nonatomic, readonly) NSString *title;

+ (void)presentLeaderboardsFrom:(id)arg1 request:(id)arg2 gameRecord:(id)arg3 leaderboard:(id)arg4 animated:(bool)arg5;
+ (void)processLeaderboardRequestFrom:(id)arg1 request:(id)arg2 gameRecord:(id)arg3;

- (void).cxx_destruct;
- (bool)didScrollToIndexPath;
- (bool)displayInSplitView;
- (void)handleViewDidLoad;
- (id)initWithPlayerId:(id)arg1;
- (void)loadMoreActivityFeedWithContinuationToken:(id)arg1;
- (void)presentAchievementsFrom:(id)arg1 request:(id)arg2 gameRecord:(id)arg3;
- (void)presentChallengesFrom:(id)arg1 gameRecord:(id)arg2 shouldShowPlayForChallenge:(bool)arg3;
- (void)presentLeaderboardsFrom:(id)arg1 request:(id)arg2 gameBundleID:(id)arg3;
- (void)presentPlayerProfileFrom:(id)arg1 request:(id)arg2 animated:(bool)arg3;
- (id)scrollToIndexPath;
- (void)setDidScrollToIndexPath:(bool)arg1;
- (void)setDisplayInSplitView:(bool)arg1;
- (void)setScrollToIndexPath:(id)arg1;
- (void)setShouldUseLargeTitle:(bool)arg1;
- (bool)shouldUseLargeTitle;
- (id)title;
- (void)updateSnapshot;

@end
