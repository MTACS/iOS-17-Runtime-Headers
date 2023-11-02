
@protocol _UINavigationBarTitleViewDataSource <NSObject>

@required

- (void)titleView:(UIView<_UINavigationBarAugmentedTitleView> *)arg1 needsUpdatedContentOverlayRects:(_UINavigationBarTitleViewOverlayRects *)arg2;
- (UIMenu *)titleViewBackButtonMenu:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedDisplayItemAlpha:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedHeight:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedLayout:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedMaximumBackButtonWidth:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedPreferredDisplaySize:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedStandardDisplayItems:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (void)titleViewChangedUnderlayContent:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (double)titleViewContentBaseHeight:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (double)titleViewContentBaselineOffsetFromTop:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (double)titleViewLargeTitleHeight:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;
- (struct { double x1; double x2; })titleViewLargeTitleHeightRange:(UIView<_UINavigationBarAugmentedTitleView> *)arg1;

@end
