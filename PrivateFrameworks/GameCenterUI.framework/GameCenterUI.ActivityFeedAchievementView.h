
@interface GameCenterUI.ActivityFeedAchievementView : UIView {
    void achievementCardContainer;
    void achievementConfettiView;
    void contentBackgroundView;
    void didHideOutOfBoundsCard;
    void gameControllerSelectButtonDestination;
    void sharedView;
    void stackAchievementCards;
    void stackedCardMaskOffsetsX;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
