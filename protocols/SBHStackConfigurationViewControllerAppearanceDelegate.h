
@protocol SBHStackConfigurationViewControllerAppearanceDelegate <NSObject>

@required

- (void)stackConfigurationViewControllerDidAppear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)stackConfigurationViewControllerDidDisappear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)stackConfigurationViewControllerWillAppear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;
- (void)stackConfigurationViewControllerWillDisappear:(UIViewController<SBHWidgetSheetViewControlling> *)arg1;

@end
