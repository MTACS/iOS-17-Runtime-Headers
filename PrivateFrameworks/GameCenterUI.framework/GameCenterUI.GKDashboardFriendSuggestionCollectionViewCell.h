
@interface GameCenterUI.GKDashboardFriendSuggestionCollectionViewCell : UICollectionViewCell {
    void displayBackground;
    void friendSuggestionLockupView;
    void tapHandler;
    void wantsAdditionalHorizontalPadding;
}

@property (nonatomic) bool displayBackground;
@property (nonatomic, copy) id /* block */ tapHandler;
@property (nonatomic) bool wantsAdditionalHorizontalPadding;

+ (double)horizontalPadding;
+ (struct CGSize { double x1; double x2; })sizeWithFitting:(struct CGSize { double x1; double x2; })arg1 in:(id)arg2;

- (void).cxx_destruct;
- (void)applyWithContact:(id)arg1 previouslyInvited:(bool)arg2;
- (bool)displayBackground;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDisplayBackground:(bool)arg1;
- (void)setInviteButtonTitleColor:(id)arg1;
- (void)setTapHandler:(id /* block */)arg1;
- (void)setWantsAdditionalHorizontalPadding:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id /* block */)tapHandler;
- (bool)wantsAdditionalHorizontalPadding;

@end
