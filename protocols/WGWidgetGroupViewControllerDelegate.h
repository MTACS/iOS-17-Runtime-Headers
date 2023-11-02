
@protocol WGWidgetGroupViewControllerDelegate <UIScrollViewDelegate>

@optional

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })widgetGroupViewController:(WGWidgetGroupViewController *)arg1 contentOccludingInsetsForInterfaceOrientation:(long long)arg2;
- (struct CGSize { double x1; double x2; })widgetGroupViewController:(WGWidgetGroupViewController *)arg1 sizeForInterfaceOrientation:(long long)arg2;
- (void)widgetGroupViewControllerDidChangeHeaderVisibility:(WGWidgetGroupViewController *)arg1;

@end
