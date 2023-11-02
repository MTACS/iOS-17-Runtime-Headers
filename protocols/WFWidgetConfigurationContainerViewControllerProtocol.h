
@protocol WFWidgetConfigurationContainerViewControllerProtocol <NSObject>

@required

- (UIColor *)containerBackgroundColor;
- (<WFWidgetConfigurationContainerViewControllerProtocolDelegate> *)containerDelegate;
- (UIViewController *)contentViewController;
- (MTVisualStylingProvider *)fillProvider;
- (id)initWithRequest:(WFWidgetConfigurationRequest *)arg1 contentViewController:(UIViewController *)arg2;
- (WFWidgetConfigurationRequest *)request;
- (void)setContainerBackgroundColor:(UIColor *)arg1;
- (void)setContainerDelegate:(id <WFWidgetConfigurationContainerViewControllerProtocolDelegate>)arg1;
- (MTVisualStylingProvider *)strokeProvider;

@end
