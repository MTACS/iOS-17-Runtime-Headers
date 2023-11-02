
@protocol _UIContextMenuCellLayout <NSObject>

@required

- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })backgroundViewInsets;
- (long long)focusStyle;
- (UIHoverStyle *)hoverStyle;
- (id)initWithContentView:(_UIContextMenuCellContentView *)arg1;
- (void)installConstraints;
- (unsigned long long)labelMaximumNumberOfLines;
- (long long)labelTextAlignment;
- (long long)layoutSize;
- (UIColor *)preferredBackgroundColorForCurrentState;
- (UIColor *)preferredContentColorForCurrentState;
- (UIFont *)preferredIconFontUsingBoldFont:(bool)arg1;
- (void)removeConstraints;
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (void)updateConstraints;

@end
