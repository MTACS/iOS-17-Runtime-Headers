
@protocol CHUISWidgetHostViewControllerDelegate <NSObject>

@optional

- (void)widgetHostViewController:(CHUISWidgetHostViewController *)arg1 requestsLaunch:(CHUISWidgetLaunchRequest *)arg2;
- (void)widgetHostViewController:(CHUISWidgetHostViewController *)arg1 requestsLaunchWithAction:(BSAction *)arg2;
- (void)widgetHostViewControllerUsesSystemBackgroundMaterialDidChange:(CHUISWidgetHostViewController *)arg1;

@end
