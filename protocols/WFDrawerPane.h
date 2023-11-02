
@protocol WFDrawerPane <NSObject>

@required

- (UIView<WFDrawerPaneHeaderView> *)activeHeaderView;
- (double)bottomContentInset;
- (WFDrawerPaneContainer *)container;
- (double)fauxHeaderHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })grabberAreaBounds;
- (id)initWithViewController:(UIViewController *)arg1;
- (UISearchBar *)searchBar;
- (void)setActiveHeaderView:(UIView<WFDrawerPaneHeaderView> *)arg1;
- (void)setBottomContentInset:(double)arg1;
- (void)setContainer:(WFDrawerPaneContainer *)arg1;
- (void)setFauxHeaderHeight:(double)arg1;
- (void)setSearchBar:(UISearchBar *)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setTitleView:(UIView *)arg1;
- (void)setViewController:(UIViewController *)arg1;
- (NSString *)title;
- (UIView *)titleView;
- (double)topCornerRadius;
- (UIViewController *)viewController;

@optional

- (void)didTransitionToVisibility:(unsigned long long)arg1;
- (void)transitionContentForHeight:(double)arg1;
- (void)willTransitionToVisibility:(unsigned long long)arg1;

@end
