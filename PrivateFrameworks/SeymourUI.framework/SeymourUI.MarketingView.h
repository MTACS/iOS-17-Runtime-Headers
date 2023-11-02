
@interface SeymourUI.MarketingView : UIView {
    void actionItemButtons;
    void actionItemSubtitles;
    void actionItemTitles;
    void actionItemViews;
    void backgroundImageView;
    void delegate;
    void isLoading;
    void lastTappedActionItemButton;
    void layout;
    void logoImageView;
    void offer;
    void onElementAppearance;
    void onElementDisappearance;
    void onImpressionableBoundsChange;
    void onVisibleBoundsChange;
    void pendingOffer;
    void stackView;
    void subtitleLabel;
    void supportingTextLabel;
    void titleLabel;
}

@property (nonatomic, readonly) UIImageView *logoImageView;

- (void).cxx_destruct;
- (void)actionItemButtonTapped:(id)arg1;
- (void)dismissButtonTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)logoImageView;

@end
