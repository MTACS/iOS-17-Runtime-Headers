
@interface GameCenterUI.GKDashboardShowMoreFooterView : UICollectionReusableView {
    void actionHandler;
    void label;
    void showMoreText;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, copy) NSString *showMoreText;

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (bool)canBecomeFocused;
- (void)didTap:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setShowMoreText:(id)arg1;
- (id)showMoreText;

@end
