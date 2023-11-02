
@interface GameCenterUI.FriendsFeedPresenter : GameCenterUI.BasePresenter {
    void game;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  requiredData;
    void requiredDataPresenter;
    void sections;
}

- (void).cxx_destruct;
- (id)initWithGame:(id)arg1;
- (id)initWithPlayerId:(id)arg1;
- (void)loadMoreActivityFeedWithContinuationToken:(id)arg1;
- (void)updateSnapshot;

@end
