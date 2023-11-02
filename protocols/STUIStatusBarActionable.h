
@protocol STUIStatusBarActionable <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })absoluteHoverFrame;
- (STUIStatusBarAction *)action;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })actionInsets;
- (void)disableWithToken:(unsigned long long)arg1;
- (void)enableWithToken:(unsigned long long)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })extendedHoverInsets;
- (STUIStatusBarAction *)hoverAction;
- (bool)hoverHighlightsAsRegion;
- (UIView *)hoverView;
- (<UILayoutItem> *)layoutItem;
- (void)setAction:(STUIStatusBarAction *)arg1;
- (void)setActionInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setExtendedHoverInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHoverAction:(STUIStatusBarAction *)arg1;

@end
