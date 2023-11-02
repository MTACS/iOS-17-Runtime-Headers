
@interface GameCenterUI.GKPickerGroupNearbyCell : GameCenterUI.GKPickerGroupNearbyCollectionViewCell {
    void badgeLabel;
    void iconContainer;
    void titleLabel;
}

@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic) UILabel *badgeLabel;
@property (nonatomic) bool highlighted;
@property (nonatomic) UIView *iconContainer;
@property (nonatomic) UILabel *titleLabel;

+ (id)reuseIdentifier;
+ (id)reuseIdentifierAX;

- (void).cxx_destruct;
- (id)accessibilityTitleLabel;
- (void)awakeFromNib;
- (id)badgeLabel;
- (void)configureWithBadgeCount:(long long)arg1;
- (id)iconContainer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)prepareForReuse;
- (void)setBadgeLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconContainer:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
