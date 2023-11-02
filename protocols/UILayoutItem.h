
@protocol UILayoutItem <UITraitEnvironment>

@required

- (void)_ui_addSubLayoutItem:(id <UILayoutItem>)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_ui_bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_ui_frame;
- (void)_ui_insertSubLayoutItem:(id <UILayoutItem>)arg1 atIndex:(long long)arg2;
- (void)_ui_removeFromParentLayoutItem;
- (UIView *)_ui_superview;
- (bool)_ui_usesManualLayout;
- (UIView *)_ui_view;
- (NSLayoutYAxisAnchor *)bottomAnchor;
- (NSLayoutXAxisAnchor *)centerXAnchor;
- (NSLayoutYAxisAnchor *)centerYAnchor;
- (NSLayoutYAxisAnchor *)firstBaselineAnchor;
- (NSLayoutDimension *)heightAnchor;
- (NSLayoutYAxisAnchor *)lastBaselineAnchor;
- (NSLayoutXAxisAnchor *)leadingAnchor;
- (NSLayoutXAxisAnchor *)leftAnchor;
- (NSLayoutXAxisAnchor *)rightAnchor;
- (void)set_ui_frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_ui_usesManualLayout:(bool)arg1;
- (NSLayoutYAxisAnchor *)topAnchor;
- (NSLayoutXAxisAnchor *)trailingAnchor;
- (NSLayoutDimension *)widthAnchor;

@end
