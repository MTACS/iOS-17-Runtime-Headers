
@protocol SBHWidgetStackViewControllerDelegate <NSObject>

@optional

- (void)widgetStackViewController:(SBHWidgetStackViewController *)arg1 didActivateDataSource:(id <SBLeafIconDataSource>)arg2 fromUserInteraction:(bool)arg3;
- (void)widgetStackViewController:(SBHWidgetStackViewController *)arg1 didFinishUsingBackgroundView:(UIView *)arg2;
- (void)widgetStackViewController:(SBHWidgetStackViewController *)arg1 didRemoveViewController:(UIViewController *)arg2;
- (void)widgetStackViewControllerWidgetCountDidChange:(SBHWidgetStackViewController *)arg1;

@end
