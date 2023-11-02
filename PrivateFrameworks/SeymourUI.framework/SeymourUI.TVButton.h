
@interface SeymourUI.TVButton : UIControl {
    void activityIndicator;
    void backgroundVisualEffectView;
    void bottomPaddingConstraint;
    void contentView;
    void floatingView;
    void ignoreContentInsets;
    void isLoading;
    void isPillShape;
    void layout;
    void leftPaddingConstraint;
    void menu;
    void onWillDisplayMenu;
    void rightPaddingConstraint;
    void topPaddingConstraint;
    void underlyingContentInset;
    void underlyingControlState;
}

@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (bool)canBecomeFocused;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
