
@interface AMSUIInlineDialogView : AMSUICommonView

- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (id)_contentView;
- (bool)_layoutHeightDependsOnWidth;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
