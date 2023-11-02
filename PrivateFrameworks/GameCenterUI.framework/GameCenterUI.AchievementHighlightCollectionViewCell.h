
@interface GameCenterUI.AchievementHighlightCollectionViewCell : UICollectionViewCell {
    void achievementsTheme;
    void decorationView;
    void subtitle;
    void title;
    void wantsVerticalLayout;
}

@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) bool canBecomeFocused;

- (void).cxx_destruct;
- (id)accessibilitySubtitleLabel;
- (id)accessibilityTitleLabel;
- (bool)canBecomeFocused;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
