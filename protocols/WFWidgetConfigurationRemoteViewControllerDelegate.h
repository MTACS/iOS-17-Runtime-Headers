
@protocol WFWidgetConfigurationRemoteViewControllerDelegate <NSObject>

@required

- (void)widgetConfigurationRemoteViewController:(WFWidgetConfigurationRemoteViewController *)arg1 didReceiveConfiguredIntent:(INIntent *)arg2;
- (void)widgetConfigurationRemoteViewController:(WFWidgetConfigurationRemoteViewController *)arg1 preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2;

@end
