
@interface VideosUI.UberNavigationBarTitleView : _UINavigationBarTitleView <VUIViewScrollPercentageUpdateProtocol> {
    void customBackButton;
    void dismissalDisplayMode;
    void futureDisplayMode;
    void hostViewController;
    void isBackButtonHidden;
    void isUber;
    void showUberState;
    void titleOpacity;
    void titleView;
    void touchProxyView;
}

- (void).cxx_destruct;
- (void)contentDidChange;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setScrolledNonUberPercentage:(double)arg1;

@end
