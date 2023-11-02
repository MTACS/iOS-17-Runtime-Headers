
@interface GKTimeScopeButton : GKDynamicButton {
    long long  _leaderboardOccurrence;
    long long  _timeScope;
}

@property (nonatomic) long long leaderboardOccurrence;
@property (nonatomic) long long timeScope;

- (void)_commonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)leaderboardOccurrence;
- (void)setLeaderboardOccurrence:(long long)arg1;
- (void)setTimeScope:(long long)arg1;
- (long long)timeScope;
- (void)updateWithTitle:(id)arg1;

@end
