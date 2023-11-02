
@protocol WFWidgetConfigurationViewControllerDelegate <NSObject>

@required

- (void)widgetConfigurationViewController:(WFWidgetConfigurationViewController *)arg1 didFinishWithIntent:(INIntent *)arg2;

@optional

- (void)widgetConfigurationViewController:(WFWidgetConfigurationViewController *)arg1 preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2;

@end
