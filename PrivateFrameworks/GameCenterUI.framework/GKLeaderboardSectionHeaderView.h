
@interface GKLeaderboardSectionHeaderView : UICollectionReusableView {
    UIStackView * _container;
    NSLayoutConstraint * _contentInsetBottom;
    NSLayoutConstraint * _contentInsetLeading;
    NSLayoutConstraint * _contentInsetTop;
    NSLayoutConstraint * _contentInsetTrailing;
    bool  _dataUpdated;
    GKGameRecord * _gameRecord;
    GKLeaderboard * _leaderboard;
    GKLeaderboardMetadataView * _personalView;
    GKLeaderboardMetadataView * _socialView;
}

@property (nonatomic, retain) UIStackView *container;
@property (nonatomic, retain) NSLayoutConstraint *contentInsetBottom;
@property (nonatomic, retain) NSLayoutConstraint *contentInsetLeading;
@property (nonatomic, retain) NSLayoutConstraint *contentInsetTop;
@property (nonatomic, retain) NSLayoutConstraint *contentInsetTrailing;
@property (nonatomic) bool dataUpdated;
@property (nonatomic, retain) GKGameRecord *gameRecord;
@property (nonatomic, retain) GKLeaderboard *leaderboard;
@property (nonatomic, retain) GKLeaderboardMetadataView *personalView;
@property (nonatomic, retain) GKLeaderboardMetadataView *socialView;

- (void).cxx_destruct;
- (id)attributedStringWithSymbol:(id)arg1;
- (void)awakeFromNib;
- (id)container;
- (id)contentInsetBottom;
- (id)contentInsetLeading;
- (id)contentInsetTop;
- (id)contentInsetTrailing;
- (bool)dataUpdated;
- (id)formattedNumber:(id)arg1;
- (id)gameRecord;
- (id)leaderboard;
- (id)personalView;
- (void)setContainer:(id)arg1;
- (void)setContentInsetBottom:(id)arg1;
- (void)setContentInsetLeading:(id)arg1;
- (void)setContentInsetTop:(id)arg1;
- (void)setContentInsetTrailing:(id)arg1;
- (void)setDataUpdated:(bool)arg1;
- (void)setGameRecord:(id)arg1;
- (void)setLeaderboard:(id)arg1;
- (void)setPersonalView:(id)arg1;
- (void)setSocialView:(id)arg1;
- (id)socialView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateHighlightsWithGameRecord:(id)arg1 leaderboardCount:(long long)arg2 setCount:(long long)arg3;
- (void)updateLayout;

@end
