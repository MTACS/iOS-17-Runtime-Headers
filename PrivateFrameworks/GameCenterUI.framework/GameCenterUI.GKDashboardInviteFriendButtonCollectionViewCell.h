
@interface GameCenterUI.GKDashboardInviteFriendButtonCollectionViewCell : UICollectionViewCell {
    void displayBackground;
    void label;
    void separator;
    void wantsAdditionalHorizontalPadding;
}

@property (nonatomic) bool displayBackground;
@property (nonatomic) bool wantsAdditionalHorizontalPadding;

+ (struct CGSize { double x1; double x2; })sizeWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;

- (void).cxx_destruct;
- (bool)displayBackground;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDisplayBackground:(bool)arg1;
- (void)setWantsAdditionalHorizontalPadding:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateTextColorWith:(id)arg1;
- (bool)wantsAdditionalHorizontalPadding;

@end
