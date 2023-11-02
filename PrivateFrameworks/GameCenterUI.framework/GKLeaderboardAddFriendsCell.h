
@interface GKLeaderboardAddFriendsCell : UICollectionViewCell {
    _TtC12GameCenterUI22GKAddFriendsLockupView * _addFriendsLockupView;
    UIView * _container;
    long long  _friendCount;
    _TtC12GameCenterUI14EmptyStateView * _noFriendsView;
    UIView * _topLine;
}

@property (nonatomic) _TtC12GameCenterUI22GKAddFriendsLockupView *addFriendsLockupView;
@property (nonatomic, retain) UIView *container;
@property (nonatomic) long long friendCount;
@property (nonatomic) bool lineVisible;
@property (nonatomic) _TtC12GameCenterUI14EmptyStateView *noFriendsView;
@property (nonatomic, retain) UIView *topLine;

- (void).cxx_destruct;
- (id)addFriendsLockupView;
- (void)awakeFromNib;
- (void)clearContainer;
- (void)configureAddFriendsLockupWithMetricsPageId:(id)arg1 handler:(id /* block */)arg2;
- (void)configureNoFriendsViewWithHandler:(id /* block */)arg1;
- (id)container;
- (long long)friendCount;
- (bool)lineVisible;
- (id)noFriendsView;
- (struct CGSize { double x1; double x2; })preferredLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAddFriendsLockupView:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setFriendCount:(long long)arg1;
- (void)setLineVisible:(bool)arg1;
- (void)setNoFriendsView:(id)arg1;
- (void)setTopLine:(id)arg1;
- (id)topLine;

@end
