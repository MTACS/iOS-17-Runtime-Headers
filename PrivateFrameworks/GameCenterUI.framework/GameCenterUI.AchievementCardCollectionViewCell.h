
@interface GameCenterUI.AchievementCardCollectionViewCell : GameCenterUI.BaseCollectionViewCell {
    void achievementCard;
    void wantsCompactLayoutMetrics;
}

@property (nonatomic, readonly) bool canBecomeFocused;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
